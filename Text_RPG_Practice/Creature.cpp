#include "Creature.h"
#include <iostream>
using namespace std;

Creature::Creature(int nHp, int nAttack, int mDefense):
	_nHp(nHp), _nAttack(nAttack), _mDefense(mDefense) {}
Creature::~Creature() {}
void Creature::Attack(Creature& Defense) {}
int Creature::Defnese(const int nAttack) { return 0; }
bool Creature::IsDead()
{
	if (_nHp > 0)
		return false;
	else
		return true;
}


Leesin::Leesin(int nHp, int nAttack, int mDefense):
	Creature(nHp, nAttack, mDefense) {}

void Leesin::Attack(Creature& Defense)
{
	cout << szName << "이 공격합니다" << endl;
	int nMinusHp = Defense.Defnese(_nAttack);
	cout << "몬스터 체력 " << nMinusHp << " 감소" << endl;
}

int Leesin::Defnese(const int nAttack)
{
	_nHp -= (nAttack+ _mDefense);
	return (nAttack + _mDefense);
}


Monster::Monster(int nHp, int nAttack, int mDefense) :
	Creature(nHp, nAttack, mDefense) {}

void Monster::Attack(Creature& Defense)
{
	cout << szName << "이 공격합니다" << endl;
	int nMinusHp = Defense.Defnese(_nAttack);
	cout << "챔피언 체력 " << nMinusHp << " 감소" << endl;
}

int Monster::Defnese(const int nAttack)
{
	_nHp -= (nAttack + _mDefense);
	return (nAttack + _mDefense);
}