#include <string>

#include "Courses.h"
#include "SchoolSeasons.h"

class Parser {
    private:
        SchoolSeason main;

    public:
        Parser();

        void fillSchoolSeason(string fileName);
};
