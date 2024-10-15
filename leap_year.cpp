#include <iostream>

int main() {
  int year;
  
  std::cin >> year;
  if(year >= 1000 && year <= 9999){
    if(year % 4 == 0){
      if(year % 100 == 0 ){
        if(year % 400 == 0){
          std::cout << "Its a leap!\n";
        } else {
          std::cout << "Its not a leap!\n";
        }
      } else {
        std::cout << "Its a leap year!\n";
      }
    } else {
      std::cout << "Its not a leap!\n";
    }
  } else {
    std::cout << "Please, enter a valid year!\n";
  }
}
