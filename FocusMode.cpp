#include "FocusMode.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void FocusMode::startFocusSession(int durationMinutes) {
    int totalSeconds = durationMinutes * 60; 

    cout << "\nFocus mode started for " << durationMinutes << " minutes." << endl;
    for (int remainingSeconds = totalSeconds; remainingSeconds > 0; --remainingSeconds) {
        int minutesLeft = remainingSeconds / 60; //Equation for converting seconds to minutes 
        int secondsLeft = remainingSeconds % 60; //Equation for converting minutes to secounds

        cout << "\rTime Left: " << minutesLeft << " mins " << secondsLeft << " secs" << flush;
        this_thread::sleep_for(chrono::seconds(1));
        //This creates the awesome pomorodo like timer! 
        
    }
    cout << "\nFocus mode ended. Good work!" << endl;
}

void FocusMode::rewardUser() {
    cout << "\nCongratulations! You have completed your focus session. Reward yourself with a break doing your favorite thing!\n" << endl;
}

