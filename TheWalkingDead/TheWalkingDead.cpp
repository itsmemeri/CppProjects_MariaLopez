#include <iostream>
#include <string.h>
#include <ctime>

enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie;

class Player
{
public:
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie &z);		//especificación 
	bool isAlive()
	{
		return (life > 0);
	}
	Player() : weapon(Weapon(rand() % static_cast<int>(Weapon::MAX))),
		precision (rand() % 20 / 10.f), life (100)
	{
	};
};

class Zombie
{
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &p)
	{
		if (distanceToPlayer <= 0)
		{
			p.life -= damage;
		}
		else
		{
			distanceToPlayer--;

		}
	};
	bool isAlive()
	{
		if (life > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Zombie() : distanceToPlayer(rand()% 200 + 20), speed (rand () % 200 / 10), 
		damage (rand() % 200 / 10), life (rand() % 100)
	{
	};
};
void Player::attack (Zombie &z)
{
	z.life = z.life - static_cast<int>(Player::weapon) * Player::precision;
};
void main()
{
	srand(time(nullptr));
	const int numZombies = 10;
	Player player;
	Zombie zombies[numZombies];
	bool zombiesAreAlive;
	do
	{
		zombiesAreAlive = false;
		for (int i = 0; i < numZombies; i++)
		{
			if (zombies[i].isAlive())
			{
				zombies[i].attack(player);
				player.attack(zombies[i]);
				zombiesAreAlive = true;
			}
			std::cout << "Zombie [" << i << "]" << std::endl << "        life = " << zombies[i].life << " distance = " << zombies[i].distanceToPlayer << " speed = " << zombies[i].speed << " damage = " << zombies[i].damage << std::endl;
		}

	} 
	while (player.isAlive() && zombiesAreAlive == true);
	if (zombiesAreAlive = true)
	{
		std::cout << "Han vencido los zombies";
	}
	else
	{
		std::cout << "Ha vencido el jugador";
	};
};