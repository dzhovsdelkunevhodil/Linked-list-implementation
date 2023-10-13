

#include <iostream>
#include "Keeper.h"
#include "Characters.h"
#include "Monster.h"
#include "Hero.h"
#include "Villain.h"



int main(){
	
	Hero hero;
	Villain villain;
	Monster monster;
	Keeper keep;
	hero.setData();
	villain.setData();
	monster.setData();
	keep.addElement(&hero);
	keep.addElement(&villain);
	keep.addElement(&monster);

	keep.display();



	return 0;
}

