#include "exercise.h"
#include <vector>

class Split
{
protected:
    std::vector<Exercise *> exercises;

public:
    virtual void selectExercises() = 0;
    virtual void displayExercises() const = 0;
    virtual ~Split();
};

// Push day derived class
class Push : public Split
{
public:
    void selectExercises() override;
    void displayExercises() const override;
};

// Pull day derived class
class Pull : public Split
{
public:
    void selectExercises() override;
    void displayExercises() const override;
};

// Legs day derived class
class Legs : public Split
{
public:
    void selectExercises() override;
    void displayExercises() const override;
};