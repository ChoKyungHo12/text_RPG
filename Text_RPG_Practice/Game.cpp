#include "Game.h"
#include <iostream>
using namespace std;
#include "Creature.h"
#include "Field.h"

Game::Game()
{
	cout << "게임 시작, 계속하려면 숫자 아무키나 입력" << endl;
	int szTrash;
	scanf_s("%d", &szTrash);
	GameStart();
}

Game::~Game()
{
	delete nGamePlayer;
	delete nField;

	cout << "game 소멸자 호출!" << endl;
	nGamePlayer = nullptr;
	nField = nullptr;
}

void Game::GameStart()
{
	int szChampion=0;
	cout << "챔피언 선택\n 1. 리신" << endl;
	cin >> szChampion;
	if (szChampion == 1)
	{
		nGamePlayer = new Leesin(100, 10, 3);
		cout << "리신 선택!!" << endl;
	}

	nField = new Field(nGamePlayer);

	nField->Battle();
}