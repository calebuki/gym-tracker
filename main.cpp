#include <iostream>
#include <limits>
#include "split.h"

int main()
{
    bool proceed = true;
    Split *workoutDay = nullptr;

    std::cout << "Welcome to the Workout Plan Creator!\n";

    while (proceed)
    {
        int choice;
        std::cout << "Select workout split:" << std::endl;
        std::cout << " 1. Push" << std::endl;
        std::cout << " 2. Pull" << std::endl;
        std::cout << " 3. Legs" << std::endl;
        std::cout << " 4. Exit" << std::endl;
        std::cout << "Enter choice (1‑4): ";

        /* ---------- single, guarded read ---------- */
        if (!(std::cin >> choice))
        {                     // non‑numeric input
            std::cin.clear(); // reset failbit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a number.\n";
            continue; // restart loop
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush newline

        /* ---------- create the requested split ---------- */
        switch (choice)
        {
        case 1:
            workoutDay = new Push();
            break;
        case 2:
            workoutDay = new Pull();
            break;
        case 3:
            workoutDay = new Legs();
            break;
        case 4:
            std::cout << "Goodbye!\n";
            proceed = false;
            continue;
        default:
            std::cout << "Invalid choice!\n";
            continue;
        }

        workoutDay->selectExercises();
        workoutDay->displayExercises();

        /* ---------- ask to repeat ---------- */
        char again{};
        std::cout << "Create another workout? (y/n): ";
        while (true)
        {
            std::cin >> again;
            if (again == 'y' || again == 'Y')
                break; // keep looping
            if (again == 'n' || again == 'N')
            {
                proceed = false;
                break;
            }
            std::cout << "Please enter y or n: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        delete workoutDay;
        workoutDay = nullptr;
    }
    return 0;
}
