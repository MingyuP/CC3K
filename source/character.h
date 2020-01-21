#ifndef CHARACTER_H
#define CHARACTER_H
#include "subject.h"
#include "cell.h"
#include <utility>
using namespace std;

class Character : public Subject {
protected:
	char symbol;
	int HP;
	int maxHP;
	int Atk;
	int Def;
	double gold;
	Cell* cell;

public:
	Character( Cell* cell, int HP, \
		 int maxHP, int Atk,  int Def, double gold, char symbol);
	virtual ~Character();

	//accessors
	char getSymbol() const;
	int getRow() const;
	int getCol() const;
	int getHP() const;
	virtual int getAtk() const;
	virtual int getDef() const;
	bool isDead() const; 
	Cell* getCell() const;
	virtual bool getShouldMove() const = 0;

	//mutators
	virtual void addGold(double g);
	void setHP(const int hp);
	void setCell(Cell* newCell);

	//actions
	virtual void die() = 0;
	virtual void attack(Character* chara) = 0;
	virtual void defense(Character* chara) = 0;
};



#endif
