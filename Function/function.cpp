#include<iostream>
using namespace std;

// int power(int a, int b) {
//     int ans = 1;
//     for (int i = 0; i < b; i++) {
//         ans*= a;
//     }
//     return ans;
// }




// int main(){
//     int a, b;
//     cin >> a >> b;
    
//     int answer = power(a,b);
//     cout << answer << endl;
//     return 0 ;
    
// } 

 // 1 -> enev
 // 0 -> odd

 bool isEven(int a){

    if(a&1){

        return 0;

    }else{
        return 1;
    }

 }

 int main(){
    int num ;
    cin >> num ;
  if( isEven(num)){
    cout << "number is even" << endl;
  }else{
    cout << "number is odd" << endl ;
  }
   
 }

 

