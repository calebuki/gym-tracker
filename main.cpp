#include <iostream>
#include <vector>
#include <string>
#include "split.h"

int main()
{
    int choice = 0;
    std::string intensity;
    bool proceed = true;

    Split *workoutDay = nullptr;

    std::cout << "Welcome to the Workout Plan Creator!" << std::endl;

    while (proceed)
    {

        // menu screen
        std::cout << "Select workout split:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pull (Not implemented)\n";
        std::cout << "3. Legs+ (Not implemented)\n";
        std::cout << "Enter choice (1-3): ";

        // select corresponding workout split:
        switch (choice)
        {
        case 1:
            workoutDay = new Push();
            workoutDay->selectExercises();
            break;
        case 2:
            workoutDay = new Pull();
            workoutDay->selectExercises();
            break;
        case 3:
            workoutDay = new Legs();
            workoutDay->selectExercises();
            break;
        case 4:
            std::cout << "Goodbye!" << std::endl;
            proceed = false;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            continue;
        }

        if (workoutDay != nullptr)
        {
            workoutDay->displayExercises();

            // ask if they want to make another workout plan
            std::cout << "Do you want to create another workout? (y/n)" << std::endl;
            char input;
            std::cin >> input;
            if (input != 'y' && input != 'Y')
            {
                proceed = false;
            }

            // clear heap
            delete workoutDay;
            workoutDay = nullptr;
        }
    }

    // end of program
    return 0;
}