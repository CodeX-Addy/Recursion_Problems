// LINEAR SEARCH
#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int k){
    if(size==0)
     return false;
     
    if(arr[0]==k)
     return true;
    else{
        bool remainingPart = linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = 5;
    bool ans = linearSearch(arr, size, 6);
    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    }

    return 0;
}

// BINARY SEARCH
#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    // element is not present
    if(s>e)
     return false;
    int mid = s + (e-s)/2;
    if(arr[mid] == k)// if element is present at mid
     return true;
     
    if(arr[mid] < k)
     return binarySearch(arr, mid+1, e, k);
     
    return binarySearch(arr, s, mid-1, k);
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    bool ans = binarySearch(arr,0, 5, 2);
    if(ans){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }

    return 0;
}
