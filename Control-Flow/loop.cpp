// Take a number N as input and print numbers from N to 1.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number\n";
//     cin >> n;
//     for(int i=n;i>0;i--)
//     cout << i << "\n";
//     return 0;
// }


// Take a number N as input and calculate the sum of first N natural numbers.
// #include <iostream>
// using namespace std;

// int main() {
//         int n,sum=0;
//     cout << "Enter Number\n";
//     cin >> n;
//     for(int i=0;i<=n;i++)
//        sum+=i;
//        cout << "Sum is "<< sum;
//     return 0;
// }


// Take a number as input and calculate its factorial.
// #include <iostream>
// using namespace std;

// int main() {
//     int number,fact=1;
//     cout << "Enter Number\n";
//     cin >> number;
//     for(int i=1;i<=number;i++)
//        fact*=i;
//        cout << number << " Factotial is "<< fact;
//     return 0;
// }


// Take a number as input and print all of its factors.
// #include <iostream>
// using namespace std;

// int main() {
//       int number=1;
//      cout << "Enter Number\n";
//      cin >> number;
//      cout << number << " Factors is : ";
//      for(int i=1;i<=number;i++)
//      {
//         if(number%i==0)
//         cout << " " << i;
//      }
//     return 0;
// }


// Take a number as input and determine whether it is prime or not
// #include <iostream>
// using namespace std;

// int main() {
//     int number=1, count=0;
//     cout << "Enter Number: \n";
//     cin >> number;
//     for(int i=1;i<=number;i++){
//         if(number%i==0) count++;
//     };
//     cout << ((count>2)?"Not Prime Number" : "Prime Number");
//     return 0;
// }


// Take a number N as input and print its reverse.
// #include <iostream>
// using namespace std;

// int main() {
//      int number,lastDigit,reverse=0;
//      cout << "Enter Number\n";
//      cin >> number;
//      while(number){
//         lastDigit=number%10;
//         reverse=reverse*10+lastDigit;
//          number=number/10;
//      }
//      cout<<"Reverse Number is " << reverse;
//     return 0;
// }


// Take a number N as input and determine whether it is a palindrome or not.
// #include <iostream>
// using namespace std;

// int main() {
//      int number,lastDigit,reverse=0,copy;
//      cout << "Enter Number\n";
//      cin >> number;
//      copy=number;
//      while(number){
//         lastDigit=number%10;
//         reverse=reverse*10+lastDigit;
//          number=number/10;
//      }
//      if(reverse==copy)
//      cout<< copy << " Number is Palindrome";
//      else cout<< copy << " Number is not Palindrome";
//     return 0;
// }


// Take a number as input and determine whether it is an Armstrong number or not
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int number,count=0,lastDigit=0,copy,result=0;
//     cout<< "Enter numner: \n";
//     cin>>number;
//     copy=number;
    
//     while(number){
//         number=number/10;
//         count++;
//     }

//     number=copy;
//     while (number)
//     {
//         lastDigit=number%10;
//         result+=pow(lastDigit,count);
//         number=number/10;
//     };

//      if(result==copy) cout << copy << " is Armstrong ";
//      else cout << copy << " is not Armstrong ";
//     return 0;
// }


// Take a number as input and print its multiplication table.
// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter Number : \n";
//     cin >> number;
//     cout << "Multiplication table for "<< number;
//     for(int i=0;i<=10;i++){
//         cout << number << " X " <<i << " = "<< number*i  << "\n";
//     }
//     return 0;
// }