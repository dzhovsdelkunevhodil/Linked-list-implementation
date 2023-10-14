#pragma once
#include "Characters.h"
#include <iostream>

struct SkillsH {
	std::string firstSkill;
	std::string secondSkill;
	std::string thirdSkill;
};

class Hero : public Characters {
private:
	std::string name;
	std::string typeWeapon;
	SkillsH skillsH;

public:
	~Hero();
	Hero();
	Hero(Hero& hero);

	void display() override;
	void setData() override;


};