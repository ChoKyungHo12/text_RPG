#pragma once
class Creature
{
protected:
	int _nHp;
	int _nAttack;
	int _mDefense;

public:
	Creature(int nHp, int nAttack, int mDefense);
	bool IsDead();
	virtual ~Creature();
	virtual void Attack(Creature& Defense);
	virtual int Defnese(const int nAttack);
};

class Leesin : public Creature
{
protected:
	const char szName[16] = { "Leesin" };

public:
	Leesin(int nHp, int nAttack, int mDefense);

	void Attack(Creature& Defense);
	int Defnese(const int nAttack);
};

class Monster : public Creature
{
protected:
	const char szName[16] = { "Monster" };

public:
	Monster(int nHp, int nAttack, int mDefense);

	void Attack(Creature& Defense);
	int Defnese(const int nAttack);
};