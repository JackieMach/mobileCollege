#include <iostream>

using namespace std;

#include "Courses.cpp"

int main(int argc, char**argv) {
    Courses *test1 = new Courses();
    Courses *test2 = new Courses("CS - 199");
    Courses *test3 = new Courses("CS - 199", 4, "T/R", "9:00AM - 10:00AM", "WCH 199");




    return 0;
}
