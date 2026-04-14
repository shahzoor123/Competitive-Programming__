#include <bits/stdc++.h>
using namespace std;

int main() {

    // 4 ---- Nesting in Containers

    // map<pair<string, string>, vector<int>> m;
    // int n;
    // cin >> n;

    // for (int i=0;i<n;i++){
    // 	string fn,ln;
    // 	int ct;
    // 	cin >> fn >> ln >> ct;
    // 	for(int j = 0;j<ct;j++){
    // 		int x;
    // 		cin >> x;
    // 		m[{fn,ln}].push_back(x);
    // 	}
    // }


    // for (auto &pr : m){
    // 	auto &full_name = pr.first;
    // 	auto &list = pr.second;
    // 	cout << full_name.first << " " << full_name.second << endl;
    // 	cout << list.size() << endl;
    // 	for(auto &element : list){
    // 		cout << element << " ";
    // 	}

    // 	cout << endl;
    // }


    // First Question for Nesting (The Monk and Class Marks)


    // map<int, multiset<string>> m;
    // int n;
    // cin >> n;

    // for (int i=0;i<n;i++){
    // 	string name;
    // 	int marks;
    // 	cin >> name >> marks;
    // 	m[marks].insert(name);
    // }

    // auto cur_it = --m.end();

    // while(true){
    // 	auto &students = (*cur_it).second;
    // 	int marks = (*cur_it).first;
    // 	for (auto student : students){
    // 		cout << student << " " << marks << endl;
    // 	}
    // 	if (cur_it == m.begin()){
    // 		break;
    // 	}

	// 	cur_it--;
    // }




    // Compact why of reversing without while loop is to add negative values then unpack when using


    map<int, multiset<string>> m;
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
    	string name;
    	int marks;
    	cin >> name >> marks;
    	m[-1*marks].insert(name);
    }

   	for (auto & marks_student_pr : m){
   		auto &students = marks_student_pr.second;
    	int marks = marks_student_pr.first;
    	for (auto student : students){
    		cout << student << " " << -1*marks << endl;
    	}
   	}
    	
    
 

   
}
