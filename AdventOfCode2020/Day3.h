#pragma once

#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Helpers.h"

using namespace std;
using Point = Helpers::Point;

class Day3
{
private:
	string _treeChart = "";
	int _width = 0, _height = 0;

	bool IsTree(const Point& p);
	int TreesOnSlope(const Point& slope);

public:
	void ParseInput();
	int PartOne();
	unsigned int PartTwo();
};
