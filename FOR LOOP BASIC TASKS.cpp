

// for loop koito broi ot 99 do 0
#include <iostream>

int main() {
  // BUKVI OT A DO Z

   for(char letter = 'a'; letter <= 'z'; letter++){
    cout << letter << endl;
  }

  // Write a for loop here:
  
  for (int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it arround.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n\n";
  }

}

// for loop koito povtarq neshto 10 pati

  #include <iostream>

int main() {

  for (int i = 0; i < 10; i++) {
    
    std::cout << "I will not throw paper airplanes in class.\n";
    
  }
  
}

// trik s chisla
//OPREDELQNE NA KOLKO CHISLA I POLUCHAVANE NA SBOR OT VAVEDENIQ BROI CHILA
int n;
 cin >> n;
 int sum = 0;
 for (int x = 0; x < n; x++)
 {
  int num;
  cin >> num;
  sum = sum + num;
 }
 cout << sum;

