#include <iostream> 
using namespace std; 
  

int main() 
{ 
    
    int arr[] = {1, 2, 3, 4, 5};

    int array_size = sizeof(arr) / sizeof(arr[0]);

    int last_element = arr[array_size - 1];



    if (array_size == 0) {
        return 0;
    }



    for (int i=array_size - 1; i>0; i--) {  // Adjusted to stop at 3
        arr[i] = arr[i - 1];
    }


    arr[0] = last_element;


    for (int i=0; i<array_size; i++) {  // Adjusted to stop at 

        cout << arr[i];
    }
    
    cout << endl;

	
} 