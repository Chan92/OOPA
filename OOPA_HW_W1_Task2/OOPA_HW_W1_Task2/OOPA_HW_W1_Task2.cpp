// OOPA_HW_W1_Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Grid.h" 
#include "Rules.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <type_traits>
#include <ctime>
#include <utility>
using  namespace std::chrono_literals;

int main(){
    //std::cout << "Hello World!\n"; 

	Grid mygrid;
	Rules myrules;

	mygrid.MakeGrid(25);
	mygrid.ShowGrid();

	int timesToRun = 500;
	while (timesToRun > 0) {
		std::this_thread::sleep_for(10ms);
		mygrid.ShowGrid();
		myrules.CheckNeighbors(mygrid);
		
		system("CLS");
		std::cout << std::flush;
				
		timesToRun--;
	}

	mygrid.ShowGrid();
	//std::cout << "end test;";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

