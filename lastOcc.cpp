#include<iostream>
using namespace std;

//Left to right
// int lastOcc(string s, char ch, int i, int& ans){
    
    
//     //base case
//     if(i>=s.length()) return -1;
    
    
//     //processing waala part
//     if(s[i] == ch){
//         ans = i;
//     }
    
//     //recursive call
//     lastOcc(s, ch, i+1, ans);
// }


// int main(){
//     string st;    cin >> st;
    
//     cout << "Enter the character to find: " << endl;
//     char ch;cin >> ch;
    
//     int ans = -1;
//     lastOcc(st, ch, 0, ans);
//     cout << ans << endl;
// }

//right to left


void lastOcc(string s, char ch, int i, int& ans){
    
    
    //base case
    if(i<=0) return;
    
    
    //processing waala part
    if(s[i] == ch){
        ans = i;
        return;
    }
    
    //recursive call
    lastOcc(s, ch, i-1, ans);
}


int main(){
    string st;    cin >> st;
    
    cout << "Enter the character to find: " << endl;
    char ch;cin >> ch;
    
    int ans = -1;
    lastOcc(st, ch, st.length()-1, ans);
    cout << ans << endl;
}
