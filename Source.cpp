//I affirm that all code given below was written solely by me, Jalen Robinson-McClure, and that any help I received adhered to the rules stated for this exam.

/////////////////////////////
// Jalen Robinson-McClure
// June 20th, 2017
// CS 172
// EXAM 2
///////////////////////////
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Runner.h"

using namespace std;

int main()
{
	// low pace and high pace varibles used to put runners in repective groups
	int pacelow;
	int pacehigh;

	// create runner object 
	vector<Runner> runner;
	Runner runner("firstName", "lastName", "pace");

	// loop to look for matching pace  (the pace is in between the fast pace and the low pace of the runner)
	for int(i = 0; i < registrants.size(); i++)
	{
		if (registransts[i].get_pace <= pacelow &&  registransts[i].get_pace >= pacehigh)
			ret
	}

	// functions that pushes string into the vector
	vector<Runner> groupRunners(string firstName, string lastName)
	{
		vector<Runner> runners;
		for (int i = 0; i < runners.size(); i++)
		{
			if (runners[i].get_pace <= pacehigh && runners[i] >= pacelow)
			{
				runner.groupRunner[i].push_back;
			}
		}
	}


	// if statements to determine what color is assiagned 
	if (pacehigh <= 360)
	{
		ifstream input("white.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacelow > 360 && pacehigh <= 420)
	{
		ifstream input("yellow.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacelow > 420 && pacehigh <= 480)
	{
		ifstream input("green.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacelow > 480 && pacehigh <= 540)
	{
		ifstream input("orange.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacelow > 540 && pacehigh <= 600)
	{
		ifstream input("blue.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacelow > 600 && pacehigh <= 720)
	{
		ifstream input("lilac.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}

	else if (pacehlow > 721)
	{
		ifstream input("lilac.txt");

		string firstName;
		string lastName;

		input >> firstName >> lastName;
		cout << firstName << " " << lastName << " " << "is in the white group" << endl;

		input.close();
	}
	// paces are taken then are put into differernt text files in the runners color groups

	
}