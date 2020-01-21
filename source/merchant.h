#ifndef MERCHANT_H
#define MERCHANT_H
#include "enemy.h"
#include <cstdlib>
using namespace std;

class Merchant: public Enemy{
	static bool hostile;
public:
	Merchant(Cell* cell,char symbol = 'M',int HP = 30, \
		int maxHP = 30, int Atk = 70, int Def = 5, \
		double gold = 0, Item* item = nullptr);
	~Merchant();

	void attack(Character* p) override;
	void defense(Character* p) override;
};


#endif
