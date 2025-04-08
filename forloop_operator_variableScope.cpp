#include<iostream>
using namespace std;

int main() {

//for loop


//     for (int i = 1; i <= 5; i++) {
//         cout << i << endl;
//     }
//     cout << "End of for loop" << endl; 


//multiple variables
    
     

// for (int i = 1, j = 5; i <= 5 && j <= 10; i++, j++) {
//     cout << "i: " << i << ", j: " << j << endl;
// }
// cout << "End of for loop" << endl;
// return 0;

// sum of first n numbers

// int n;
// cin >> n;

// int sum = 0;
// for (int i = 1; i <= n; i++) {
//     sum += i;

// }
//  cout << sum << endl;

// fibonacci series


int n;
cin >> n;
int a = 0, b = 1;
cout << a << " " << b << " ";
for (int i = 3; i <= n; i++) {
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
}
cout << endl;
return 0;




}





    





