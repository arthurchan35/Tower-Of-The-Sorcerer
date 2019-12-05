enum Object {
	empty,

	// wall
	wall,
	wallBreakable,

	// stair
	stairUp,
	stairDown,

	// door
	doorYellow,
	doorBlue,
	doorRed,

	// gate
	gateF8,

	// altar
	altarL,
	altarM,
	altarR,

	// exilir
	exilirRed, // hp50
	exilirBlue, // hp200

	// key
	keyYellow,
	keyBlue,
	keyRed,

	// crystal
	crystalRed, // attack + 1
	crystalBlue, // defense + 1

	// npc
	fair,
	thief,

	// orb
	orbOfTheHero, // enable save data
	orbOfFlying, // fast travel to previously visited floors
	orbOfWisdom,

	// equipment
	swordIron, // attack + 10
	shieldIron, // defence + 10

	// slime
	slimeGreen,
	slimeRed,

	// bat
	bat,

	// priest
	priest,

	// skeleton
	skeletonB, // with sword and shield
	skeletonC, // without any equipment

	// gateKeeper,
	gateKeeperF8,

	// boss
	skeletonA
};