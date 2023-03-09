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
