#include<bits/stdc++.h>
using namespace std;

void printHello() {
    cout << "Hello world";
}


int sum (int a, int b){
    int result = a + b;
    return result;
}


int digit_sum (int n) {

    int digit_sum = 0;
    while(n){
        digit_sum = digit_sum + n % 10;
        n = n / 10;
    }

    return digit_sum;


}

int main() {
    int a , b ;
    cin >> a >> b;
    
    cout << digit_sum(a) + digit_sum(b);

    // printHello();
    // cout << sum(2,4);

    return 0;


}
