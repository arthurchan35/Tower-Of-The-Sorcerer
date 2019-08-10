#include <climits>

#pragma once

class Character {
public:
	Character() {
	}

	virtual ~Character() = 0;

	unsigned int getHP() {
		return hp;
	}

	unsigned int getAttack() {
		return attack;
	}

	unsigned int getDefence() {
		return defence;
	}

	unsigned int getCoin() {
		return coin;
	}

	void updateHP(unsigned int change, bool plus) {
		if (plus) {
			if (UINT_MAX - change < hp) {
				hp = UINT_MAX;
			}
			else {
				hp += change;
			}
		}
		else {
			if (hp < change) {
				hp = 0;
			}
			else {
				hp -= change;
			}
		}
	}

protected:
	unsigned int hp = 0;
	unsigned int attack = 0;
	unsigned int defence = 0;
	unsigned int coin = 0;
};