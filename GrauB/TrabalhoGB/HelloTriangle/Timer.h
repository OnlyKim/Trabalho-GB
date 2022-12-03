#pragma once

#include <chrono>
#include <thread>
#include <ctime>

class Timer
{
public:
	Timer();

	void start();
	void finish();

	double getElapsedTimeMs();
	double getElapsedTime();
	double calcWaitingTime(int fps, double elapsedTime);

protected:
	std::chrono::time_point<std::chrono::system_clock> begin,end;

};

