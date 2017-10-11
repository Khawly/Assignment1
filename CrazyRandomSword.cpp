#include "CrazyRandomSword.h"
#include <stdlib.h>

double CrazyRandomSword::hit(double armor) {
	hitPoints = rand() % 91 + 10;
	armor = rand() % ((armor+1)/2); 
    double damage = hitPoints - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
