#pragma once
#include "Characters.h"
#include <iostream>

struct SkillsV {
	std::string firstSkill;
	std::string secondSkill;
	std::string thirdSkill;
};

class Villain : public Characters {
private:
	std::string name;
	std::string typeWeapon;
	std::string crime;
	std::string address;
	SkillsV skillsV;

public:
	~Villain();
	Villain();
	Villain(Villain& vil);

	void display() override;
	void setData() override;
	void fileDisplay(std::ofstream& out) override;


};