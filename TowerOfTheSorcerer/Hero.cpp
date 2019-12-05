#include "Hero.h"

Hero& Hero::getInstance() {
	static Hero hero("Braver");

	return hero;
}

void Hero::addOffense(unsigned int point) {
	if (UINT_MAX - point < Offense) {
		Offense = UINT_MAX;
	}

	Offense += point;
}

void Hero::addDefence(unsigned int point) {
	if (UINT_MAX - point < defence) {
		defence = UINT_MAX;
	}

	defence += point;
}

void Hero::updateCoin(unsigned int change, bool plus) {
	if (plus) {
		if (UINT_MAX - change < coin) {
			coin = UINT_MAX;
		}
		else {
			coin += change;
		}
	}
	else {
		if (coin < change) {
			coin = 0;
		}
		else {
			coin -= change;
		}
	}
}

Hero::~Hero() {}