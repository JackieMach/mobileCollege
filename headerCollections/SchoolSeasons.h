#ifndef __SCHOOLSEASON_H__
#define __SCHOOLSEASON_H__

#include "Courses.h"

class SchoolSeason {
    private:
        string currentSeason;
        string dateOfOrigns;
        string dateOfTermination;
        List< Courses* > courseCollection;

    public:
        SchoolSeason();
        SchoolSeason(Season currentSeason);
        SchoolSeason(Season currentSeason, string dateOfOrigns);
        SchoolSeason(Season currentSeason, string dateOfOrigns, string dateOfTermination);

        void setCurrentSeason(string newSeason);
        void setDateOfOrigns(string newDateOfOrigns);
        void setDateOfTermination(string newDateOfTermination);
        void addCourses(Courses *newCourse);
        void deleteCourses(Courses *deleteCourse);
        void reset();
        void print(); //Simple print
        void prettyPrint(); //Prints with calender - (Calender needs implementation)
};
#endif
