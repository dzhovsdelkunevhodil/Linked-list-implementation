#include "Hero.h"
#include <iostream>

#include <fstream>
Hero::Hero() {
#ifdef DEBUG
	std::cout << "Constructor Hero\n";
#endif // DEBUG	
	name = "";
	typeWeapon = "";
	skillsH.firstSkill = "";
	skillsH.secondSkill = "";
	skillsH.thirdSkill = "";
}

Hero::~Hero() {
#ifdef DEBUG
	std::cout << "Destructor Hero\n";
#endif // DEBUG	
}

Hero::Hero(Hero& hero) {
#ifdef DEBUG
	std::cout << "Constructor copy Hero\n";
#endif // DEBUG	
	name = hero.name;
	typeWeapon = hero.typeWeapon;
	skillsH.firstSkill = hero.skillsH.firstSkill;
	skillsH.secondSkill = hero.skillsH.secondSkill;
	skillsH.thirdSkill = hero.skillsH.thirdSkill;
}

void Hero::display(){
	std::cout << "Hero\n";
	std::cout << "name \t\t:\t" << name << '\n';
	std::cout << "typeWeapon \t:\t" << typeWeapon << '\n';
	std::cout << "1st skill \t:\t" << skillsH.firstSkill << '\n';
	std::cout << "2nd skill \t:\t" << skillsH.secondSkill << '\n';
	std::cout << "3rd skill \t:\t" << skillsH.thirdSkill << '\n';
}

void Hero::setData(){
	std::cout << "Hero\n";
	std::cout << "name(str) \t:\t"; std::cin >> name; std::cout << '\n';
	std::cout << "typeWeapon(str) \t:\t"; std::cin >> typeWeapon; std::cout << '\n';
	std::cout << "1st skill(str) \t:\t"; std::cin >> skillsH.firstSkill; std::cout << '\n';
	std::cout << "2nd skill(str) \t:\t"; std::cin >> skillsH.secondSkill; std::cout << '\n';
	std::cout << "3rd skill(str) \t:\t"; std::cin >> skillsH.thirdSkill; std::cout << '\n';
}

void Hero::fileDisplay(std::ofstream& out){
	out << "Hero\n";
	out << "name \t\t:\t" << name << '\n';
	out << "typeWeapon \t:\t" << typeWeapon << '\n';
	out << "1st skill \t:\t" << skillsH.firstSkill << '\n';
	out << "2nd skill \t:\t" << skillsH.secondSkill << '\n';
	out << "3rd skill \t:\t" << skillsH.thirdSkill << '\n';
}

void Hero::fileSetData(std::ifstream& in){
	in >> name;
	in >> typeWeapon;
	in >> skillsH.firstSkill;
	in >> skillsH.secondSkill;
	in >> skillsH.thirdSkill;
}


