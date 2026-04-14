#include <iostream> 
using namespace std; 
  

int main() 
{ 
    
    int arr[] = {8, 9, 10, 12, 12, 12};

    int array_size = sizeof(arr) / sizeof(arr[0]);

    int target = 12;

    int ocurrance = 0;

    for (int i=0; i<array_size; i++) {
    	if (arr[i] == target) {
    		ocurrance++;
    	}
    	
    }

	cout << ocurrance;
} 