#pragma once
#ifndef PRODUCTIVITYTRACKER_H
#define PRODUCTIVITYTRACKER_H
#include <chrono> //This allows time to be tracked 
using namespace std;

class ProductivityTracker
{
private:
	chrono::time_point<chrono::high_resolution_clock> startTime;
	chrono::time_point<chrono::high_resolution_clock> endTime;
public: 
	void startTracking(); 
	void stopTracking();
	void generateReport(); 
	//So far only shows time in seconds. Currently looking for a way to change that 
};
#endif
