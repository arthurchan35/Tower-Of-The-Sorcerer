#include "Tower.h"
#include "Hero.h"
#include "Character.h"
#include "Floor.h"
#include <iostream>

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif

int main() {

#ifdef _WIN32
	_setmode(_fileno(stdout), _O_U16TEXT);
#else
	setlocale(LC_CTYPE, "");
#endif

	Tower magicTower = Tower::getInstance();

	while (true) {
		char key_pressed = '\0';

		magicTower.render();
	}
}