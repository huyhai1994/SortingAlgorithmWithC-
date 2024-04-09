#include <iostream>

using namespace std;
/*Start from bottom -> the top
which is heavier in value will 
get down to the bottom. And lighter 
go to the top
*/

void swap(int inputArray[], int location1, int location2)
{
    int temporaryNumber = inputArray[location1];
    inputArray[location1] = inputArray[location2];
    inputArray[location2] = temporaryNumber;
}
void bubble(int inputArray[], int inputArraySize)
{
    int theLastElement = inputArraySize - 1;
    int i = theLastElement;
    while (i > 0)
    {
        if (inputArray[i] < inputArray[i - 1])
            swap(inputArray, i, i - 1);
        i--;
    }
}
void bubbleSort(int inputArray[], int inputArraySize)
{
    int i = 0;
    int theLastElement = inputArraySize - 1;
    while (i < theLastElement)
    {
        bubble(inputArray, inputArraySize);
        i++;
    }
}
void displayArray(int inputArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << inputArray[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int array[] = {102, 293, 1939, 1832, 11, 38, 344, 555};
    int arraySize = sizeof(array) / sizeof(int);
    displayArray(array, arraySize);
    bubbleSort(array, arraySize);
    displayArray(array, arraySize);
    return 0;
}
