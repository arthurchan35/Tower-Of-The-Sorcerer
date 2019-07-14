#pragma once

class Character {
public:
	Character() {
	}

	~Character() {
	}

	unsigned int getAttack() {
		return attack;
	}

	unsigned int getDefence() {
		return defence;
	}

protected:
	unsigned int hp = 0;
	unsigned int attack = 0;
	unsigned int defence = 0;
};