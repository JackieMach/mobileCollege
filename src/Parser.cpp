#include <iostream>
#include <string>
#include <list>

using namespace std;

#include "../headerCollections/SchoolSeasons.h"
#include "../headerCollections/Courses.h"
#include "../headerCollections/Parser.h"

//Public Constructors
Parser::Parser()
{}

Parser::Parser(SchoolSeason main) {
    this->main = main;
}

void Parser::fillSchoolSeason(string fileName) {
    ifstream input;
    input.open(fileName.c_str());
    if(!input.is_open()) {
        cout << "ERROR --------- INVALID FILENAME. PLEASE CHECK INPUT" << endl;
        return -1;
    }

    string curr;
    getline(input, curr);
    cout << curr << endl;




    input.close();
}

//End of Public Constructors
