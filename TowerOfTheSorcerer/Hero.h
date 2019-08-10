#include "Character.h"

#include <climits>

class Hero: public Character {
private:
	Hero() {
	}

	static Hero* hero;

public:
	static Hero* getInstance() {
		if (hero == NULL) {
			hero = new Hero();
		}

		return hero;
	}

	~Hero() {
	}

	void addAttack(unsigned int point) {
		if (UINT_MAX - point < attack) {
			attack = UINT_MAX;
		}

		attack += point;
	}

	void addDefence(unsigned int point) {
		if (UINT_MAX - point < defence) {
			defence = UINT_MAX;
		}

		defence += point;
	}

	void updateCoin(unsigned int change, bool plus) {
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
};