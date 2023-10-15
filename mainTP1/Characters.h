#pragma once
#define DEBUG
#include <iostream>
class Characters {

public:
	virtual ~Characters() {
#ifdef DEBUG
		std::cout << "Destructor Characters\n";
#endif // DEBUG	
	};
	virtual void display() = 0;
	virtual void setData() = 0;
	virtual void fileDisplay(std::ofstream& out) = 0;
	virtual void fileSetData(std::ifstream& in) = 0;
};