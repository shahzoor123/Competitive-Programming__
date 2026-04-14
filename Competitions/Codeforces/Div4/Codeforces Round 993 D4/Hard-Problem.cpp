#include <bits/stdc++.h>
using namespace std;


void solveWithFirstApproach() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    // First, seat as many monkeys as possible in Row 1
    int seated_row1 = min(a, m);

    // Then, seat as many monkeys as possible in Row 2
    int seated_row2 = min(b, m);

    // Remaining seats in row 1 and row 2
    int remaining_seats_row1 = m - seated_row1;
    int remaining_seats_row2 = m - seated_row2;

    // Now, seat the monkeys with no preference in the remaining seats
    int seated_from_c = 0;
    if (remaining_seats_row1 > 0) {
        seated_from_c += min(c, remaining_seats_row1);
        c -= seated_from_c;
    }
    if (remaining_seats_row2 > 0 && c > 0) {
        seated_from_c += min(c, remaining_seats_row2);
    }

    // Total seated monkeys
    int total_seated = seated_row1 + seated_row2 + seated_from_c;
    cout << total_seated << endl;
}




void solveWithSecondApproach() {
    long long m, a, b, c;
    cin >> m >> a >> b >> c;

    long long row1_seats = m;  // Number of seats in row 1
    long long row2_seats = m;  // Number of seats in row 2
    

    long long seated_row1 = 0;

    while (a > 0 && row1_seats > 0){

        seated_row1++;
        a--;
        row1_seats--;
    }

    long long seated_row2 = 0;
    while (b > 0 && row2_seats > 0){

        seated_row2++;
        b--;
        row2_seats--;
    }


    long long seated_from_c = 0;
    while (c > 0 && (row1_seats > 0 || row2_seats > 0)){
        if(row1_seats > 0){
            seated_from_c++;
            row1_seats--;
        }
        else if(row2_seats > 0) {
            seated_from_c++;
            row2_seats--;
        }

        c--;
    }



    long long total_seated = seated_row1 + seated_row2 + seated_from_c;
    cout << total_seated << endl;


}


int main() {
    int t;
    cin >> t;

    while (t--) {
        solveWithFirstApproach();
    }

    return 0;  // Return an integer value to indicate successful execution
}

