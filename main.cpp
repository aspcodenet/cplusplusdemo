#include <iostream>
#include <string>
// ArrayList i Java - lagras konsekutivt + dynamisk
#include <vector> 
// Vector i C++ - lagras konsekutivt + dynamisk
#include <iomanip>

#include "person.h"

// string compare
// string!
// DEMO class + vector
// if satser
// for loopar + foreach!


class Player{
    public:
        std::string name;
        int age;
        int jersey;
        void Print(){

        }
    private:
        int bla;
};

void changePlayer(Player &player){
    std::cin >> player.age;
    std::cin >> player.name;
}

void changeAge(int &age2){
    age2 = 99;
}



int main(){
    // Product p = new Product("Mugg",12);
    Person stefan(52,"Stefan", "Holmberg"); // stackallokerat

    //Person *stefansPointer = new Person(); // heapallokerat  AVOID!!!

    try{
        stefan.setAge(52);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    std::cout << stefan.getAge() << std::endl;

    Person oliver;
    oliver.setAge(16);
    std::cout << oliver.getAge() << std::endl;




    // SetConsoleOutputCP(65001);
    // std::cout << "blä hej" << std::endl;
    // double thevalue = 123.12325545;
    // std::cout << std::fixed << std::setprecision(2) << thevalue; 
    // //Player *p = new Player();

    int age2 = 12;
    changeAge(age2);
    std::cout << age2; // 99

    Player pa;
    changePlayer(pa);

    std::vector<Player> allPlayers;

    for(int i=0; i<2; i++){
        Player player;
        std::cout << "Age";
        std::cin >> player.age;
        std::cout << "Name";
        std::cin >> player.name;
        allPlayers.push_back(player);
    }

    // Skriva ut alla spelare
    // for(int i = 0; i < allPlayers.size();i++){
    //     Player p = allPlayers[i];
    //     std::cout << p.name << std::endl;
    // }
    for(Player p : allPlayers){
        std::cout << p.name << std::endl;
    }
    
   







    std::string namn;
    int age;
  
    std::cout << "Vad heter du?";
    std::cin >> namn;
    // if(namn.find("Stefan") !=std::string::npos){

    // }
    // if(namn == "Stefan"){
    //     std::cout << "Fint namn" << std::endl;
    // }
    std::cout << "Hur gammal är du?";
    std::cin >> age;

    //std::cout << "Tjena" << std::endl;
    //"Hej Stefan du är bara 52 dvs evigt ung"
    std::cout << "Hej " << namn << " du är bara " << age <<  " år dvs evigt ung";
    return 0;
}
