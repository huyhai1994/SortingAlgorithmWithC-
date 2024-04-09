#include<iostream>
#include<cstdlib>
# define MAX 100
using namespace std;
/* Reference: Understanding Sorting Algorithms
https://www.youtube.com/watch?v=l7-f9gS8VOs&t=2130s
This program used an simple sorting algorithm
 to sort an random order number into adcending order 
*/
void sortAnArray(int array[], int arraySize){
    for (int i = 0; i < arraySize; i++){
        for (int j = i+1; j < arraySize; j++){
            bool isNextNumberBigger = array[j] < array[i];
            if(isNextNumberBigger){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void displayArray(int array[], int arraySize){
    for (int i = 0; i < arraySize ; i++){
           cout<<array[i]<< " ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int numberOfElementInArray;
    int array [MAX];
    cout<<"Enter a number N: "<<endl;
    cin>> numberOfElementInArray;
    int randomNumber;
    for (int i = 0; i <  numberOfElementInArray; i++)
    {
        randomNumber = rand() %  numberOfElementInArray;
        array[i] = randomNumber;
    }
    cout<<"Array before sorting: "<<endl;
    displayArray(array, numberOfElementInArray);
     cout<<"Array after sorting: "<<endl;
     sortAnArray(array, numberOfElementInArray);
     displayArray(array, numberOfElementInArray);
    return 0;
}
