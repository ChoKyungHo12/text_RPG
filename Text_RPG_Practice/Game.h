#pragma once
class Creature;
class Field;

class Game
{
protected:
	Creature* nGamePlayer;
	Field* nField;

public:
	Game();
	~Game();
	void GameStart();
};