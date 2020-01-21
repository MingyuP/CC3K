#ifndef PHOENIX_H
#define PHOENIX_H
#include "enemy.h"
using namespace std;

class Phoenix: public Enemy{
public:
	Phoenix( Cell* cell,  char symbol = 'X',int HP = 50, \
		int maxHP = 50,  int Atk = 35,  int Def = 20, \
		double gold = 0,  Item* item = nullptr);
	~Phoenix();
};


#endif
