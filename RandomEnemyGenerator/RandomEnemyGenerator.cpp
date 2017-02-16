#include "Header.h"
#include <time.h>
#include <math.h>
#include <iostream>
using namespace std;

string names[]{ "Pinchependejo", "Antxel", "Shrek", "Merienda" };

enum EnemyType {zombie, vampire, ghost, witch};

struct Enemy
{
	EnemyType type;
	string name;
	int health;
};

bool operator == (Enemy A, Enemy B)
{
	if (A.name == B.name)
	{
		return true;
	}
	else
	{
		return false;
	}
	if (A.type == B.type)
	{
		return true;
	}
	else
	{
		return false;
	}
};

Enemy CreateRandomEnemy()
{
	int i = rand() % 4;
	int health = rand() % 101;
	
	return Enemy{EnemyType(rand() % 4), names[i], health };
}