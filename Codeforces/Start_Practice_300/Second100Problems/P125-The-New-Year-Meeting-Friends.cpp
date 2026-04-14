#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Sort the coordinates to find the median
    int points[] = {x1, x2, x3};
    sort(points, points + 3);

    // The minimum distance is when they meet at the median point
    int minimum_distance = (points[1] - points[0]) + (points[2] - points[1]);

    cout << minimum_distance << endl;

    return 0;
}
