#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canCraft() {
    int n;
    cin >> n;
    
    vector<ll> have(n), need(n);
    for(int i = 0; i < n; i++) cin >> have[i];
    for(int i = 0; i < n; i++) cin >> need[i];
    
    // Calculate excess and deficit for each material
    vector<ll> diff(n);
    ll totalExcess = 0, totalDeficit = 0;
    
    for(int i = 0; i < n; i++) {
        diff[i] = have[i] - need[i];
        if(diff[i] > 0) totalExcess += diff[i];
        else totalDeficit -= diff[i];
    }
    
    // For each operation to create 1 unit of material i,
    // we need to spend n-1 units of other materials
    for(int i = 0; i < n; i++) {
        if(diff[i] < 0) {  // If we need more of material i
            ll needed = -diff[i];  // How much more we need
            ll operations = needed;  // Each operation gives 1 unit
            
            // Each operation requires n-1 other materials
            if(operations * (n-1) > totalExcess) {
                return false;  // Not enough excess materials
            }
        }
    }
    
    // Special case: if n=2, need to check if conversion is possible
    if(n == 2) {
        return (diff[0] >= 0 && diff[1] >= 0) || 
               (abs(diff[0]) == abs(diff[1]));
    }
    
    // For n>2, if we have enough excess materials,
    // we can always redistribute them as needed
    return totalExcess >= totalDeficit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        cout << (canCraft() ? "YES" : "NO") << "\n";
    }
    
    return 0;
}