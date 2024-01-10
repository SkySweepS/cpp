#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>



using namespace std;

int main() {
	
	int numberOfMovies;
  cin >> numberOfMovies;

  double ratingTotal = 0;
  vector<double> ratingVector;

  cin.ignore();

  for(int i = 0; i < numberOfMovies; i++){
    string movieName;
    getline(cin, movieName);
    double movieRating;
    cin >> movieRating;
    ratingVector.push_back(movieRating);
    ratingTotal += movieRating;




    cin.ignore();
  }

  double minRating = min_element(ratingVector.begin(), ratingVector.end());
  double maxRating = max_element(ratingVector.begin(), ratingVector.end());

cout << minRating << " min " << endl;
cout << maxRating << " max" << endl;
  return 0;
}
