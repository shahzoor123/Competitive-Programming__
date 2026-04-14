#include<bits/stdc++.h>
using namespace std;


// References


// void increment(int &n){
//     n++;
// }


// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


// void func(int arr[]){
//     arr[0] = 5;
// }



void func(int arr[][2]){
    arr[0][1] = 100;
}


int main() {
    // incrementing by reference

    // int a = 3;
    // cout << a << endl;
    // increment(a);
    // cout << a << endl;


    // Swaping by reference

    // int a = 3;
    // int b = 5;
    // cout << a << " " << b << endl;
    // swap(a,b);
    // cout << a << " " << b << endl;


    // 1D Arrays are bu defualt pass by reference

    // int arr[5];

    // arr[0] = 7;

    // cout << arr[0] << endl;

    // func(arr);

    // cout << arr[0] << endl;



    // 2d Arrays are bu defualt pass by reference

    int arr[5][2];

    arr[0][1] = 7;

    cout << arr[0][1] << endl;

    func(arr);

    cout << arr[0][1] << endl;

    // And we can also declare 2d array globally in compatitive programming
}
