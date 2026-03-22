//*The best way to understand Arrays is to imagine the problem we would face if we didn't use them.

Imagine you are building a simple Weather Tracker Application. Its job is to record the daily temperatures for a week (7 days) and then calculate:

    The average temperature for the week.

    The highest recorded temperature.

The Problem (Without Arrays):
You would be forced to create 7 separate variables:
double day1, day2, day3, day4, day5, day6, day7;
What if the app needs to record a whole month? You would need 30 variables! This is completely impractical and makes the code impossible to manage.

The Magic Solution (Arrays):
An array allows you to create a "single container divided into 7 slots". Each slot holds a number, and they all share just one variable name*//

#include <iostream>
using namespace std;

int main() {
    // 1. Array Declaration
    // Create an array named 'temperatures' of size 7 to store a week's data.
    double temperatures[7]; 
    
    double sum = 0.0;       // Variable to accumulate the sum of temperatures
    double maxTemp = -100;  // Variable to store the highest temperature (initialized with a very low number)

    cout << "--- Weather Tracker App ---" << endl;
    cout << "Please enter the temperatures for the 7 days:\n";

    // 2. Input Data Using a Loop
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": ";
        // We store the user's input inside the array slot at index 'i'
        cin >> temperatures[i]; 
        
        // Add the current temperature to the sum immediately
        sum = sum + temperatures[i]; 

        // Check if the current temperature is higher than our recorded max
        if (temperatures[i] > maxTemp) {
            maxTemp = temperatures[i]; // If yes, make it the new maxTemp
        }
    }

    // 3. Process Data and Output Results
    double average = sum / 7; // Calculate the average

    cout << "\n--- Weekly Report ---" << endl;
    
    // Print all the stored temperatures from the array
    cout << "Recorded Temps: ";
    for (int i = 0; i < 7; i++) {
        cout << temperatures[i] << " | ";
    }
    cout << endl;

    // Print final calculations
    cout << "Average Temperature: " << average << endl;
    cout << "Highest Temperature: " << maxTemp << endl;

    return 0;
}
