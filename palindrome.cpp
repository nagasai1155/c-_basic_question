#include<iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome.";
    else
        cout << num << " is not a palindrome.";
    
    return 0;
}
