#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // Calculate the maximum number of dominoes that can fit on the board
    int max_dominoes = (M * N) / 2;

    cout << max_dominoes << endl;

    return 0;
}
