#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>




int main() {

  int n;
  std::cin >> n;


for(int i = 1; i <= n; i++){

  std::string ingredient; 

  std::cin >> ingredient;

  bool flour = false;
  bool eggs = false;
  bool sugar = false;

  while (ingredient != "Bake!" || !flour || !eggs || !sugar){

    if (ingredient == "flour") {

      flour = true;

    }
    else if(ingredient == "eggs"){
      eggs = true;
    }
    else if(ingredient == "sugar"){
      sugar = true;

    }
    if (ingredient == "Bake!" && (!flour || !eggs || !sugar)){
      std::cout << "The batter should contain flour, eggs and sugar!\n";
    }


    std::cin >> ingredient;
  }
  

  std::cout << "Baking batch number " << i << "...\n";



}



  return 0;
}
