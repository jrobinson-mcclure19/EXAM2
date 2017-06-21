#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef RUNNER_H
#define RUNNER_H

class Runner
{
	// private data fields
private:  
	string firstName;
	string lastName;
	int pace;
	// functions 
public:
	// get functions that return the names and inteneded pace
	string get_firstname()
	{
		return firstName;
	}
	string get_lastname()
	{
		return lastName;
	}
	int get_pace()
	{
		return pace;
	}
};

#endif // !RUNNER_H
