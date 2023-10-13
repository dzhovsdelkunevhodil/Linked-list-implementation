#pragma once
#define DEBUGg
#include <iostream>
class Characters {

public:
	virtual ~Characters() {
#ifdef DEBUGg
		std::cout << "Destructor Characters\n";
#endif // DEBUG	
	};
	virtual void display() = 0;
	virtual void setData() = 0;

};