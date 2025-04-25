#include "workout.h"

class Program {

    public:

    void update_calories();


    private:


    int day;      //0 = Push, 1 = Pull, 2 = Legs
    float weight; //kg
    int height;   //cm
    bool gender;  //true = male, false = female
    float calories_burned;

};