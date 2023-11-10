
//dobavqne na stoinosti v prazen vektor


#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>


int main() {
  
  std::vector<std::string> last_jedi;
  
  // Add characters here:
  
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  
  
  
  cout << last_jedi[0] << " ";
  cout << last_jedi[1] << " ";
  cout << last_jedi[2] << " ";
  cout << last_jedi[3] << " ";
  
}


//vektor index

#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult = {800, 1200, 1500};
  
  std::vector<double> subway_child = {400, 600, 750};
  
  // What number at index 2 of subway_child?
  
  std::cout << subway_child[0] << "\n";
  std::cout << subway_child[1] << "\n";
  std::cout << subway_child[2] << "\n";
}

// kasova belejka
//vektor 

int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
    double total = 0.0;
  // Calculate the total using a for loop:
  for (int i = 0; i < delivery_order.size(); i++) {
   total = total + delivery_order[i];
  }
  
  

  
 std::cout << "Total: $" << total << "\n";
  
  
  
  
  return 0;
  
}