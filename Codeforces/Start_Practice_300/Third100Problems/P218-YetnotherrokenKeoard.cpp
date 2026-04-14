#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        string result;
        stack<int> upperIndices;
        stack<int> lowerIndices;

        for (int i = 0; i < str.size(); i++){
            char ch = str[i];
            if (ch == 'B'){
                    if(!upperIndices.empty()){
                       int index = upperIndices.top();
                       result[index] = '\0';
                       upperIndices.pop();
                        
                    }
            }
            else if (ch == 'b'){
                     if(!lowerIndices.empty()){
                       int index = lowerIndices.top();
                       result[index] = '\0';
                       lowerIndices.pop();
                        
                    }  
            }
            else{
                result.push_back(ch);
                if (isupper(ch)) {
                    upperIndices.push(result.size() - 1);
                } else if (islower(ch)) {
                    lowerIndices.push(result.size() - 1);
                }
            }
        }

        string finalResult;
        for (char ch : result){
            if(ch != '\0'){
                finalResult.push_back(ch);
            }
        }

        cout << finalResult << endl;
    }    

      
    return 0;
}






// O(N^2) solution gave tle

#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        string result;

        for (char ch : str){
            if (ch == 'B'){
                for (int j=result.size() - 1; j>=0; j--){
                    if(isupper(result[j])){
                        result.erase(j, 1);
                        break;
                    }
                }
                
            }
            else if (ch == 'b'){
                for (int j=result.size() - 1; j>=0; j--){
                    if(islower(result[j])){
                        result.erase(j, 1);
                        break;
                    }
                }
                
            }
            else{
                result.push_back(ch);
            }
        }

        cout << result << endl;
    }    

      
    return 0;
}
