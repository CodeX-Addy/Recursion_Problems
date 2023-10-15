// Factorial of a given number
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0)// Base condition is mandatory to mention
     return 1;
    return n*factorial(n-1); // Recurrence relation is mandatory to mention
}

int main() {
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;

    return 0;
}

// Power of two
#include <iostream>
using namespace std;

int power(int n){
    if(n==0)
     return 1;
    return 2*power(n-1);
}

int main() {
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;

    return 0;
}

// Print counting using head recursion
#include <iostream>
using namespace std;
void printCount(int n){
    if(n==0)
     return ;
     
    printCount(n-1);// The case of head recursion
    cout << n << " ";
}


int main() {
    int n;
    cin >> n;
    printCount(n);
    return 0;
}

// Print counting using tail recursion
#include <iostream>
using namespace std;
void printCount(int n){
    if(n==0)
     return ;
    cout << n << " ";
    printCount(n-1);// The case of tail recursion
}


int main() {
    int n;
    cin >> n;
    printCount(n);
    return 0;
}

//Printing array with double elements
#include<iostream>
using namespace std;
void printDouble(int *arr, int n, int ind){
    if(ind >= n) return;
    
    cout << 2*arr[ind] << " ";
    printDouble(arr, n, ind+1);
}
int main(){
    int arr[] = {10,20,30,40,50};
    printDouble(arr, 5, 0);
}
