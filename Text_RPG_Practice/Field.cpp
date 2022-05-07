#include "Field.h"
#include "Creature.h"
#include <iostream>
using namespace std;

Field::Field(Creature* Player): nPlayer(Player)
{
	n_Monster = new Monster(70, 3, 1);
}
Field::~Field()
{
	delete n_Monster;
	cout << "field 소멸자 호출!!" << endl;
	n_Monster = nullptr;
}

void Field::Battle()
{
	while (true)
	{
		int nBreak = 0;
		cout << "계속하려면 아무 숫자 입력" << endl;
		cin >> nBreak;

		cout << "player가 공격합니다" << endl;
		nPlayer->Attack(*n_Monster);
		if (n_Monster->IsDead())
		{
			cout << "player 승리" << endl;
			break;
		}

		n_Monster->Attack(*nPlayer);
		if (nPlayer->IsDead())
		{
			cout << "player 패배" << endl;
			break;
		}

	}
}
