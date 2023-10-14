#include "Monster.h"
#include <iostream>

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

Monster::Monster(Monster& mon) {
#ifdef DEBUG
	std::cout << "Constructor copy Monster\n";
#endif // DEBUG	
	name = mon.name;
	size.height = mon.size.height;
	size.weight = mon.size.weight;
	description.colorSkin = mon.description.colorSkin;
	description.countArms = mon.description.countArms;
	description.countEyes = mon.description.countEyes;
	description.countLegs = mon.description.countLegs;
	description.specificity = mon.description.specificity;
}

void Monster::display(){
	std::cout << "Monster\n";
	std::cout << "name \t\t:\t" << name << '\n';
	std::cout << "height \t\t:\t" << size.height << '\n';
	std::cout << "weight \t\t:\t" << size.weight << '\n';
	std::cout << "colorSkin \t:\t" << description.colorSkin << '\n';
	std::cout << "countArms \t:\t" << description.countArms << '\n';
	std::cout << "countLegs \t:\t" << description.countLegs << '\n';
	std::cout << "countEyes \t:\t" << description.countEyes << '\n';
	std::cout << "specificity \t:\t" << description.specificity << '\n';

}

void Monster::setData()
{
	std::cout << "Monster\n";
	std::cout << "name(str) \t:\t"; std::cin >> name; std::cout << '\n';
	std::cout << "height(int) \t:\t"; std::cin >> size.height; std::cout << '\n';
	std::cout << "weight(int) \t:\t"; std::cin >> size.weight; std::cout << '\n';
	std::cout << "colorSkin(str) \t:\t"; std::cin >> description.colorSkin; std::cout << '\n';
	std::cout << "countArms(int) \t:\t"; std::cin >> description.countArms; std::cout << '\n';
	std::cout << "countLegs(int) \t:\t"; std::cin >> description.countLegs; std::cout << '\n';
	std::cout << "countEyes(int) \t:\t"; std::cin >> description.countEyes; std::cout << '\n';
	std::cout << "specificity(str) \t:\t"; std::cin >> description.specificity; std::cout << '\n';
}
