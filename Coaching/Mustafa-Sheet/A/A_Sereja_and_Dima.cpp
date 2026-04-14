#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }


    int serajaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    bool turn = true;

    while(left <= right){

        int chosen;

        if(a[left] > a[right]){
            chosen = a[left];
            left++;
        }
        else{
            chosen = a[right];
            right--;
        }

        if (turn){
            serajaScore += chosen;
        }
        else{
            dimaScore += chosen;
        }

        turn = !turn;

    }


    cout << serajaScore  << " " << dimaScore << endl;


    
}

int main(){



    solve();        


    return 0;
}
