#include<iostream>
using namespace std;

void findSubseq(string str, string out, int ind){
    if(ind>=str.length()){
        cout << "Subsequences are : " << out << endl;
        return ;
    }
    
    char ch = str[ind];
    
    // //exclude first
    // findSubseq(str, out, ind+1);
    
    // //then include
    // out.push_back(ch);
    // findSubseq(str, out, ind+1);

    //include first
    out.push_back(ch);
    findSubseq(str, out, ind+1);
    //then exclude
    out.pop_back(ch);
    findSubseq(str, out, ind+1);

    
}

int main() {
    string st = "xy";
    string out = " ";
    findSubseq(st, out, 0);

    return 0;
}
