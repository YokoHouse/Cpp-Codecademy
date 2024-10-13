#include <iostream>

int main() {
  // Add your code below  
  double weight;
  double weightOnMars;

  std::cout << "Input the weight of the item: \n";
  std::cin >> weight;
  weightOnMars = weight * (3.721/9.81);
  
  std::cout << "The weight on Mars is: " << weightOnMars;
}
