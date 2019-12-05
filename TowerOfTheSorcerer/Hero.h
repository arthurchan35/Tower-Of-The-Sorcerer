#include "Character.h"

#include <climits>

class Hero: public FightableCharacter {
public:
	using FightableCharacter::FightableCharacter;

	static Hero& getInstance();

	void addOffense(unsigned int point);

	void addDefence(unsigned int point);

	void updateCoin(unsigned int change, bool plus);

	~Hero();
};