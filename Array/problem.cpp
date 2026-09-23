// Take the size N and N array elements as input. Print the array.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Give the Size of Array: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cout << "Give element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     cout << "Final Array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//  Sum of array elements
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={5,4,1,2,3},sum=0;
//     int length=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<length;i++){
//         sum+=arr[i];
//     };
//     cout << "Array Sum = " << sum;
//     return 0;
// }


// Find Maximum and Minimum in Array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={58,78,4,6,78,1,54,78,14,99,14,2,3,4,111,78};
//     int minValue=arr[0];
//     int maxValue=arr[0];

//     // Minimum Value in Array
//     for(int elem:arr){
//         if(elem<minValue){
//             minValue=elem;
//         };
//     }
//     cout << "Minimum Value : " << minValue << "\n";

//     // Maximum Value in Array
//     for(int elem:arr){
//         if(elem>maxValue){
//             maxValue=elem;
//         };
//     }
//        cout << "Maximum Value : " << maxValue << "\n";
//     return 0;
// }


// Check if array is sorted
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={10,7,9,55,1},isSorted;
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//         if(arr[i]<arr[i+1]){
//          isSorted=0;
//         }
//         else{
//             isSorted=1;
//         }
//     }
//      cout << (isSorted ? "Array is Sorted" : "Array is not Sorted");
//     return 0;
// }

// Reverse an array (two Pointer Algorithm)
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int s=0,e=size-1;

//     while(s<e){
//            int temp=arr[s];
//            arr[s]=arr[e];
//            arr[e]=temp;
//            s++;
//            e--;
//     }

//     for(int i=0;i<size;i++){
//         cout<<" " << arr[i];
//     }
//     return 0;
// }