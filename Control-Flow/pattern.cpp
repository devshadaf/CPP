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

 int main()
 {
   for (int i = 1; i <= 5; i++)
   {
     bool val = (i % 2 != 0);
     for (int j = 1; j <= i; j++)
     {
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

 int main()
 {
   char ch = 'A';
   for (int i = 1; i <= 4; i++)
   {
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
   for (int i = 1; i <= 5; i++)
   {
     // Spaces
     for (int j = 1; j <= 5 - i; j++)
     {
      // cout << " ";
     }

     // star
     for (int j = 1; j <= i; j++)
     {
       cout << "* ";
     }
     cout << endl;
   }

   // DOWN
   for (int i = 1; i <= 4; i++)
   {
    //  Spaces
     for (int j = 1; j <= i; j++)
     {
       cout << " ";
     }

     // Star
     for (int j = 1; j <= 5-i; j++)
     {
       cout << "* ";
     }
     cout << endl;
   }

  return 0;
 }
