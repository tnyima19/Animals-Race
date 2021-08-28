
#ifndef COMPETITION_H_
#define COMPETITION_H_
#include "Animal.hpp"
#include "Tortoise.hpp"
#include "Hare.hpp"
#include "Elephant.hpp"
#include "Duck.hpp"
#include "Road.hpp"
#include<iostream>

#include<vector>
using namespace std;
class Competition {
public:
    Competition();

    
    ~Competition();
    void addRoad(int length);
    void addPlayer(Animal* beast);
    void start();


private:
    std::vector<Animal*> players;
    //Hare* rabbit;
    //Tortoise* tor;
    Road* rd;
};
#endif
