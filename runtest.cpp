#include "Road.hpp"// change this to Road
#include "Animal.hpp"
#include "Tortoise.hpp"
#include "Hare.hpp"
#include "Elephant.hpp"
#include "Duck.hpp"
#include "Competition.hpp"
//#include "Road.cpp" // delete this if it doesnot work 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Competition game;
	game.addRoad(100);
	Hare rabbit;
	Tortoise tor;
	//Elephant elephant;
	//Dog dog;
	Elephant elephant;

	game.addPlayer(&rabbit);

	//game.start();
	//Tortoise tor;
	//Dog dawg;
	game.addPlayer(&tor);
	//game.addPlayer(&elephant);
	//game.addPlayer(&dog);

	int pattern[] = {1, 2, -1, 5, 0};
	int size = sizeof(pattern)/ sizeof(pattern[0]);
	Duck duck("Duck", 'D', pattern , size, 0);
	game.addPlayer(&duck);
	game.addPlayer(&elephant);






	game.start();

	//clear();


	return 0;



}