#ifndef __COURSES_H__
#define __COURSES_H__

class Courses {
    private:
        string courseID;
        string courseName;
        unsigned units;
        string days;
        string time;
        string location;

    public:
        //Public Constructors
        Courses();
        Courses(string courseName);
        Courses(string courseID, string courseName, unsigned units, string days, string time, string location);

        void changeCourseID(string newCourseID);
        void changeCourseName(string newCourseName);
        void changeUnitsCtr(int newUnitCtr);
        void changeDays(string newDays);
        void changeTimes(string newTimes);
        void changeLocations(string newLocations);

        void printCourses();
};
#endif
