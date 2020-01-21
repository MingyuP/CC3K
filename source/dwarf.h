#ifndef DWARF_H
#define DWARF_H
#include "player.h"
using namespace std;

class Dwarf: public Player{
public:
	Dwarf( Cell* cell,  int HP = 100, \
		 int maxHP = 100,  int Atk = 20,  int Def = 30, \
		 double gold = 0,  int boostAtk = 0, \
		 int boostDef = 0,  bool hasBarrierSuit = false, char symbol = '@');
	~Dwarf();

	void addGold(const double g) override;
	void use(Item* i) override;
};


#endif
