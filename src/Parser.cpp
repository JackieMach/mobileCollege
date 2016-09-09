#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <assert.h>

using namespace std;

#include "../headerCollections/SchoolSeasons.h"
#include "../headerCollections/Courses.h"
#include "../headerCollections/Parser.h"

//Public Constructors
Parser::Parser()
{}
//End of Public Constructors

//Start of Public Functions
void Parser::fillSchoolSeason(string fileName) {
    ifstream input;
    input.open(fileName.c_str());
    if(!input.is_open()) {
        cout << "ERROR --------- INVALID FILENAME. PLEASE CHECK INPUT" << endl;
        exit(1);
    }

    string temp = "";
    getline(input, temp);
    string seasonName = temp.substr(23, temp.size()-1);

    SchoolSeason *currSeason = new SchoolSeason(seasonName);

    for(unsigned i=0; i<2; i++) {
        getline(input, temp);
    }

    while(getline(input, temp)) {
        string courseName = temp;
        //cout << "Title: " << courseName << endl;

        getline(input, temp);
        string courseData = temp;
        //cout << "Data: " << courseData << endl;
        if(courseData.find("Total") != std::string::npos) {
            break;
        }

        courseData.erase(remove(courseData.begin(), courseData.end(), ' '), courseData.end());

        vector<string> dataVector;
        istringstream iss(courseData);
        string curr;
        while(iss >> curr)
            dataVector.push_back(curr);

        assert(dataVector.size() >= 6);

        /*
        for(string s : dataVector) {
            cout << s << endl;
        }
        cout << endl;
        */

        string courseID = dataVector.at(0);
        double units;
        string days;
        string time;
        string location;

        if(dataVector.at(1) == "NG") {
            units = atof(dataVector.at(2).c_str());
            days = dataVector.at(3);
            time = dataVector.at(4);
            location = dataVector.at(5) + " " + dataVector.at(6);
        }
        else {
            units = atof(dataVector.at(1).c_str());
            days = dataVector.at(2);
            time = dataVector.at(3);
            location = dataVector.at(4) + " " + dataVector.at(5);
        }

        Courses *star = new Courses(courseID, courseName, units, days, time, location);
        currSeason->addCourses(star);

        getline(input, temp);
    }
    currSeason->print();

    input.close();
}
//End of Public Functions
