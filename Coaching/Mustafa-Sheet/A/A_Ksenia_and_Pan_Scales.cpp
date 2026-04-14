#include <bits/stdc++.h>
using namespace std;


void solve(){
    string scales,weight;
    cin >> scales >> weight;

    int wRight = 0;
    int wLeft = 0;


    int i = 0;

    bool foundDelimit = false;

    while(i < scales.size()){
        if(scales[i] == '|'){
            foundDelimit = true;
            break;
        }
        wLeft++;
        i++;
    }

    if(foundDelimit){
        int j = scales.size() - 1;
        while(j >= 0 && scales[j] != '|'){
            wRight++;
            j--;
        }
  
    }


    int totalWeight = wLeft + wRight + weight.size();

    if(totalWeight % 2 != 0 || wLeft > (wRight + weight.size()) || wRight > (wLeft + weight.size())){
        cout << "Impossible" << endl;
    }  
    else{

        int diff = abs(wLeft - wRight);
        int remaining = weight.size() - diff;

        if (remaining < 0 || remaining % 2 != 0) {
            cout << "Impossible" << endl;
            return;
        }

        string toLeft, toRight;


        if(wLeft < wRight){
            toLeft = weight.substr(0, diff);
        }
        else{
            toRight = weight.substr(0, diff);
        }

        int half = remaining / 2;
        toLeft += weight.substr(diff, half);
        toRight += weight.substr(diff + half);
        
      
        size_t pos = scales.find('|');
        if (pos != std::string::npos) {
            scales.insert(pos, toLeft);
            scales += toRight;
        }
      
          
        cout << scales << endl;

    }


}



int main(){


    solve();        
  return 0;
}