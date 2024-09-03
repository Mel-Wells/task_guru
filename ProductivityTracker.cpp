#include "ProductivityTracker.h"
#include <iostream>
using namespace std; 

void ProductivityTracker::startTracking() {
	startTime = chrono::high_resolution_clock::now(); 
	cout << "Tracking started " << endl; 
}
void ProductivityTracker::stopTracking() {
	endTime = chrono::high_resolution_clock::now(); 
	cout << "Tracking stopped" << endl; 
}
void ProductivityTracker::generateReport() {
	chrono::duration<double> duration = endTime - startTime;
	cout << "Time spent on task: " << duration.count() << " seconds." << endl;
}