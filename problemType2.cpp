// Checking if array is sorted or not
#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1)
     return true;
     
    if(arr[0] > arr[1])
     return false;
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}
int main() {
    int arr[] = {1,2,3,6,5};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}

// Returning the sum of all elements of the given array
#include <iostream>
using namespace std;

int getSum(int *arr, int size){
    if(size==0)
     return 0;
     
    if(size==1)
     return arr[0];
     
    else{
        int remainingPart = getSum(arr+1, size-1);
        int sum = arr[0] + remainingPart;
        return sum;
    }
}

int main() {
    int arr[] = {1,2,5,8,10};
    int size = 5;
    
    int ans = getSum(arr,size);
    cout << ans << endl;

    return 0;
}
