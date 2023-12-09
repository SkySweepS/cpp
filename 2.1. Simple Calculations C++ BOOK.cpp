
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

//ZADACHA 6

int main() {

  cout << "Enter circle radius. r = ";
  double r;
  cin >> r;
  double pi = 3.14159265359;
  cout << "Area = " << pi * r * r << endl;
  cout << "Perimeter = " << 2 * pi * r << endl;


  return 0;
}

//ZADACHA 7

int main() {

  double x1;
  cin >> x1;
  double y1;
  cin >> y1;
  double x2;
  cin >> x2;
  double y2;
  cin >> y2;
// namirane v koordinatnata sistema s funkciq FABS:
  double width = fabs(x2 - x1);
  double height = fabs(y2 - y1);
  cout << "Area = " << width * height << endl;
  cout << "Perimeter = " << 2 * (width + height) << endl;


  return 0;
}
