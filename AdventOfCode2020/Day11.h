#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Helpers.h"

using namespace std;
using Point = Helpers::Point;

class Day11
{
private:
	string _seats = "";
	int _width = 0, _height = 0;

	string Neighbours(int idx, const string& seats);
	void Transform(string& seats);
	void DebugPrint();

public:
	void ParseInput();
	int PartOne();
	int PartTwo();
};