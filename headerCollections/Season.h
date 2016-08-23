#ifndef __SEASONS_H__
#define __SEASONS_H__

class Seasons {
    private:
        unsigned year;
        string season;
        string typeOfSystem; //Quarterly, semster, etc

    public:
        Seasons(unsigned year, string season, string typeOfSystem);

        void changeYear(unsigned newYear);
        void changeSeason(string newSeason);
        void changeTypeOfSystem(string newTypeOfSystem);
}
#endif
