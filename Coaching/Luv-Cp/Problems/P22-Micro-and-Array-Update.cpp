#include <iostream>
#include <algorithm> // For std::min_element
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int no_of_elements, target;
        cin >> no_of_elements >> target;

        int arr[no_of_elements];
        for (int i = 0; i < no_of_elements; i++) {
            cin >> arr[i];
        }

      
        int min_value = *std::min_element(arr, arr + no_of_elements);


        int total_time = target - min_value;

        if (total_time < 0) {
            total_time = 0;
            cout << total_time<< endl;
        }
        else{
            cout << total_time<< endl;
        }


    
    }

    return 0;
}
