#include<iostream>
#include<cstdlib>
# define MAX 100
using namespace std;


void displayArray(int array[], int arraySize){
    for (int i = 0; i < arraySize ; i++){
           cout<<array[i]<< " ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int n;
    int arr [MAX];
    cout<<"Enter a number N: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
        cout<<arr[i]<<endl;
    }

    displayArray(arr,n);

    return 0;
}
