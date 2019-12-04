#include "Floor.h"

void Floor::renderSingleObject(unsigned short s) {
	if (s == 0) { // nothing
		std::wcout << "  ";
	}
	else if (s == 1) { // wall
		std::wcout << L'Ç½';
	}
	else if (s == 10) { // up stair
		std::wcout << L'ÉÏ';
	}
	else if (s == 21 || s == 22 || s == 23) { // brown, blue, red door
		std::wcout << L'ÃÅ';
	}
	else if (s == 31 || s == 32 || s == 33) { // brown, blue, red key
		std::wcout << L'Ô¿';
	}
	else if (s == 34 || s == 35) { // 100hp, 200hp
		std::wcout << L'Ãü';
	}
	else if (s == 36) { // small offense crystal
		std::wcout << L'¹¥';
	}
	else if (s == 37) { // small defense crystal
		std::wcout << L'¹¥';
	}
	else if (s > 50) { // monsters
		std::wcout << L'¹Ö';
	}
	else { // errors, needs handling
		std::wcout << L'Îó';
	}
}

void Floor::render() {
	// draw top wall
	for (int i = 0; i < COL + 2; ++i) {
		std::wcout << L'Ç½';
	}
	std::wcout << std::endl;

	// draw actual game content including left and right walls
	renderInside();

	//draw bottom wall
	for (int i = 0; i < COL + 2; ++i) {
		std::wcout << L'Ç½';
	}
	std::wcout << std::endl;
}

Floor::Floor() {}

Floor::~Floor() {}

void Floor01::renderInside() {
	for (int j = 0; j < ROW; ++j) {
		std::wcout << L'Ç½';

		for (int i = 0; i < COL; ++i) {
			renderSingleObject(cells[j][i]);
		}

		std::wcout << L'Ç½' << std::endl;
	}
}

Floor01::Floor01() {
	cells.push_back({ 10, 0, 51, 52, 51, 0, 0, 0, 0, 0, 0 });
	cells.push_back({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 });
	cells.push_back({ 34, 0, 0, 21, 0, 1, 36, 31, 0, 1, 0 });
	cells.push_back({ 0, 54, 0, 1, 0, 1, 37, 34, 0, 1, 0 });
	cells.push_back({ 1, 21, 1, 1, 0, 1, 1, 1, 21, 1, 0 });
	cells.push_back({ 31, 0, 0, 1, 0, 21, 55, 56, 55, 1, 0 });
	cells.push_back({ 0, 53, 0, 1, 0, 1, 1, 1, 1, 1, 0 });
	cells.push_back({ 1, 21, 1, 1, 0, 0, 0, 0, 0, 0, 0 });
	cells.push_back({ 0, 0, 0, 1, 1, 21, 1, 1, 1, 21, 1 });
	cells.push_back({ 34, 0, 31, 1, 31, 0, 0, 1, 0, 55, 0 });
	cells.push_back({ 34, 0, 31, 1, 0, 0, 0, 1, 31, 35, 31 });
}

Floor01::~Floor01() {}