#include "pch.h"
#include "Grid.h"


Grid::Grid(){
}


Grid::~Grid(){
}

void Grid::MakeGrid(int gridSize){
	//grid = std::vector<std::vector<int>>(gridSize, std::vector<int>(gridSize));

	for (int colum = 0; colum < gridSize; colum++) {

		std::vector<int> newRow;
		for (int row = 0; row < gridSize; row++) {
			newRow.push_back(RandomValue());
		}
		
		grid.push_back(newRow);
	}
}

void Grid::ShowGrid(){
	for (int colum = 0; colum < 25; colum++) {
		for (int row = 0; row < 25; row++) {
			if (grid[colum][row] == 0) {
				std::cout << "  ";
			}
			else {
				std::cout << "* ";
			}			
		}
		std::cout << std::endl;
	}
}

int Grid::RandomValue() {
	int r = rand() % 100 ;

	if (r <= 95) {
		return 0;
	}
	else {
		return 1;
	}
}

std::vector<std::vector<int>> Grid::GetGrid(){
	return grid;
}

void Grid::SetGrid(std::vector<std::vector<int>> _newGrid){
	grid = _newGrid;
}
