#include<iostream>
using namespace std;
#include<climits>
void minArray(int arr[], int n, int& miny, int ind){
    if(ind >= n) return;
    
    miny = min(miny, arr[ind]);
    
    minArray(arr, n, miny, ind+1);
}
int main(){
    int arr[] = {2,1,5,67,3};
    int miny = INT_MAX;
    
    minArray(arr, 5, miny, 0);
    cout << miny << endl;
}
