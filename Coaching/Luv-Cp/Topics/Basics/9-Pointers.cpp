#include<bits/stdc++.h>
using namespace std;



void increment (int *x) {
    (*x)++;
}



int main() {

    //  Pointers
   
    // int x = 10;

    // int *p_x = &x;
    // cout << "Addr x: " << &x << endl;
    // cout << "val p_x: " << p_x << endl;
    // cout << "val p_x: " << *p_x << endl;
    // *p_x = 9;
    // cout << "x: " << x << endl;
    // cout << "val p_x: " << p_x + 2<< endl;




    //  Double Pointers
   
    // int x = 10;

    // int *p_x = &x;
    // cout << "Addr x: " << &x << endl;
    // cout << "val p_x: " << p_x << endl;
    // cout << "val p_x: " << *p_x << endl;
    // *p_x = 9;
    // cout << "x: " << x << endl;
    // cout << "val p_x: " << p_x + 2<< endl;
    // int **p_p_x = &p_x;
    // cout << "Addr p_x: " << &p_x << endl;
    // cout << "val p_p_x: " << p_p_x << endl;
    // cout << "val *p_p_x: " << *p_p_x << endl;

    // **p_p_x = 8;

    // cout << "x: " << x << endl;



    //  Array & Pointers

    // int a[10];

    // a[0] = 2;
    // a[1] = 4;

    // cout << "a : " << a << endl;
    // cout << "&a[0] : " << &a[0] << endl;
    // cout << "*a : " << *a << endl;

    // cout << "a + 1 : " << a + 1 << endl;
    // cout << "&a[1] : " << &a[1] << endl;
    // cout << "*(a+1) : " << *(a+1) << endl;

    
    // Passing pointers to functions


    int x = 10;
    cout << x;
    increment(&x);
    cout << x;


}
