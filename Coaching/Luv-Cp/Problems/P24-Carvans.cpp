#include <iostream>
#include <vector>
#include <string>
#include <cstdint> // Include for fixed-width integer types
using namespace std;

int main() {
    int32_t T; 
    cin >> T;

    while (T--) {
        long int n; 
        cin >> n;

        int32_t arr[n]; 
        int32_t c; 
        long int count = 0;

        for (int32_t i = 0; i < n; i++) {
            cin >> arr[i];
        }

       
        c = arr[0]; 

        for (int i = 0; i < n; i++) {
            if (arr[i] <= c) {
                c = arr[i];
                count++; 
            }
        }

        cout << count; 
        cout << endl;
    }

    return 0;
}
