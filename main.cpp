#include <iostream>


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


int main(){
    std::string namn ;
    int age ;
  
    std::cout << "Vad heter du?";
    std::cin >> namn;
    std::cout << "Hur gammal är du?";
    std::cin >> age;
  


    //std::cout << "Tjena" << std::endl;
    //"Hej Stefan du är bara 52 dvs evigt ung"
    std::cout << "Hej " << namn << " du är bara " << age <<  " år dvs evigt ung";
    return 0;
}
