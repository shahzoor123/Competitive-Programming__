#include<bits/stdc++.h>
using namespace std;

main() {
	string tableCard;
	cin >> tableCard;

	char tableCardRank = tableCard[0];
	char tableCardSuit = tableCard[1];


	int cards = 5;

	bool isPlayable = false; 

	for (int i=0;i<cards;i++){
		string handCards;
		cin >> handCards;

		if(handCards[0] == tableCardRank || handCards[1] == tableCardSuit){
			isPlayable = true;

		}	
	}


	if (isPlayable){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

}