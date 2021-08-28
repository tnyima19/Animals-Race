#include"Competition.hpp"
//#include"Animal.hpp"

#include<cstdlib>
#include<iomanip>

Competition::Competition(){
  srand(1);
   rd = new Road;

  
}
Competition::~Competition(){
    
    delete rd;
    rd = nullptr;
}


void Competition::addRoad(int length)
{
    // make road of specific length 
    
    srand(1);
    rd = new Road(length); // what kind of declaration is this . 
    // Road* rd = new Road[legnth];
    // Road* rd = new Road(length)

    //rd->Road(length);
}

void Competition::addPlayer(Animal* beast){
    //ani->setName(beast);
    //ani->setMark(beast.at(0));
    //ani->setPattern()
    //beast = new Animal;
    
    players.push_back(beast);
    
      
      //beast = beast->getName(), beast->getMark(), beast->getPattern(), beast->getPatternLength(), beast->getPosition());
    

    
}
void Competition::start() 
{
    vector<Animal*> winners;
    int lastBlock = rd-> getLastBlock();
    int round = 1;

while (players[0]-> getPosition() < lastBlock && players[1]-> getPosition() < lastBlock && players[2]->getPosition() <lastBlock && players[3]->getPosition() <lastBlock ) 
{
    for(int i=0;i<players.size();i++){
        players[i]->move();
    }
    //players[0]->move();
    //players
    for(int j=0;j<players.size();j++){
        if(players[j]->getPosition()< 0)
            players[j]->setPosition(0);
    }
    for(int k=0;k<players.size();k++){
        if(players[k]->getPosition()> lastBlock)
            players[k]->setPosition(lastBlock);
    }
    for(int l=0;l<players.size();l++){
        rd->mark(players[l]->getPosition(), players[l]->getMark());
    }
    //rd->mark(players[0]->getPosition(), players[0]->getMark());
    //rd->mark(players[1]->getPosition(), players[1]->getMark());
    //rd->mark(players[2]->getPosition(), players[2]->getMark());
    //rd->mark(players[3]->getPosition(), players[3]->getMark());
    
    cout << setw(3) << round << " ";
    cout << rd -> toString() << endl;// --------------------->
    
    for(int i =0;i<players.size();i++){
        rd->mark(players[i]->getPosition(), ' ');
    }
    //rd -> mark(players[1] -> getPosition(), ' ');
    //rd -> mark(players[0] -> getPosition(), ' ');
    round++;
    }
    
      if (players[0] -> getPosition() == lastBlock) {
        winners.push_back(players[0]);

       players[0]->showExcitement();
      }
      else if (players[1] -> getPosition() == lastBlock) {
        winners.push_back(players[1]);
        players[1]->showExcitement();
          //cout << "Yay!!! tortoise wins!" << endl;
      }
      else if (players[2] -> getPosition() == lastBlock) {
        winners.push_back(players[2]);
        players[2]->showExcitement();
          //cout << "Yay!!! tortoise wins!" << endl;
      }
      else if (players[3] -> getPosition() == lastBlock) {
        winners.push_back(players[3]);
        players[3]->showExcitement();
          //cout << "Yay!!! tortoise wins!" << endl;
      }
      else if(players[0]->getPosition() == lastBlock && players[3]->getPosition() == lastBlock){
        winners.push_back(players[0]);
        winners.push_back(players[3]);
        players[0]->showExcitement();
        players[3]->showExcitement();

      }

    }