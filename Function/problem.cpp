// Print all Primes in a Range from 2 to n.

#include <iostream>
using namespace std;

int isPrime(int n){
    if(n==1 || n==0){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    int n;
    cout << "Enter the Range Number :";
    cin >> n;
    for (int i=0;i<=n;i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}


// Write a function to check if a number is a palindrome in C++.

#include <iostream>
using namespace std;

bool checkPalindrom(int n);

int main() {
    int n;
    cout << "Enter the Number :";
    cin >> n;
    if(checkPalindrom(n)){
        cout<< n << " is a Palindrom Number";
    }
    else{
        cout << n << " is not a Palindrom Number";
    }
    return 0;
}

bool checkPalindrom(int n){
    int result=0;
    int copyNumber=n;
    while(n!=0){
        int digit=n%10;
        n/=10;
        result = (result * 10) + digit;
    }

    if(copyNumber==result){
        return true;
    }
    else{
        return false;
    }
}