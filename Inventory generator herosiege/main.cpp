#include <iostream>
#include <chrono>
// game version 5.7.8.0

enum itemType
{
	helmet = 0,     // 85
	chestplate = 1, // 93
	boots = 2,      // 72
	weapon = 3,     // 160
	glove = 4,      // 70
	amulet = 5,     // 61
	charm = 6,      // 63
	shield = 7,	    // 59
	ring = 8,       // 33
	belt = 9,       // 45
	potion = 10,    // 19
};
enum weaponType
{
	melee = 1,        // 61
	spell = 2,        // 31
	bow = 3,          // 12
	claw = 4,         // 8
	javelin = 5,      // 11
	gun = 6,          // 13
	chainsaw = 7,	  // 9
	plagueDoctor = 8, // 6
	lance = 9,		  // 8
	lemon = 10,       // 1
};

static struct ItemAmount
{
	size_t helmet = 85;     // 85
	size_t chestplate = 93; // 93
	size_t boots = 0;
	size_t weapon = 0;
	size_t gauntlets = 0;
	size_t amulet = 61;     // 61
	size_t charm = 63;      // 63
	size_t shield = 7;
	size_t ring = 0;
	size_t belt = 45;       // 45
	size_t potion = 0;
} ItemAmount;
static struct WeaponAmount
{
	size_t melee = 61;       // 61
	size_t spell = 31;       // 31
	size_t bow = 12;         // 12
	size_t claw = 8;         // 8
	size_t javelin = 11;     // 11
	size_t gun = 13;         // 13
	size_t chainsaw = 9;	 // 9
	size_t plagueDoctor = 6; // 6
	size_t lance = 8;		 // 8
	size_t lemon = 1;        // 1
} WeaponAmount;

static size_t inventorySlot = 0; // global varialbe for inventory slot

void generateItem(int itemType, int weaponType = 1, int itemAmount = 100, int rarity = 6, int itemSeed = 5)
{
	for (int i = 0; i < itemAmount; i++)
	{
		std::cout << "inventory_list" << inventorySlot << // Inventory slot
			"=\"160|100|" <<
			rarity << "|" << 
			i << "|10|" <<
			weaponType << "|" <<
			itemType << "|3|0|" <<
			itemSeed << "|0|0|78744590.51|0|0|0|0|0|\"" << "\n";
		itemNum++;
	}	
}

void iterateItemByID(int itemType, int weaponType, int itemID, int seedAmount = 40)
{
	for (int i = 0; i < seedAmount; i++)
	{
		std::cout << "inventory_list" << itemNum << // Inventory slot
			"=\"160|100|6|" << 
			itemID << "|10|" <<
			weaponType << "|" <<
			itemType << "|3|0|" <<
			i /* seed */ << "|0|0|78744590.51|0|0|0|0|0|\"" << "\n";
		itemNum++;
	}
}

int main()
{
	/*for (int i = 0; i < 10; i++)
	{
		auto begin = std::chrono::high_resolution_clock::now();
		uint32_t iterations = 100000;
		for (uint32_t i = 0; i < iterations; ++i)
		{
			// code to benchmark
		}
		auto end = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count();
		std::cout << duration << "ns total, average : " << duration / iterations << "ns." << std::endl;
	}*/

	generateItem(itemType::weapon, weaponType::melee, 15, 1);
	
	generateItem(itemType::chestplate, 1, 93);
	generateItem(itemType::shield, 1, 59);
	generateItem(itemType::belt, 1, 45);

	generateItem(itemType::amulet, 1, 61);
	generateItem(itemType::charm, 1, 63);
	generateItem(itemType::ring, 1, 76);

	generateItem(itemType::helmet, 1, 85);
	generateItem(itemType::boots, 1, 72);
	 
	generateItem(itemType::potion, 1, 19);
	generateItem(itemType::glove, 1, 70);
	for (int i = 0; i < 200; i++)
	{
		std::cout << "inventory_list"<< i << "=\"160|100|6|4|10|2|3|5|" << i << "|5|0|0|78744590.51|0|9|0|0|0|s11|11|11|11|11|\"" << "\n";
	}
	

	iterateItemByID(itemType::weapon, weaponType::spell, 1);

	/*ELEMENTAL HELMETS
	zeus circlet, mevius mighty, genji battle, sight of the gods, odins eternal visage, the curator of secrets
	 
	ELEMENTAL CHESTPLATES
	sheep king hide, odins battle armor, bounty hunters, cocoon of the berserker, wooxy's glorious, zeus body armor, 
	grand wizard's robe, genji battle armor, mevius mighty plate,
	 
	ELEMENTAL BOOTS 
	voodoo stompers, mana-woven, zeus, mevius, tribal,
	 
	ELEMENTAL GLOVES
	mevius, razor knuckles, kaljael
	 
	ELEMENTAL AMULET
	damien, steve, pendant of eternity, travelers compass
	 
	ELEMENTAL CHARM 
	damien, steve, travelers map, torch of shadows, annihilus, hametsus box, lunar charm, sheep kings wool, 
	 
	ELEMENTAL SHIELD 
	elemental ward, ancient aegis, ward of toxicity, crest of the order, 
	 
	ELEMENTAL RING
	ra's band, rainbow, soulforged
	
	ELEMENTAL BELT
	tribal, travelers, belt of skulls, 
	 
	monkey skin belt, 

	sanguine, zweihander,  grimbone*/

	return 0;
}