#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if(n ==2 || n==3) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
    
    return 0;
}
