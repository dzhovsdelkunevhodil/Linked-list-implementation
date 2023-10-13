#include "Villain.h"
#include <iostream>


Villain::Villain() {
#ifdef DEBUGg
	std::cout << "Constructor Villain\n";
#endif // DEBUG	
	name = "";
	typeWeapon = "";
	crime = "";
	address = "";
	skillsV.firstSkill = "";
	skillsV.secondSkill = "";
	skillsV.thirdSkill = "";
}

void Villain::display(){
	std::cout << "Villain\n";
	std::cout << "name \t\t:\t" << name << '\n';
	std::cout << "typeWeapon \t:\t" << typeWeapon << '\n';
	std::cout << "crime \t\t:\t" << crime << '\n';
	std::cout << "address \t:\t" << address << '\n';
	std::cout << "1st skill \t:\t" << skillsV.firstSkill << '\n';
	std::cout << "2nd skill \t:\t" << skillsV.secondSkill << '\n';
	std::cout << "3rd skill \t:\t" << skillsV.thirdSkill << '\n';
}

void Villain::setData()
{
	std::cout << "Villain\n";
	std::cout << "name(str) \t:\t"; std::cin >> name; std::cout << '\n';
	std::cout << "typeWeapon(str) \t:\t"; std::cin >> typeWeapon; std::cout << '\n';
	std::cout << "crime(str) \t:\t"; std::cin >> crime; std::cout << '\n';
	std::cout << "address(str) \t:\t"; std::cin >> address; std::cout << '\n';
	std::cout << "1st skill(str) \t:\t"; std::cin >> skillsV.firstSkill; std::cout << '\n';
	std::cout << "2nd skill(str) \t:\t"; std::cin >> skillsV.secondSkill; std::cout << '\n';
	std::cout << "3rd skill(str) \t:\t"; std::cin >> skillsV.thirdSkill; std::cout << '\n';
}
