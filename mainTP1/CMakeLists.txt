cmake_minimum_required(VERSION 3.26.4)


project(mainTP1)


set{SOURSES
	mainTP1.cpp
	Hero.cpp
	Monster.cpp
	Villain.cpp
}

set{Headers
	Characters.h
	Hero.h
	Villain.h
	Monster.h
	Keeper.h
	Menu.h
}



add_executable(mainTP1 ${SOURCES})

target_sources(mainTP1 PRIVATE ${Headers})