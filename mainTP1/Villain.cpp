#include "Villain.h"
#include <iostream>
#include <fstream>

Villain::Villain() {
#ifdef DEBUG
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

Villain::~Villain(){
#ifdef DEBUG
	std::cout << "Destructor Villain\n";
#endif // DEBUG	
}

Villain::Villain(Villain& vil) {
#ifdef DEBUG
	std::cout << "Constructor copy Villain\n";
#endif // DEBUG	
	name = vil.name;
	typeWeapon = vil.typeWeapon;
	crime = vil.crime;
	address = vil.address;
	skillsV.firstSkill = vil.skillsV.firstSkill;
	skillsV.secondSkill = vil.skillsV.secondSkill;
	skillsV.thirdSkill = vil.skillsV.thirdSkill;
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

void Villain::fileDisplay(std::ofstream& out)
{
	out << "Villain\n";
	out << "name \t\t:\t" << name << '\n';
	out << "typeWeapon \t:\t" << typeWeapon << '\n';
	out << "crime \t\t:\t" << crime << '\n';
	out << "address \t:\t" << address << '\n';
	out << "1st skill \t:\t" << skillsV.firstSkill << '\n';
	out << "2nd skill \t:\t" << skillsV.secondSkill << '\n';
	out << "3rd skill \t:\t" << skillsV.thirdSkill << '\n';
}

void Villain::fileSetData(std::ifstream& in)
{
	in >> name;
	in >> typeWeapon;
	in >> crime;
	in >> address;
	in >> skillsV.firstSkill;
	in >> skillsV.secondSkill;
	in >> skillsV.thirdSkill;
}