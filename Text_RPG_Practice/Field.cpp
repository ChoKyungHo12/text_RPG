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
	cout << "field �Ҹ��� ȣ��!!" << endl;
	n_Monster = nullptr;
}

void Field::Battle()
{
	while (true)
	{
		int nBreak = 0;
		cout << "����Ϸ��� �ƹ� ���� �Է�" << endl;
		cin >> nBreak;

		cout << "player�� �����մϴ�" << endl;
		nPlayer->Attack(*n_Monster);
		if (n_Monster->IsDead())
		{
			cout << "player �¸�" << endl;
			break;
		}

		n_Monster->Attack(*nPlayer);
		if (nPlayer->IsDead())
		{
			cout << "player �й�" << endl;
			break;
		}

	}
}
