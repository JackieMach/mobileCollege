#include <string>

#include "Course.h"
#include "SchoolSeason.h"

class Parser {
    private:
        SchoolSeason main;

    public:
        Parser();
        Parser(SchoolSeason main);

        void fillSchoolSeason(string fileName);
}
