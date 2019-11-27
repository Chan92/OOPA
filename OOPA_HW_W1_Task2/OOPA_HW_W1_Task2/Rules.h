#pragma once
#include "Grid.h"
#include <iostream>
#include <vector>

class Rules{
	public:
		std::vector<std::vector<int>> newGrid;
		Rules();
		~Rules();
		void CheckNeighbors(Grid _myGrid);
		int CheckRules(int _cellId, int _neighbors);
};

