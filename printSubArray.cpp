#include<iostream>
#include<vector>
using namespace std;

void printSubArray_util(vector<int>&v, int s, int e){
    //base case
    if(e==v.size())
        return;

    //one case tackled
    for(int i = s; i<=e; ++i){
        cout << v[i] << " ";
    }
    cout << endl;

    //recursive call
    printSubArray_util(v, s, e+1);
}

void printSubArray(vector<int>&v){
    for(int i=0; i<v.size(); ++i){
        int j = i;
        printSubArray_util(v, i, j);
    }
}

int main(){
    vector<int>v = {1,2,3,4,5};
    printSubArray(v);
}