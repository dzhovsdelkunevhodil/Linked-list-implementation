#pragma once

class Characters {

public:
	virtual ~Characters() {
#ifdef DEBUG
		std::cout << "Destructor Characters\n";
#endif // DEBUG	
	};
	virtual void display() = 0;


};