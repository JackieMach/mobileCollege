#include <string>

#include "Courses.h"
#include "SchoolSeasons.h"

class Parser {
    private:
        SchoolSeason main;

        void grabClassName(ifstream &, SchoolSeason *);
        void grabClassData(ifstream &, Courses *);

    public:
        Parser();

        void fillSchoolSeason(string fileName);
};
