# gym-tracker


This application is a simple implementation of a workout tracker, specifically for PPL splits. This tracks the user's height, weight, and allows them to build a workout routine from a list of exercises based on the split day. 

Here's a basic example of how the program works:

1. The user will be prompted with their height (in cm) and weight (in kg) and give their gender. After, they are prompted the intensity of how often they want to workout (light, moderate, heavy)

2. Now the user is able to create a routine, and from the menu can select the day to modify
    1. PUSH
    2. PULL
    3. LEGS+

3. Within each split, depending on the intensity, there are 4-7 options of workouts to choose from. 
example:
    PUSH:
        1. [CHEST]
        2. [CHEST]
        3. [CHEST]
        4. [TRICEPS]
        5. [TRICEPS]

4. The user will be able to select a number 1-5 to modify. Then will be given a list of exercises within that category and depending on the intensity the reps and sets will be decided. There are 4 different exercises for each muscle group
(BACK, BICEPS, CHEST, TRICEPS, SHOULDERS*, ABS*, LEGS)
*there are only two for these, as they will only be available on LEGS+ days.

light = 3x8 sets + reps
moderate = 3x10 sets + reps
heavy = 4x8 sets + reps

After completing the routine and all the days are filled, the program will output the workout program for the week including all the exercises and their reps+sets. Each day will also have the estimated calories burned.

ex.

MONDAY PUSH (400 calories)
1. 



Track calories burned
Track weight, height

Workout
Day split
Muscle groups
Exercise

Within each exercise, we track how many calories are burned 
Each exercise has a number of reps and sets
Depending on the split, we divide the exercises 4/3, 3/2, 2/2 depending on the intensity level that the user wants to do when working out
Light (2/2)
Moderate (3/2)
Heavy (4/2)
- Where the first number is the large muscle group being worked (assuming PPL Split)
