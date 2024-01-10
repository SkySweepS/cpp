#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>

struct Movie {
  string name;
  double rating;
};

using namespace std;

int main() {
	
	int numberOfMovies;
  cin >> numberOfMovies;

  double ratingTotal = 0;
  vector<Movie> ratingVector;

  cin.ignore();

  for(int i = 0; i < numberOfMovies; i++){
    Movie movie;
    getline(cin, movie.name);
    cin >> movie.rating;
    ratingVector.push_back(movie);
    ratingTotal += movie.rating;




    cin.ignore();
  }

  auto minMovie = max_element(ratingVector.begin(), ratingVector.end(), [](const Movie& a, const Movie& b){
    return a.rating < b.rating;
  });
    auto maxMovie = max_element(ratingVector.begin(), ratingVector.end(), [](const Movie& a, const Movie& b){
      return a.rating < b.rating;
    });

    cout << maxMovie.name << " is with highest rating: " << maxMovie->rating << endl;
    cout << minMovie.name << " is with lowest rating: " << minMovie->rating << endl;


    return 0;
  }
