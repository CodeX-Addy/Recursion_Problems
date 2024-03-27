#include<iostream>
#include<string>
using namespace std;

int lastOcc(string &str, char ch, int index){
    //base case
    if(index <= 0)
        return -1;
    int ans = 0;

    if(str[index] == ch){
        ans = index;
        return ans;
    }

    lastOcc(str, ch, index-1);

}

int main(){
    string str = "aabbab";
    char ch = 'b';

    cout << "Occurence of " << ch << " is " << lastOcc(str, ch,str.length()-1) << endl;
}