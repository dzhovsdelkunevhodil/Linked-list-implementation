#include "Hero.h"


Hero::Hero() {
#ifdef DEBUG
	std::cout << "Constructor Hero\n";
#endif // DEBUG	
	name = "";
	typeWeapon = "";
	skills.firstSkill = "";
	skills.secondSkill = "";
	skills.thirdSkill = "";
}