// Right-angled Triangle

/*
*
**
***
****
*****
******
*/

// #include <iostream>
// using namespace std;

// int main() {
//     for(int i=1;i<=6;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// V Star Pattern

// *               *
//   *           *
//     *       *
//       *   *
//         *

//  #include <iostream>
//  using namespace std;

//  int main() {
//      for(int i=1;i<=5;i++){
//          for(int j=1;j<=9;j++){
//             if(i==j || j==10-i){
//                  cout<<" * ";
//             };
//               else{
//                 cout<<"  ";
//               }
//          }
//              cout<<"\n";
//      }
//      return 0;
//  }


// Inverted right-angled Triangle

/*
******
*****
****
***
**
*
*/

// #include <iostream>
// using namespace std;

// int main() {
//     for(int i=6;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<< " * ";
//         };
//         cout<< "\n";
//     }
//     return 0;
// }


// Mirrored Right Triangle

/*
      *
     **
    ***
   ****
  *****
*/

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         // spaces
//         for (int j = 1; j <= 5 - i; j++) {
//             cout << "  ";
//         }
//         // stars
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
