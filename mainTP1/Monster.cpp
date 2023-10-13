#include "Monster.h"

Monster::Monster() {
#ifdef DEBUG
	std::cout << "Constructor Monster\n";
#endif // DEBUG	
	name = "";
	size.height = 0;
	size.weight = 0;
	description.colorSkin = "";
	description.countArms = 0;
	description.countEyes = 0;
	description.countLegs = 0;
	description.specificity = "";
}