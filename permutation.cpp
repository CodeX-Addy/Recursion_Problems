#include <iostream>
using namespace std;

void permutation(string& st, int ind){
    if(ind>=st.length()){
        cout << st << " ";
        return;
    }
    for(int j=ind; j<st.length(); ++j){
        swap(st[ind], st[j]);
        permutation(st, ind+1);
        //Backtracking
        swap(st[ind], st[j]);
    }
}
int main() {
    string st = "xy";
    permutation(st, 0);

    return 0;
}
