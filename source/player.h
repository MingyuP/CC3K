#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"
#include "item.h"
#include <cmath>
using namespace std;

class Player: public Character{
protected:
	int boostAtk;
	int boostDef;
	bool hasBarrierSuit;
	bool hasCompass;
	bool shouldMove = false;

public:
	Player(Cell* cell, int HP, \
		int maxHP, int Atk, int Def, \
		double gold,int boostAtk, int boostDef, \
		bool hasBarrierSuit, char symbol);
	virtual ~Player();

	//mutators
	void addHP(const int hp);
	void addAtk(const int a);
	void addDef(const int d);
	virtual void addGold(const double g);//virtual since dwarf*2 and orc*1/2
	void reset();
	void equipBarrierSuit();
	void equipCompass();	
	void resetCompass();

	//accessors
	virtual bool getHasCompass() const;
	double getGold() const;
	virtual double getScore() const;
	virtual int getAtk() const override;
	virtual int getDef() const override;
	virtual bool getShouldMove() const override;
	//actions
	virtual void use(Item* i) = 0;
	virtual void attack(Character* enemy);
	virtual void defense(Character* enemy);
	virtual void die();
};


#endif
