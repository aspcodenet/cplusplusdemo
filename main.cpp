#include <iostream>
#include <string>
// ArrayList i Java - lagras konsekutivt + dynamisk
#include <vector> 
// Vector i C++ - lagras konsekutivt + dynamisk

using namespace std;
int main2(){
    string namn = "Stefan";
    namn += " Holmberg";


  
    int age;
    

    cout << "Tjena" << endl;
    //"Hej Stefan du är bara 52 dvs evigt ung"
    cout << "Hej " << namn << " du är bara " << age <<  " years dvs evigt ung";
    return 0;
}

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
    //Player *p = new Player();

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
