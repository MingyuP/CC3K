#ifndef ORC_H
#define ORC_H
#include "character.h"
#include "player.h"
using namespace std;

class Orc: public Player{
public:
	Orc(Cell* cell,int HP = 180, \
		int maxHP = 180, int Atk = 30, int Def = 25, \
		double gold = 0, int boostAtk = 0, \
		int boostDef = 0, bool hasBarrierSuit = false, char symbol = '@');
	~Orc();

	void addGold(const double g) override;
	void use(Item* i) override;
};


#endif
