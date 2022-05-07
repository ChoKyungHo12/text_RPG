#pragma once
class Creature;
class Monster;

class Field
{
protected:
	Creature* nPlayer;
	Monster* n_Monster;
public:
	Field(Creature* Player);
	~Field();

	void Battle();
};

