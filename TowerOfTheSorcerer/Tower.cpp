#include "Tower.h"

Tower::Tower() {
	currentFloor = 1;
	floors.push_back(new Floor01());
	/*floors.push_back(Floor02());
	floors.push_back(Floor03());
	floors.push_back(Floor04());
	floors.push_back(Floor05());
	floors.push_back(Floor06());
	floors.push_back(Floor07());
	floors.push_back(Floor08());
	floors.push_back(Floor09());
	floors.push_back(Floor10());
	floors.push_back(Floor11());
	floors.push_back(Floor12());
	floors.push_back(Floor13());
	floors.push_back(Floor14());
	floors.push_back(Floor15());
	floors.push_back(Floor16());
	floors.push_back(Floor17());
	floors.push_back(Floor18());
	floors.push_back(Floor19());
	floors.push_back(Floor20());
	floors.push_back(Floor21());
	floors.push_back(Floor22());
	floors.push_back(Floor23());
	floors.push_back(Floor24());
	floors.push_back(Floor25());
	floors.push_back(Floor26());
	floors.push_back(Floor27());
	floors.push_back(Floor28());
	floors.push_back(Floor29());
	floors.push_back(Floor30());
	floors.push_back(Floor31());
	floors.push_back(Floor32());
	floors.push_back(Floor33());
	floors.push_back(Floor34());
	floors.push_back(Floor35());
	floors.push_back(Floor36());
	floors.push_back(Floor37());
	floors.push_back(Floor38());
	floors.push_back(Floor39());
	floors.push_back(Floor40());
	floors.push_back(Floor41());
	floors.push_back(Floor42());
	floors.push_back(Floor43());
	floors.push_back(Floor44());
	floors.push_back(Floor45());
	floors.push_back(Floor46());
	floors.push_back(Floor47());
	floors.push_back(Floor48());
	floors.push_back(Floor49());
	floors.push_back(Floor50());*/
}

void Tower::render() {
	system("cls");
	floors[currentFloor - 1]->render();
}

Tower& Tower::getInstance() {
	static Tower tower;

	return tower;
}