#include <bits/stdc++.h>
using namespace std;

void findPerimeterInterger (int n){

    if (n == 1) {
        cout << 4 << endl; 
        return;
    }


    vector<int> perimeter_vector;

    for (int i=1;i<=n-1;i++){
        if (n % i == 0){

            int length = i;
            int width = n / i;
            int perimeter = 2 * (length + width);
            perimeter_vector.push_back(perimeter);
        }
    }

    int minimum_perimeter = *min_element(perimeter_vector.begin(),perimeter_vector.end());

    cout << minimum_perimeter << endl;

}


int main() {

    long long n;
    cin >> n;  

    findPerimeterInterger(n);

    return 0;
}
