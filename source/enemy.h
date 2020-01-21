#ifndef ENEMY_H
#define ENEMY_H
#include "character.h"
#include "item.h"
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;


class Enemy: public Character{
protected:
	Item *item;
	bool shouldMove = true;
public:
	Enemy( Cell* cell,  char symbol,\
	 int HP, int maxHP, int Atk,  int Def, \
	 double gold,  Item* item);
	virtual ~Enemy();
	
	//accessors
	Item* getItem() const;
	virtual bool getShouldMove() const;
	int getAtk() const override;
	int getMaxHP() const;	

	//mutators
	void setItem(Item* newItem);
	void setShouldMove(bool sm);

	//actions
	virtual void die();
	virtual void attack(Character* p);
	virtual void defense(Character* p);
	virtual void move();

};



#endif
