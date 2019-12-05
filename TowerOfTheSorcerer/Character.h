#include <climits>
#include <string>
#pragma once

class Character {
private:
	Character();
public:

	Character(std::string name);

	std::string getName();

	virtual ~Character();

protected:
	std::string name;
};

class FightableCharacter : public Character {
private:
	FightableCharacter();

public:
	using Character::Character;

	virtual ~FightableCharacter();

	unsigned int getHP();

	unsigned int getOffense();

	unsigned int getDefence();

	unsigned int getCoin();

	void updateHP(unsigned int change, bool plus);

protected:
	unsigned int hp = 0;
	unsigned int Offense = 0;
	unsigned int defence = 0;
	unsigned int coin = 0;
};