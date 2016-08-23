#include <iostream>
#include <string>
#include <list>

using namespace std;

#include "../headerCollections/SchoolSeasons.h"
#include "../headerCollections/Courses.h"

//Public Constructors
SchoolSeason::SchoolSeason() {
    currentSeason = "N/A";
    dateOfOrigns = "N/A";
    dateOfTermination = "N/A";
}

SchoolSeason::SchoolSeason(string currentSeason) {
    this->currentSeason = currentSeason;
    dateOfOrigns = "N/A";
    dateOfTermination = "N/A";
}

SchoolSeason::SchoolSeason(string currentSeason, string dateOfOrigns) {
    this->currentSeason = currentSeason;
    this->dateOfOrigns = dateOfOrigns;
    dateOfTermination = "N/A";
}

SchoolSeason::SchoolSeason(string currentSeason, string dateOfOrigns, string dateOfTermination) {
    this->currentSeason = currentSeason;
    this->dateOfOrigns = dateOfOrigns;
    this->dateOfTermination = dateOfTermination;
}
//End of Public Constructors

//Public Member Functions
void SchoolSeason::setCurrentSeason(string newSeason) {
    currentSeason = newSeason;
}

void SchoolSeason::setDateOfOrigns(string newDateOfOrigns) {
    dateOfOrigns = newDateOfOrigns;
}

void SchoolSeason::setDateOfTermination(string newDateOfTermination) {
    dateOfTermination = newDateOfTermination;
}

void SchoolSeason::addCourses(Courses *newCourse) {
    courseCollection.push_back(newCourse);
}

void SchoolSeason::deleteCourses(Courses *deleteCourse) {
    for(Courses* i : courseCollection)
        if(i == deleteCourse)
            courseCollection.remove(i);
}

void SchoolSeason::reset() {
    courseCollection.clear();
}

void SchoolSeason::print() {
    for(Courses* i : courseCollection) {
        i->printCourses();
    }
}

void SchoolSeason::prettyPrint() {
    cout << "PRETTYPRINT NEEDS IMPLEMENTATION" << endl;
}
//End of Public Member Functions
