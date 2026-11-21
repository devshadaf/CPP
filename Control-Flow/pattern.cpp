 // Right-angled Triangle
/*

 *
 **
 ***
 ****
 *****
 ******

 */

 #include <iostream>
 using namespace std;

 int main() {
     for(int i=1;i<=6;i++){
         for(int j=1;j<=i;j++){
             cout<<" * ";
         }
         cout<<"\n";
     }
     return 0;
 }

// V Star Pattern
 /*

*               *
//   *           *
//     *       *
//       *   *
//         *

  */

#include <iostream>
 using namespace std;

 int main()
 {
   for (int i = 1; i <= 5; i++)
   {
     for (int j = 1; j <= 9; j++)
     {
       if (i == j || j == 10 - i)
       {
         cout << " * ";
       }
       else
       {
         cout << "  ";
       }
     }
     cout << "\n";
   }
   return 0;
 }

 // Inverted right-angled Triangle
/*

******
*****
****
***
**
*

*/

 #include <iostream>
 using namespace std;

 int main() {
     for(int i=6;i>=1;i--){
         for(int j=1;j<=i;j++){
             cout<< " * ";
         };
         cout<< "\n";
     }
     return 0;
 }

 // Mirrored Right Triangle
 /*

       *
      **
     ***
    ****
   *****

  */

#include <iostream>
 using namespace std;

 int main() {
     for (int i = 1; i <= 5; i++) {
          // spaces
         for (int j = 1; j <= 5 - i; j++) {
             cout << "  ";
         }
         // stars
         for (int j = 1; j <= i; j++) {
             cout << "* ";
         }
         cout << "\n";
     }
     return 0;
 }

 // Print the Palindromic Pattern with Numbers
/*
    1
   212
  32123
 4321234
543212345
*/

 #include<iostream>
 using namespace std;

 int main(){
   int n=5;
   for(int i=1;i<=n;i++){

     // spaces
     for(int j=1; j<=n-i; j++){
       cout<< "  ";
     }

     // digit
     for(int j=i; j>=1; j--){
       cout<< j << " ";
     }
     for(int j=2; j<=i; j++){
       cout<< j << " ";
     }

     cout<<endl;
   }
   return 0;
 }

 // Print the Rhombus Pattern.
/*

     *****
    *****
   *****
  *****
 *****

 */

 #include <iostream>
 using namespace std;

 int main() {
   int n=5;
   for(int i=1;i<=5;i++){
     // space
     for(int j=1;j<=n-i;j++){
       cout<<"  ";
     }
     // star
     for(int j=1;j<=n;j++){
       cout<<"* ";
     }
     cout << endl;
   }
   return 0;
 }

 // Print the 0-1 Triangle Pattern.
/*
1
01
101
0101
10101
*/

 #include <iostream>
 using namespace std;

 int main(){
   for (int i = 1; i <= 5; i++){
     bool val = (i % 2 != 0);
     for (int j = 1; j <= i; j++){
       cout << val;
       val = !val;
     }
     cout << endl;
   }
   return 0;
 }

// Print Character Pyramid Pattern
/*
A
BC
DEF
GHIJ
*/

 #include <iostream>
 using namespace std;

 int main(){
   char ch = 'A';
   for (int i = 1; i <= 4; i++){
     for (int j = 1; j <= i; j++){
       cout<<ch;
       ch+=1;
     }
     cout<<endl;
   }
   return 0;
 }


// Diamond Pattern
/*

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

 */

 #include <iostream>
 using namespace std;
 
 int main() {
   // UP
   for (int i = 1; i <= 5; i++){
     // Spaces
     for (int j = 1; j <= 5 - i; j++){
       cout << " ";
     }

     // star
     for (int j = 1; j <= i; j++){
       cout << "* ";
     }
     cout << endl;
   }

   // DOWN
   for (int i = 1; i <= 4; i++){
    //  Spaces
     for (int j = 1; j <= i; j++){
       cout << " ";
     }

     // Star
     for (int j = 1; j <= 5-i; j++){
       cout << "* ";
     }
     cout << endl;
   }

  return 0;
 }


 /*

  #  
  #  
#####
  #  
  #  

 */

 #include <iostream>
 using namespace std;
 
 int main() {
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(i==2 || j==2){
        cout << "# ";
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
 }


 // Star Cross Print 
/*

*   *
 * * 
  *  
 * * 
*   *

*/

#include <iostream>
using namespace std;

int main() {
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      if(j==i|| i+j==6){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}


// Number Flipped Triangle
/*
    1
   12
  123
 1234
12345

*/

#include <iostream>
using namespace std;

int main() {
  for(int i=1;i<6;i++){

    // spaces
    for(int j=5;j>i;j--){
      cout << " ";
    }

    // digit
    for(int k=1;k<=i;k++){
      cout << k;
    }
    cout << endl;
  }
  return 0;
}


// Star pyramid
/*

   *
  ***
 *****
*******

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Rows :";
  cin >> n;
  int star=1;

  for(int i=1;i<5;i++){

    // space
     for(int j=1;j<=n-i;j++){
      cout << " ";
     }

     // star
     for (int j = 1; j <= star; j++){
       cout << "* ";
     }

     star+=2;
     cout << endl;
  }
  return 0;
}


// Number Bridge
/*

1234567
123 567
12   67
1     7

*/

#include <iostream>
using namespace std;

int main(){
  for (int i = 1; i < 8; i++){
    cout << i;
  }
  cout << endl;

  for (int i = 1; i <= 3; i++){
    int a = 1;
    for (int j = 1; j <= 3 - i + 1; j++){
      cout << a;
      a++;
    }

    for (int j = 1; j <= 2 * i - 1; j++){
      cout << " ";
      a++;
    }

    for (int j = 1; j <= 3 - i + 1; j++){
      cout << a;
      a++;
    }

    cout << endl;
  }

  return 0;
}