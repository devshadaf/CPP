// Take character as input and check whether it is a vowel or consonant. 
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter a character \n";
//     char ch;
//     cin >> ch;
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') cout << "Vowel";
//     else cout << "Consonant";
//     return 0;
// }


// Take a character as input and determine whether it is uppercase or lowercase.
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character \n";
//     cin >> ch;
//     if(ch==toupper(ch)) 
//        cout << "Character is Uppercase";
//     else 
//        cout << "Character is Lowercase";
//     return 0;
// }


// Take a year as input and determine whether it is a leap year
// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter a year \n";
//     cin >> year;
   
//     if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//         cout << year << " is a Leap year";
//     else
//         cout << year << " is not a Leap year";
//     return 0;
// }


// Take units as input. Calculate the electricity bill based on the number of units consumed.
// #include <iostream>
// using namespace std;

// int main() {
//     float unit, bill;
//     cout << "Enter your Unit \n";
//     cin >> unit;
//     if(unit<=100)
//         unit=unit*4.2;
//     else if(unit>100 && unit <=200)
//     unit = 100*4.2 + (unit-100)*6;
//     else if(unit>200 && unit <=400)
//     unit = 100*4.2 + 100*6 + (unit-200)*8;
//     else if(unit>400)
//     unit = 100*4.2 + 100*6 + 200*8 + (unit-400)*13;
//     cout << "Your Electricity bill is " << unit << " Tk.";
//     return 0;
// }


// Takes a month number (1–12) as input and prints the corresponding season.
/*
Month	Season
12, 1, 2	Winter
3, 4	Spring
5, 6	Summer
7, 8, 9	Monsoon
10, 11	Autumn
*/

// #include <iostream>
// using namespace std;

// int main() {
//     int month;
//     cout << "Enter Month Number \n";
//     cin >> month;
//     switch (month)
//     {
//     case 1:
//     case 2: 
//     case 12: 
//     cout << "Winter Season \n";
//         break;
//     case 3: 
//     case 4: 
//     cout << "Spring Season \n";
//         break;
//     case 5: 
//     case 6: 
//     cout << "Summer Season \n";
//         break;
//     case 7: 
//     case 8: 
//     case 9: 
//     cout << "Monsoon Season \n";
//         break;
//     case 10: 
//     case 11: 
//     cout << "Autumn Season \n";
//         break;
    
//     default:
//     cout << "Wrong Month Number \n";
//         break;
//     }
//     return 0;
// }