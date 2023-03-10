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
