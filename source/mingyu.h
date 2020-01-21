#ifndef MINGYU_H
#define MINGYU_H
#include "player.h"
using namespace std;

//special PC Mingyu: always see the stair


class Mingyu: public Player{
public:
	Mingyu(Cell* cell, int HP = 110, int maxHP = 110, int Atk = 25,\
	int Def = 25, double gold = 0, int boostAtk = 0, int boostDef = 0,\
	bool hasBarrierSuit = false, char symbol = '@');
	~Mingyu();

	bool getHasCompass() const override;
}

#endif
