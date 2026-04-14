#include<bits/stdc++.h>
using namespace std;

int main () {

	// 1 --- Calculation order in Datatypes

	// double a = 3/2;
    // cout << a;



/////////////////////////////////////////////////


    // 2 --- operator precedence


	// cout << 7 / 2 * 3 <<  endl; 
    // 9

    // cout << 3 * 7 / 2  <<  endl;
    // 10



/////////////////////////////////////////////////
	

    // 3 --- Overflow

    //range (-10^9 < int < 10^9)

    //range (-10^12 < long int < 10^12)

    //range (-10^18 < long long int < 10^18)


    // int a = 1000000000;

    // int b = 1000000000;

    // long long int c = a* 1LL *b;

    // cout << c << endl;

    // long long int mx = INT_MAX + 1;


    // cout << mx;
    // -2147483648




/////////////////////////////////////////////////
	

    // 4 --- Precision error in double and float

    // double a = 1000000000;

    // double b = 1000000000;

    // double c = a*b;

    // c = 1e24;
    // /* Double will stored the large values but with the 
    //    tradeoff with the precision
    // */
    
    // cout << fixed << c << endl;



}