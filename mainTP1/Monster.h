#pragma once
#include "Characters.h"
#include <iostream>

struct Size {
	int height;
	int weight;
};
struct Description {
	int countLegs;
	int countArms;
	int countEyes;
	std::string colorSkin;
	std::string specificity;
};

class Monster : public Characters {
private:
	std::string name;
	Size size;
	Description description;

public:
	~Monster();
	Monster();
	Monster(Monster& mon);

	void display() override;
	void setData() override;
	void fileDisplay(std::ofstream& out) override;


};