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

// Print counting
#include <iostream>
using namespace std;
void printCount(int n){
    if(n==0)
     return ;
     
    cout << n << " ";
    printCount(n-1);
}


int main() {
    int n;
    cin >> n;
    printCount(n);
    

    return 0;
}
