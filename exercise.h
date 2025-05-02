#include <string>
#include <iostream>

// base class Exercise:
class Exercise
{
protected:
    // variables
    std::string exercise_name;
    int sets;
    int reps;

public:
    // constructor
    Exercise(std::string name) : exercise_name(name), sets(3), reps(8) {}

    // functions
    void setDetails(std::string name);
    void setIntensity(std::string intensity);
    void displayDetails() const;
    ~Exercise() {};

    std::string getName() const;
};