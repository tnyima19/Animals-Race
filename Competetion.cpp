#include"Competetion.hpp"
//#include"Animal.hpp"

#include<cstdlib>
#include<iomanip>

Competetion::Competetion(){
  srand(1);
   rd = new Road;

   //Animal* ani = new Animal;

  
}
Competetion::~Competetion(){
    //delete ani;
    delete rd;
    rd = nullptr;

   // delete ani;
    //ani = nullptr;
    //delete rabbit;
    //delete tor;
    //delete ani;
}


void Competetion::addRoad(int length)
{
    // make road of specific length 
    
    srand(1);
    rd = new Road(length); // what kind of declaration is this . 
    // Road* rd = new Road[legnth];
    // Road* rd = new Road(length)

    //rd->Road(length);
}

void Competetion::addPlayer(Animal* beast){
    //ani->setName(beast);
    //ani->setMark(beast.at(0));
    //ani->setPattern()
    //beast = new Animal;
    
    players.push_back(beast);
    
      
      //beast = beast->getName(), beast->getMark(), beast->getPattern(), beast->getPatternLength(), beast->getPosition());
    
    




   
    //Animal* ani = new Animal;
   //ani(ani->getName(), ani->getMark(),ani->getPattern(), ani->getPatternLength(),ani->getPosition() );
                                        // i want default pattern if its not hare.or tortoise here.

    
}
void Competetion::start()  {
    vector<Animal*> winners;

  int lastBlock = rd -> getLastBlock();
  int round = 1;
  while (players[0]-> getPosition() < lastBlock && players[1]-> getPosition() < lastBlock && players[2]->getPosition() <lastBlock && players[3]->getPosition() <lastBlock ) {
      players[0]-> move();
    if (players[0]-> getPosition() < 0 ) {
      players[0]-> setPosition(0);
    }
    else if (players[0] -> getPosition() > lastBlock) {
      players[0] -> setPosition(lastBlock);
    }

    players[1] -> move();
    if (players[1] -> getPosition() < 0 ) {
      players[1] -> setPosition(0);
    }
    else if (players[1] -> getPosition() > lastBlock) {
      players[1] -> setPosition(lastBlock);
    }

    rd -> mark(players[0] -> getPosition(), 'H');
    rd -> mark(players[1] -> getPosition(), 'T');

    cout << setw(3) << round << " ";
    cout << rd -> toString() << endl;// --------------------->

    

    rd -> mark(players[1] -> getPosition(), ' ');
    rd -> mark(players[0] -> getPosition(), ' ');
    round++;
  }

  if (players[0] -> getPosition() == lastBlock && players[1] -> getPosition() == lastBlock) {
    players[0]->showExcitement();
    players[1]->showExcitement();
    winners.push_back(players[0]);
    winners.push_back(players[1]);

  }
  else if (players[0] -> getPosition() == lastBlock) {
    winners.push_back(players[0]);

   players[0]->showExcitement();
  }
  else if (players[1] -> getPosition() == lastBlock) {
    winners.push_back(players[1]);
    players[1]->showExcitement();
      //cout << "Yay!!! tortoise wins!" << endl;
  } 

}


