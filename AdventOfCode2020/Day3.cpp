#include "Day3.h"

void Day3::ParseInput()
{
	//ifstream input("input/day3example.txt");
	ifstream input("input/day3.txt");

	if (!input)
	{
		cout << "Failed to open input." << endl;
		return;
	}

	string line = "";
	while (getline(input, line))
	{
		if (_width == 0)
			_width = line.size();

		_treeChart.append(line);
		++_height;
	}
}

bool Day3::IsTree(const point& p)
{
	int col = p.X % _width; // wrap
	int row = p.Y * _width;
	return _treeChart[col + row] == '#';
}

int Day3::TreesOnSlope(const point& slope)
{
	int treeCount = 0;
	point current(0, 0);

	while (current.Y < _height)
	{
		if (IsTree(current))
			++treeCount;

		// slide the slope
		current += slope;
	}

	return treeCount;
}

int Day3::PartOne()
{
	return TreesOnSlope({3, 1});
}

unsigned int Day3::PartTwo()
{
	unsigned int trees = 1;
	vector<point> slopes{ {1, 1}, {3, 1}, {5, 1}, {7, 1}, {1, 2} };
	for (const auto& slope : slopes)
		trees *= TreesOnSlope(slope);

	return trees;
}


