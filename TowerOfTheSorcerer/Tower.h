#pragma once
#include "Floor.h"
#include <vector>

class Tower {
private:
	std::vector<Floor*> floors;

	unsigned char currentFloor;

	Tower();

public:
	~Tower() {}

	void render();

	static Tower& getInstance();
};