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
