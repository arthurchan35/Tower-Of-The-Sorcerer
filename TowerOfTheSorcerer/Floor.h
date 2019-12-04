#include <vector>
#include <iostream>
#pragma once

class Floor {
protected:
	const static unsigned int COL = 11;
	const static unsigned int ROW = 11;

	std::vector<std::vector<unsigned short>> cells;

	// draw actual game content including left and right walls
	virtual void renderInside() {};

	void renderSingleObject(unsigned short s);


public:

	void render();

	Floor();

	~Floor();
};

class Floor01: public Floor {
protected:
	void renderInside() override;

public:
	Floor01();
	~Floor01();
};