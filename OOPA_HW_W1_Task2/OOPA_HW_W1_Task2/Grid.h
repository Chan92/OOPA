#pragma once
#include <iostream>
#include <vector>
#include <string>

class Grid{
	public:
		std::vector<std::vector<int>> grid;

	public:
		Grid();
		~Grid();
		void MakeGrid(int gridSize);
		void ShowGrid();
		int RandomValue();
		std::vector<std::vector<int>> GetGrid();
		void SetGrid(std::vector<std::vector<int>> _newGrid);

};

