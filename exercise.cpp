#include "exercise.h"
#include <iostream>

void Exercise::setDetails(std::string name)
{
    exercise_name = name;
}
void Exercise::setIntensity(std::string intensity)
{
    if (intensity == "light")
    {
        sets = 3;
        reps = 8;
    }
    else if (intensity == "moderate")
    {
        sets = 3;
        reps = 10;
    }
    else if (intensity == "heavy")
    {
        sets = 4;
        reps = 10;
    }
}
void Exercise::displayDetails() const
{
    std::cout << exercise_name << ": " << sets
              << " sets of " << reps << " reps" << std::endl;
}
std::string Exercise::getName() const
{
    return exercise_name;
}
