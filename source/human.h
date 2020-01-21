#ifndef HUMAN_H
#define HUMAN_H
#include "player.h"
using namespace std;

class Human: public Player{
public:
	Human( Cell* cell, int HP = 999999, \
		 int maxHP = 999999,  int Atk = 999999,  int Def = 9999999, \
		 double gold = 0,  int boostAtk = 0, \
		 int boostDef = 0,  bool hasBarrierSuit = false, char symbol = '@');
	~Human();

	double getScore() const;
	void use(Item* i) override;

};


#endif
