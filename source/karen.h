#ifndef KAREN_H
#define KAREN_H
#include "player.h"
using namespace std;

//special PC Karen: 10% HP of the slain enemy will be added.


class Karen: public Player{
public:
	Karen(Cell* cell, int HP = 100, int maxHP = 100, int Atk = 30,\
	int Def = 20, double gold = 0, int boostAtk = 0, int boostDef = 0,\
	bool hasBarrierSuit = false, char symbol = '@');
	~Karen();

	void attack(Character* enemy) override;
}

#endif
