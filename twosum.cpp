//Author: Dinesh Reddy Kommera
//Date: 4th September, 2021
//Purpose: C++ program to return indices of the two numbers such that they add up to target


#include <iostream>
using namespace std;
 
int main(void) {

    int array[10],target,arraySize;
    int size = sizeof(array) / sizeof(array[0]);

    //Size of array
    cout<<"Enter size of array: ";
    cin>>arraySize;

    // Values in array
    cout<<"Enter values in array: ";
    for(int i=0; i<arraySize;i++){
            cin>>array[i];
    }

    //Target value
    cout<<"Enter the target: ";
    cin>>target;
  
 //Finding the indices which add up that add up to target
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (array[i] + array[j] == target) {
                cout << "Pair with a given sum " << target << " is (" << i << ", " << j << ")"
                  << endl;
 
                return 1;
            }
        }
    }
 
    return 0;
}