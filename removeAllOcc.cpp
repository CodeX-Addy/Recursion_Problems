#include<iostream>
#include<string>
using namespace std;

//Recursive solution
void removeOccRec(string&str, string&part){
    //one case solve
    int found = str.find(part);
    if(found != string::npos){
        string left = str.substr(0, found);
        string right = str.substr(found+part.size(), str.size());
        str = left + right;
        removeOccRec(str, part);
    }
    else
        return;
}

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
    removeOccRec(str, part);
    cout << str;
}