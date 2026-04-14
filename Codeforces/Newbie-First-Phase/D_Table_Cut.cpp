#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
#define f(i, n) for (ll i = 0; i < n; ++i)

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

void solve() {
    int n,m;
    cin >> n >> m;


    vector<vector<int>> grid(n, vector<int>(m));

    f(i,n){
        f(j,m){
            cin >> grid[i][j];
        }
    }

    int totalOnes = 0;


    f(i,n){
        f(j,m){
            if(grid[i][j] == 1){
                totalOnes++;
            }
        }
    }


    int a = (totalOnes + 1) / 2;
    int b = totalOnes - a;

    cout << 1LL * a * b << endl;

    vector<int> take(m,n);

    int idx = 0;
    int remaining = totalOnes - a; 
    while(remaining > 0){

        if(grid[take[idx]-1][idx] == 1){
            remaining--;
        } 
        take[idx]--;
      
        if(take[idx] == 0) idx++;
    }



	int col=0,row=0;
	while(col<m){
		while(row<take[col]){
			cout<<"D";
			row++;
		}
		cout<<"R";
		col++;
	}
	while(row<n){
		cout<<"D";
		row++;
	}
	cout<<endl;
   

   
 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}