#include<iostream>
#include<string>
using namespace std;

//Iterative solution

string removeOccIterative(string&str, string&part){
    int pos = str.find(part);
    while(pos != string::npos){
        str.erase(pos, part.length());
        pos = str.find(part);
    }
    return str;
}

int main(){
    string str = "bababcbaadbabcdaa";
    string part = "abc";
    cout << removeOccIterative(str, part);
}