#include "Character.h"

#include <climits>

class Hero: public Character {
public:
	Hero() {
	}

	~Hero() {
	}

	bool addAttack(unsigned int point) {
		if (UINT_MAX - point < attack) {
			return false;
		}

		attack += point;
	}

	bool addDefence(unsigned int point) {
		if (UINT_MAX - point < defence) {
			return false;
		}

		defence += point;
	}
};