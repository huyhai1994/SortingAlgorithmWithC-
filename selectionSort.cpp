#include<iostream>
#include<cstdlib>
using namespace std;

/*The most common and most famous algorithm in the World
 Reference: Understanding Sorting Algorithms
https://www.youtube.com/watch?v=l7-f9gS8VOs&t=2130s*/

void swap(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int locationOfSmallest(int array[],int startingPoint,int endingPoint){
    int i = startingPoint;
    int smallestNumberLocation = i;
    while(i<= endingPoint){
        if(array[i] < array[smallestNumberLocation ]){
            smallestNumberLocation = i;
        }
        i++;
    }
    return smallestNumberLocation;
}
void selectionSort(int array[], int sizeOfArray){
    int i = 0;
    while (i<sizeOfArray-1){
        int j = locationOfSmallest(array,i,sizeOfArray-1);
        swap(array,i,j);
        i++;
    }
}
void displayArray(int array[], int arraySize){
    for (int i = 0; i < arraySize ; i++){
           cout<<array[i]<< " ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){
    int array []= {111, 2, 3, 7, 10};
    int arraySize = sizeof(array) / sizeof(int);
    cout<<"Array before sorting: "<<endl;
    displayArray(array, arraySize);
    cout<<"Array after sorting: "<<endl;
    selectionSort(array, arraySize);
    displayArray(array,arraySize);
    return 0;
}
