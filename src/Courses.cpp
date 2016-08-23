#include <iostream>
#include <string>
#include "../headerCollections/Courses.h"

using namespace std;


Courses::Courses() {
    courseName = "N/A";
    units = 0;
    days = "N/A";
    time = "N/A";
    location = "N/A";
}

Courses::Courses(string courseName) {
    this->courseName = courseName;
    units = 0;
    days = "N/A";
    time = "N/A";
    location = "N/A";
}

Courses::Courses(string courseName, unsigned units, string days, string time, string location) {
    this->courseName = courseName;
    this->units = units;
    this->days = days;
    this->time = time;
    this->location = location;
}
