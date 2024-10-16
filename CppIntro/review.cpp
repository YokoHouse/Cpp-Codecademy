#include <iostream> 
#include <vector>

int main(){
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  int even = 0;
  int odd = 1;

  for(int i = 0; i < numbers.size(); i++){
    if(numbers[i] % 2 == 0){
      even = even + numbers[i];
    } else {
      odd = odd * numbers[i];
   
    }
  }
  std::cout << "Even: " << even << "\n";
  std::cout << "Odd: " << odd;
}
