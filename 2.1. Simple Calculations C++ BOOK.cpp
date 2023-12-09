
//ZADACHA 3
int main() {

  string name;
  getline(cin, name);

  cout << "Hello, " << name << "!" << endl;
 
  

  return 0;
}

//ZADACHA 4
int main() {

  string firstName, lastName, town;
  int age;
  cin >> firstName;
  cin >> lastName;
  cin >> age;
  cin >> town;

  cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;
 
  

  return 0;
}

//ZADACHA 5
int main() {

 double a;
 cin >> a;
 double b;
 cin >> b;
 double h;
 cin >> h;


 double area = (a + b) * h / 2;

 cout << "Trapezoid area = " << area << endl; 

  return 0;
} 
