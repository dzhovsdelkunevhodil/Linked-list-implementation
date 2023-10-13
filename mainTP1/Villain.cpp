#include "Villain.h"


Villain::Villain() {
#ifdef DEBUG
	std::cout << "Constructor Villain\n";
#endif // DEBUG	
	name = "";
	typeWeapon = "";
	crime = "";
	address = "";
	skills.firstSkill = "";
	skills.secondSkill = "";
	skills.thirdSkill = "";
}