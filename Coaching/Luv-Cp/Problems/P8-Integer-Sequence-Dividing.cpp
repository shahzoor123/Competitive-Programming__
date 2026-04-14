#include <bits/stdc++.h>
using namespace std;


int main() {
	long long n;
	cin >> n;

	long long  sum =  n * (n + 1) / 2;

	long long  minimum_possible_value = sum % 2;

	cout << minimum_possible_value ;

}
