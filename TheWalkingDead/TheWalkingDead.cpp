#include <iostream>
#include <string.h>
#include <ctime>

enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };



std::ostream& operator<<(std::ostream& os, Weapon aux) {
{
switch (aux)
{	
case Weapon::FISTS::		return "fists";
case Weapon::GUN::			return "gun";				PARTE OPCIONAL DE LOS EJERCICIOS
case Weapon::SHOTGUN::		return "shotgun";
case Weapon::REVOLVER::		return "revolver";
case Weapon::SNIPER::		return "sniper";
case Weapon::MACHINE_GUN::	return "machine gun";
default: return " ";
}
}

class Player
{
	Weapon weapon;
	float precision;
	int life;
};
class Zombie
{
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
};

void main()
{

};