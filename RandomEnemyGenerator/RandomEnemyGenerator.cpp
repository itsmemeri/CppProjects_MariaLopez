#include "Header.h"
#include <time.h>
#include <math.h>
#include <iostream>
using namespace std; // tambien se puede poner std:: antes del string y no poner la libreria

string names[]{ "Pinchependejo", "Antxel", "Shrek", "Merienda"};

enum class EnemyType {ZOMBIE, VAMPIRE, GHOST, WITCH};

struct Enemy
{
	EnemyType type;
	/*std::*/string name;
	int health;
	/*std::string getEnemyTypeString()
	{
		switch (type)
		{
			case EnemyType::ZOMBIE::	return "zombie";
			case EnemyType::VAMPIRE::	return "vampire";				PARTE OPCIONAL DE LOS EJERCICIOS
			case EnemyType::GHOST::		return "zombie";
			case EnemyType::WITCH::		return "witch";
			default: return " ";
		}
	}
	*/
};

bool operator == (Enemy A, Enemy B)
{
	if (A.name == B.name && A.type == B.type)
	{
		return true;
	}
	else
	{
		return false;
	}
};
/*bool operator==(const Enemy&a, const Enemy &b)
{
	return a.name == b.name && a.type == b.type;
}*/

Enemy CreateRandomEnemy()
{
	int i = rand() % 4;
	int health = rand() % 101;
	
	return Enemy{EnemyType(rand() % 4), names[i], health };
}