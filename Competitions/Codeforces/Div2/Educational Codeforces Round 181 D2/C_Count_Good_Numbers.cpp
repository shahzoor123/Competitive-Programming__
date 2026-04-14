#include <bits/stdc++.h>
using namespace std;


long long solve(long long n){

    long long ans = 0;    
    for (long long a2=0;a2<2;a2++){
        for (long long a3=0;a3<2;a3++){
            for (long long a5=0;a5<2;a5++){
                for (long long a7=0;a7<2;a7++){
                    long long count = 0;
                    long long div = 1;
                    if(a2){div *= 2, count++;}
                    if(a3){div *= 3, count++;}
                    if(a5){div *= 5, count++;}
                    if(a7){div *= 7, count++;}

                    if(count % 2 == 0) ans += n / div;
                    else ans -= n / div; 
                }
            }
        }
    }

    return ans;
    
}



int main(){

  int t;
  cin >> t;

  while(t--){
    long long l,r;
    cin >> l >> r;
    cout << solve(r) - solve(l-1) << endl;;        
  } 

  return 0;
}




















// #include <bits/stdc++.h>
// using namespace std;


// void solve(){
//     long long l,r;
//     cin >> l >> r;

//     long long totalNumbers = (r-l+1);

//     long long fortwo = r/2 - (l-1)/2;
//     long long forthree = r/3 - (l-1)/3;
//     long long forfive = r/5 - (l-1)/5;
//     long long forseven = r/7 - (l-1)/7;

//     // Finding OverLaps for 2 pairs

//     long long TwoThree = r/6 - (l-1)/6;    // LCM(2,3)
//     long long TwoFive = r/10 - (l-1)/10;  // LCM(2,5)
//     long long TwoSeven = r/14 - (l-1)/14;  // LCM(2,7)

//     long long ThreeFive = r/15 - (l-1)/15;  // LCM(3,5)
//     long long ThreeSeven = r/21 - (l-1)/21;  // LCM(3,7)

//     long long FiveSeven = r/35 - (l-1)/35; 

//     // Finding OverLaps for 3 pairs

//     long long TwoThreeFive = r/30 - (l-1)/30;   // LCM(2,3,5)
//     long long TwoThreeSeven = r/42 - (l-1)/42;   // LCM(2,3,7)
//     long long TwoFiveSeven = r/70 - (l-1)/70;   // LCM(2,5,7)
//     long long ThreeFiveSeven = r/105 - (l-1)/105; // LCM(3,5,7)

//     // Finding OverLaps for 4 pairs

//     long long TwoThreeFiveSeven = r/210 - (l-1)/210; // LCM(2,3,5,7)

//     long long bad = fortwo + forthree + forfive + forseven - TwoThree - TwoFive- TwoSeven - ThreeFive - ThreeSeven 
//                     - FiveSeven + TwoThreeFive + TwoThreeSeven + TwoFiveSeven + ThreeFiveSeven - TwoThreeFiveSeven;

//     long long good = totalNumbers - bad;

//     cout << good << endl;



// }



// int main(){

//   int t;
//   cin >> t;

//   while(t--){
//     solve();        
//   } 

//   return 0;
// }