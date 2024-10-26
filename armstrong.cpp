#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, originalNum = num;
    int digits = log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    
    return 0;
}
