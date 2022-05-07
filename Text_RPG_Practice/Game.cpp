#include "Game.h"
#include <iostream>
using namespace std;
#include "Creature.h"
#include "Field.h"

Game::Game()
{
	cout << "���� ����, ����Ϸ��� ���� �ƹ�Ű�� �Է�" << endl;
	int szTrash;
	scanf_s("%d", &szTrash);
	GameStart();
}

Game::~Game()
{
	delete nGamePlayer;
	delete nField;

	cout << "game �Ҹ��� ȣ��!" << endl;
	nGamePlayer = nullptr;
	nField = nullptr;
}

void Game::GameStart()
{
	int szChampion=0;
	cout << "è�Ǿ� ����\n 1. ����" << endl;
	cin >> szChampion;
	if (szChampion == 1)
	{
		nGamePlayer = new Leesin(100, 10, 3);
		cout << "���� ����!!" << endl;
	}

	nField = new Field(nGamePlayer);

	nField->Battle();
}