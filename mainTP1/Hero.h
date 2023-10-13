#pragma once
#include "Characters.h"
#include <iostream>

struct Skills {
	std::string firstSkill;
	std::string secondSkill;
	std::string thirdSkill;
};

class Hero : public Characters {
private:
	std::string name;
	std::string typeWeapon;
	Skills skills;

public:

	Hero();
	void display() override {

	}



};