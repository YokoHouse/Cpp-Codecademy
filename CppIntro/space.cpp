#include <iostream>

int main() {
  
    double weightOnEarth;
    int choice;

    std::cout << "Whats your weight on Earth:";
    std::cin >> weightOnEarth;
  
    std::cout << "what planet do you want?\n";
    std::cout << "1 - Mercury, 2 - Venus, 3 - Mars, 4 - Jupiter, 5 - Saturn, 6 - Uranus, 7 - Neptune\n";

    std::cin >> choice;

    double mercuryGravity = 0.38;
    double venusGravity = 0.91;
    double marsGravity = 0.38;
    double jupiterGravity = 2.34;
    double saturnGravity = 1.06;
    double uranusGravity = 0.92;
    double neptuneGravity = 1.19;
    switch(choice){
      case 1:
        std::cout << "Your weight on Mercury will be:" << mercuryGravity*weightOnEarth;
        break;
      case 2: 
        std::cout << "Your weight on Venus will be:" << venusGravity*weightOnEarth;
        break;
      case 3:
        std::cout << "Your weight on Mars will be:" << marsGravity*weightOnEarth;
        break;
      case 4:
        std::cout << "Your gravity on Jupiter will be:" << jupiterGravity*weightOnEarth;
        break;
      case 5:
        std::cout << "Your weight on Starun will be:" << saturnGravity*weightOnEarth;
        break;
      case 6: 
        std::cout << "Your weight on Uranus will be:" << uranusGravity*weightOnEarth;
        break;
      case 7:   
        std::cout << "Your weight on Neptune will be:" << neptuneGravity*weightOnEarth;
        break;
      default:
        std::cout << "Please select planet from 1 to 7\n";
        break;
    }
}

  
  
