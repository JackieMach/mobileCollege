#include <iostream>
#include <string>
#include "../headerCollections/Courses.h"

using namespace std;

Courses::Courses() {
    courseID = "N/A";
    courseName = "N/A";
    units = 0;
    days = "N/A";
    time = "N/A";
    location = "N/A";
}

Courses::Courses(string courseName) {
    courseID = "N/A";
    this->courseName = courseName;
    units = 0;
    days = "N/A";
    time = "N/A";
    location = "N/A";
}

Courses::Courses(string courseID, string courseName, unsigned units, string days, string time, string location) {
    this->courseID = courseID;
    this->courseName = courseName;
    this->units = units;
    this->days = days;
    this->time = time;
    this->location = location;
}

void Courses::changeCourseID(string newCourseID) {
    courseID = newCourseID;
}

void Courses::changeCourseName(string newCourseName) {
    courseName = newCourseName;
}

void Courses::changeUnitsCtr(int newUnitCtr) {
    units = newUnitCtr;
}

void Courses::changeDays(string newDays) {
    days = newDays;
}

void Courses::changeTimes(string newTimes) {
    time = newTimes;
}

void Courses::changeLocations(string newLocation) {
    location = newLocation;
}

void Courses::printCourses() {
    //Course Name
    //Course ID     Units   Days    Times   Location
    cout << courseName << endl;
    cout << courseID << '\t' << units << '\t' << days << '\t' << time << '\t' << location << endl;
}
