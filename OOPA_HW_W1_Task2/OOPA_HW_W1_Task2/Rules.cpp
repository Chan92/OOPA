#include "pch.h"
#include "Rules.h"

Rules::Rules(){}

Rules::~Rules(){}

void Rules::CheckNeighbors(Grid _myGrid){
	std::vector<std::vector<int>> _grid = _myGrid.GetGrid();
	newGrid = std::vector<std::vector<int>>(25, std::vector<int>(25));

	for (int colum = 0; colum < 25; colum++) {
		for (int row = 0; row < 25; row++) {
			int neighbors = 0;

			if (colum > 0) {
				if (row > 0) neighbors += _grid[colum - 1][row - 1];
				neighbors += _grid[colum - 1][row];
				if (row < 24) neighbors += _grid[colum - 1][row + 1];
			}

			if (row > 0) neighbors += _grid[colum][row - 1];
			if (row < 24) neighbors += _grid[colum][row + 1];

			if (colum < 24) {
				if (row > 0) neighbors += _grid[colum + 1][row - 1];
				neighbors += _grid[colum + 1][row];
				if (row < 24) neighbors += _grid[colum + 1][row + 1];
			}
	
			newGrid[colum][row] = CheckRules(_grid[colum][row], neighbors);
		}
	}

	_myGrid.SetGrid(newGrid);
}

int Rules::CheckRules(int _cellId, int _neighbors){
	if (_cellId == 0) {
		if (_neighbors == 3) {
			return 1;
		} else {
			return 0;
		}
	}else if (_cellId == 1) {
		if (_neighbors < 2 || _neighbors > 3) {
			return 0;
		} else {
			return 1;
		}
	}

	return 0;
}