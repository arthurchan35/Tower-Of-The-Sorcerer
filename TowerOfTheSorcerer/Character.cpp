#include "Character.h"

Character::Character(std::string name) {
	this->name = name;
}

std::string Character::getName() {
	return name;
}

Character::~Character() {}

unsigned int FightableCharacter::getHP() {
	return hp;
}

unsigned int FightableCharacter::getOffense() {
	return Offense;
}

unsigned int FightableCharacter::getDefence() {
	return defence;
}

unsigned int FightableCharacter::getCoin() {
	return coin;
}

void FightableCharacter::updateHP(unsigned int change, bool plus) {
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

FightableCharacter::~FightableCharacter() {}