// Program to reverse a string using recursion
#include <iostream>
using namespace std;

void reverseString(string& str, int i, int j){
    if(i>j)
     return;
    swap(str[i],str[j]);
    i++;
    j--;
    
    reverseString(str, i, j);
}
int main() {
    string name = "aditya";
    reverseString(name, 0, name.length()-1);
    cout << name << endl;
    return 0;
}
// Using single pointer approach
#include <iostream>
using namespace std;
void reverseString(string& str, int i){
    int n = str.length()-1;
    if(i>n-i)
     return;
    swap(str[i],str[n-i]);
    i++;
    reverseString(str, i);
}
int main() {
    string name = "tantheta";
    reverseString(name, 0);
    cout << name << endl;
    return 0;
}

// Check palindrome
#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    // Base case 
    if(i>j)
     return true;
     
    if(str[i] != str[j])
     return false;
     
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}


int main() {
    string str = "aditya";
    bool ifPalindrome = checkPalindrome(str, 0, str.length()-1);
    if(ifPalindrome){
        cout << "The given string is a palindrome" << endl;
    }
    else{
        cout << "The given string is not a palindrome" << endl;
    }

    return 0;
}
