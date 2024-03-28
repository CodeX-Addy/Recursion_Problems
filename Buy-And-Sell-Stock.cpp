#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int buyAndSell(vector<int>&v){
    int buy = v[0];
    int profit = 0;

    for(int i=1; i<v.size(); ++i){
        if(v[i] < buy)
            buy = v[i];
        if(v[i] - buy > profit)
            profit = v[i] - buy;
    }
    return profit;
}
int main(){
    vector<int>v = {7,6,4,3,1};
    cout << buyAndSell(v);
}