#include <bits/stdc++.h>
using namespace std;

void findBestMovie() {
    int numberOfMovies;
    cin >> numberOfMovies;

    int minimumCost = INT_MAX;
    for (int i = 0; i < numberOfMovies; ++i) {
        int imdbRating, rentalCost;
        cin >> imdbRating >> rentalCost;

        if (imdbRating >= 7) {
            minimumCost = min(minimumCost, rentalCost);
        }
    }

    if (minimumCost == INT_MAX)
        cout << -1 << endl;
    else
        cout << minimumCost << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        findBestMovie();
    }
    return 0;
}
