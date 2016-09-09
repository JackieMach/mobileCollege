#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

#include "../headerCollections/SchoolSeasons.h"
#include "../headerCollections/Courses.h"
#include "../headerCollections/Parser.h"

//Public Constructors
Parser::Parser()
{}
//End of Public Constructors

void Parser::grabClassName(ifstream &input, SchoolSeason *season) {
    string curr = "";
    unsigned i=0;
    getline(input, curr, '\n');

    while(getline(input, curr, '\n')) {
        Courses *newCourse = new Courses(curr);
        cout << curr << " = ";

        getline(input, curr, '\n');
        char *cstr;
        strcpy(cstr, curr.c_str());
        char *p;
        p = strtok(cstr, " \t\n");

        string tempWord = "";
        while(p != NULL) {
            p = strtok(cstr, " \t\n");
            tempWord += p;
        }
        cout << tempWord << endl;

        cout << "Done" << endl;
        break;
    }
}

void Parser::grabClassData(ifstream &input, Courses *newCourse) {
    string curr = "";
    getline(input, curr, '\n');

    char *cstr;
    strcpy(cstr, curr.c_str());
    char *p;
    p = strtok(cstr, " \t\n");

    string tempWord = "";
    for(p; p!=NULL; p = strtok(NULL, " \t\n")) {
        //char *checkDot = strchr(p, '.');


        tempWord += p;
    }

    /*
    string tempWord = "";
    while(p != 0) {
        string pstr = string(p);
        size_t pStrPos = pstr.find('.');
        if(pStrPos != std::string::npos) {
            cout << "Here" << endl;
        }

        tempWord += p;
        cout << tempWord << endl;
        p = strtok(NULL, "\t");
    }
    */
}

void Parser::fillSchoolSeason(string fileName) {
    ifstream input;
    input.open(fileName.c_str());
    if(!input.is_open()) {
        cout << "ERROR --------- INVALID FILENAME. PLEASE CHECK INPUT" << endl;
        exit(1);
    }

    SchoolSeason *season = new SchoolSeason();

    string curr = "";
    for(unsigned i=0; i<4; i++) {
        getline(input, curr, ' ');
    }

    string currentSeason = "";
    getline(input, curr, ' ');
    currentSeason += curr + " ";
    getline(input, curr, ' ');
    currentSeason += curr + " ";
    currentSeason += "Quarter";

    //cout << currentSeason << endl;
    season->setCurrentSeason(currentSeason);

    getline(input, curr, ' ');
    getline(input, curr, ' ');
    while(input.good()) {
        grabClassName(input, season);
        break;
    }

    input.close();
}

//End of Public Constructors
