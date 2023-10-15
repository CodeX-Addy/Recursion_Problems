#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    if(n <= 0) return;
    cout << *arr << " ";
    printArray(arr+1, n-1);
}
void printArrayReverse(int arr[], int n){
    if(n <= 0) return;
     printArray(arr+1, n-1);
    cout << *arr << " ";
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    
    printArray(arr, n);
}
