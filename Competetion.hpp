
#ifndef COMPETETION_H_
#define COMPETETION_H_
#include "Animal.hpp"
#include "Tortoise.hpp"
#include"Hare.hpp"
#include"Elephant.hpp"
#include"Dog.hpp"
#include "Road.hpp"
#include<iostream>

#include<vector>
using namespace std;
class Competetion {
public:
    Competetion();

    
    ~Competetion();
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
