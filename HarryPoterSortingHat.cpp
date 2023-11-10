#include <iostream>
using namespace std;
int main() {
  int gryffindor = 0;
  int hahopuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  cout << "The Sorting Hat Quiz!\n";

  cout << "Q1) When i'am dead, I want people to remember me as: \n\n";
  cout << "1) The Good\n";
  cout << "2) The Great\n";
  cout << "3) The Wise\n";
  cout << "4) the Bold\n";

  cin >> answer1;

  if (answer1 == 1) {
    hahopuff ++;
  }
  else if (answer1 == 2) {
    slytherin ++;
  }
  else if (answer1 == 3) {
    ravenclaw ++;
  }
  else if (answer1 == 4) {
    gryffindor ++;
  }
  else {
    cout << "Invalid Input\n\n";
  }
  cout << "Q2) Down or dusk?\n\n";

  cout << "1) Down\n";
  cout << "2) Dusk\n";

  cin >> answer2;

  if (answer2 == 1) {
    gryffindor ++;
    ravenclaw ++;
  }
  else if (answer2 == 2) {
    hahopuff ++;
    slytherin ++;
  }
  else {
    cout << "Invalid Input!\n\n";
  }
  

  cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  cout << "1) The Violin\n";
  cout << "2) The Trumpet\n";
  cout << "3) The Piano\n";
  cout << "4) The Drum\n";
  cin >> answer3;
  if (answer3 == 1) {
    slytherin ++;
  }
  else if (answer3 == 2) {
    hahopuff ++;
  }
  else if (answer3 == 3) {
    ravenclaw ++;
  }
  else if (answer3 == 4) {
    gryffindor ++;
  }
  else {
    cout << "invalid Input!\n\n";
  }
  
  cout << "Q4) Which road temps you most?\n\n";

  cout << "1) The wide, sunny grassy lane.\n";
  cout << "2) The narrow, dark lantern-lit alley.\n";
  cout << "3) The twisting, leaf-strewn path through woods.\n";
  cout << "4) The cobbled street lined (ancient buildings).\n";

  cin >> answer4;

  if  (answer4 == 1) {
    hahopuff ++;
  }
  else if (answer4 == 2) {
    slytherin ++;
  }
  else if (answer4 == 3) {
    gryffindor ++;
  }
  else if (answer4 == 4) {
    ravenclaw ++;
  }
  else {
    cout << "Invalid input\n\n";
  }

  int max = 0;
  string house;
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hahopuff > max) {
    max = hahopuff;
    house = "Hahopuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }
  cout << house << "!\n";



























































  return 0;
}