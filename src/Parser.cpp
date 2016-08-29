#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <fstream>

using namespace std;

#include "../headerCollections/SchoolSeasons.h"
#include "../headerCollections/Courses.h"
#include "../headerCollections/Parser.h"

//Public Constructors
Parser::Parser()
{}
//End of Public Constructors

void Parser::fillSchoolSeason(string fileName) {
    ifstream input;
    input.open(fileName.c_str());
    if(!input.is_open()) {
        cout << "ERROR --------- INVALID FILENAME. PLEASE CHECK INPUT" << endl;
        exit(1);
    }

    string curr = "";
    while(getline(input, curr, ' ')) {
        cout << curr << endl;
    }

    input.close();
}

//End of Public Constructors
