#include <iostream>

using namespace std;

#include "Courses.cpp"
#include "SchoolSeason.cpp"
#include "Parser.cpp"

//Testing list proper
void test1() {
    Courses* class1 = new Courses("CS111", "DISCRETE STRUCTURES", 4, "TR", "0810AM-0930AM", "BRNHL A125");
    Courses* class2 = new Courses("CS111", "DISCUSSION", 0, "F", "1010AM-1100AM", "SPTH 1222");
    Courses* class3 = new Courses("CS120A", "LOGIC DESIGN", 5, "TR", "0810PM-0930PM", "MSE 116");
    Courses* class4 = new Courses("CS120A", "LABORATORY", 0, "T", "0510PM-0800PM", "CHUNG 125");
    Courses* class5 = new Courses("CS130", "COMPUTER GRAPHICS", 4, "MWF", "1110AM-1200PM", "MSE 103");
    Courses* class6 = new Courses("CS130", "LABORATORY", 0, "M", "0410PM-0700PM", "CHUNG 129");
    Courses* class7 = new Courses("MATH-046", "ORDINARY DIFF EQUATIONS", 4, "TR", "0340PM-0500PM", "SPTH 2200");
    Courses* class8 = new Courses("MATH-046", "DISCUSSION", 0.00, "M", "1210PM-0100PM", "MSE 003");

    SchoolSeason *test1 = new SchoolSeason();
    test1->addCourses(class1);
    test1->addCourses(class2);
    test1->addCourses(class3);
    test1->addCourses(class4);
    test1->addCourses(class5);
    test1->addCourses(class6);
    test1->addCourses(class7);
    test1->addCourses(class8);

    test1->print();
    test1->deleteCourses(class4);
    test1->print();
}

//Testing overloaded == operator
void test2() {
    Courses* class1 = new Courses("CS111", "DISCRETE STRUCTURES", 4, "TR", "0810AM-0930AM", "BRNHL A125");
    Courses* class2 = new Courses("CS111", "DISCUSSION", 0, "F", "1010AM-1100AM", "SPTH 1222");

    if(class1 == class2)
        cout << "True" << endl;
    cout << "False" << endl;
}

//Testing Parser
void test3() {
    cout << "Test3 ----- Parser" << endl;

    Parser *s = new Parser();
    s->fillSchoolSeason("webFormat.txt");



    cout << "End of Test3" << endl;
}

int main(int argc, char**argv) {
    //test1();
    //test2();
    test3();
    return 0;
}
