#include "split.h"
#include <iostream>
#include <string>

Split::~Split()
{
    for (int i = 0; i < (int)exercises.size(); i++)
    {
        delete exercises[i];
    }
    exercises.clear();
}

// PUSH DAY DERIVED CLASS:
void Push::selectExercises()
{

    int choice;
    std::string intensity;
    std::cout << "Select exercises for Push day: " << std::endl;

    // available exercises:
    std::vector<std::string> available_exercises = {
        "Barbell Bench Press",
        "Dumbell Bench Press",
        "Tricep Dips",
        "Overhead Tricep Extentions"};

    // display exercises:
    for (int i = 0; i < (int)available_exercises.size(); i++)
    {
        std::cout << i + 1 << ". " << available_exercises[i] << "\n";
    }

    while (true)
    {
        std::cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice < 1 || choice > (int)available_exercises.size())
        {
            std::cout << "Invalid choice." << std::endl;
        }

        // create a new exercise and set details:
        Exercise *ex = new Exercise(available_exercises[choice - 1]);
        std::cout << "Enter intensity for " << ex->getName() << " (light, moderate, heavy): " << std::endl;
        std::cin >> intensity;
        ex->setIntensity(intensity);

        // add exercise to the list for the day
        exercises.push_back(ex);
    }
}

void Push::displayExercises() const
{
    std::cout << "Push Day Exercises: " << std::endl;
    for (int i = 0; i < (int)exercises.size(); i++)
    {
        exercises[i]->displayDetails();
    }
}

// PULL DAY DERIVED CLASS:
void Pull::selectExercises()
{

    int choice;
    std::string intensity;
    std::cout << "Select exercises for Pull day: " << std::endl;

    // available exercises:
    std::vector<std::string> available_exercises = {
        "Bent-Over Dumbell Rows",
        "Lat Pulldowns",
        "Preacher Curls",
        "Hammer Curls"};

    // display exercises:
    for (int i = 0; i < (int)available_exercises.size(); i++)
    {
        std::cout << i + 1 << ". " << available_exercises[i] << "\n";
    }

    while (true)
    {
        std::cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice < 1 || choice > (int)available_exercises.size())
        {
            std::cout << "Invalid choice." << std::endl;
        }

        // create a new exercise and set details:
        Exercise *ex = new Exercise(available_exercises[choice - 1]);
        std::cout << "Enter intensity for " << ex->getName() << " (light, moderate, heavy): " << std::endl;
        std::cin >> intensity;
        ex->setIntensity(intensity);

        // add exercise to the list for the day
        exercises.push_back(ex);
    }
}

void Pull::displayExercises() const
{
    std::cout << "Pull Day Exercises: " << std::endl;
    for (int i = 0; i < (int)exercises.size(); i++)
    {
        exercises[i]->displayDetails();
    }
}

// LEG DAY DERIVED CLASS:
void Legs::selectExercises()
{

    int choice;
    std::string intensity;
    std::cout << "Select exercises for Leg day: " << std::endl;

    // available exercises:
    std::vector<std::string> available_exercises = {
        "Squats",
        "Hamstring Curls",
        "Leg Extensions",
        "Calf Raises"};

    // display exercises:
    for (int i = 0; i < (int)available_exercises.size(); i++)
    {
        std::cout << i + 1 << ". " << available_exercises[i] << "\n";
    }

    while (true)
    {
        std::cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice < 1 || choice > (int)available_exercises.size())
        {
            std::cout << "Invalid choice." << std::endl;
        }

        // create a new exercise and set details:
        Exercise *ex = new Exercise(available_exercises[choice - 1]);
        std::cout << "Enter intensity for " << ex->getName() << " (light, moderate, heavy): " << std::endl;
        std::cin >> intensity;
        ex->setIntensity(intensity);

        // add exercise to the list for the day
        exercises.push_back(ex);
    }
}

void Legs::displayExercises() const
{
    std::cout << "Leg Day Exercises: " << std::endl;
    for (int i = 0; i < (int)exercises.size(); i++)
    {
        exercises[i]->displayDetails();
    }
}