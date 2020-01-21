#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include <cstdlib>
using namespace std;

class Dragon: public Enemy{
public:
	Dragon( Cell* cell,  char symbol = 'D', int HP = 150, \
		 int maxHP = 150,  int Atk = 20,  int Def = 20, \
		 double gold = 0,  Item* item = nullptr);
	~Dragon();
	
	//attack only if the player is close to the dragon hoard
	virtual void move() override;
	virtual void attack(Character* p) override;
    void die() override;
};


#endif

