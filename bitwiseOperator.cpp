#include<iostream>
using namespace std;

int main() {

    //BITWISE OPERATORS
    // 1. AND operator (&)
    // 2. OR operator (|)
    // 3. NOT operator (~)
    // 4. XOR operator (^)
    // 5. Left shift operator (<<)
    // 6. Right shift operator (>>)
    // 7. Bitwise assignment operator (&=, |=, ^=, <<=, >>=)
    // 8. Bitwise complement operator (~)
    // 9. Bitwise negation operator (~)
    // 10. Bitwise identity operator (&, |, ^)
    // 11. Bitwise equality operator (==, !=)
    // 12. Bitwise relational operator (<, >, <=, >=)
    // 13. Bitwise logical operator (&&, ||)
    // 14. Bitwise conditional operator (? :)
    // 15. Bitwise comma operator (,)
    // 16. Bitwise sizeof operator (sizeof)
    // 17. Bitwise typecast operator ((type))
    // 18. Bitwise pointer operator (&, *) 
    // 19. Bitwise member operator (., ->)
    // 20. Bitwise scope resolution operator (::) 
    

    // 1. AND operator (&) 
    
    // cout << (5 & 3) << endl; // 1 

    //EXPLAINATION:  
    // 5 = 0101
    // 3 = 0011
    // 5 & 3 = 0001 = 1


    // 2. OR operator (|)

    // cout << (5 | 3) << endl; // 7
   // EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 | 3 = 0111 = 7


    // 3. NOT operator (~)

    // cout << (~5) << endl; // -6

    //EXPLAINATION:
    // 5 = 0101
    // ~5 = 1010 = -6


    // 4. XOR operator (^)

    // cout << (5 ^ 3) << endl; // 6

    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 ^ 3 = 0110 = 6


    // 5. Left shift operator (<<)

    // cout << (5 << 1) << endl; // 10

    //EXPLAINATION:
    // 5 = 0101
    // 5 << 1 = 1010 = 10


    // 6. Right shift operator (>>)

    // cout << (5 >> 1) << endl; // 2

    //EXPLAINATION:
    // 5 = 0101
    // 5 >> 1 = 0010 = 2


    // 7. Bitwise assignment operator (&=, |=, ^=, <<=, >>=)

    // cout << (5 &= 3) << endl; // 1
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 &= 3 = 0001 = 1
    // 8. Bitwise complement operator (~)
    // cout << (~5) << endl; // -6
    //EXPLAINATION:
    // 5 = 0101
    // ~5 = 1010 = -6
    // 9. Bitwise negation operator (~)
    // cout << (~5) << endl; // -6
    //EXPLAINATION:
    // 5 = 0101
    // ~5 = 1010 = -6
    // 10. Bitwise identity operator (&, |, ^)
    // cout << (5 & 3) << endl; // 1
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 & 3 = 0001 = 1
    // 11. Bitwise equality operator (==, !=)
    // cout << (5 == 3) << endl; // 0
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 == 3 = 0
    // 12. Bitwise relational operator (<, >, <=, >=)
    // cout << (5 < 3) << endl; // 0
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 < 3 = 0
    // 13. Bitwise logical operator (&&, ||)
    // cout << (5 && 3) << endl; // 1
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 && 3 = 1
    // 14. Bitwise conditional operator (? :)
    // cout << (5 ? 3 : 0) << endl; // 3
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5 ? 3 : 0 = 3
    // 15. Bitwise comma operator (,)
    // cout << (5, 3) << endl; // 3
    //EXPLAINATION:
    // 5 = 0101
    // 3 = 0011
    // 5, 3 = 3 
    // 16. Bitwise sizeof operator (sizeof) 
    // cout << sizeof(5) << endl; // 4
    //EXPLAINATION:
    // 5 = 0101
    // sizeof(5) = 4
    // 17. Bitwise typecast operator ((type))
    // cout << (int)5 << endl; // 5
    //EXPLAINATION:
    // 5 = 0101
    // (int)5 = 5







//question 1

int a , b = 1;

a = 10;
if(++a)
  cout << b ;
else
  cout << ++b ;

//EXPLAINATION:
// a = 10
// b = 1
// ++a = 11
// if(11)
//   cout << b ; // 1
// else
//   cout << ++b ; // 2
// 1


// //question 2

// int a = 1 ;
// int b = 2 ;

// if (a-- > 0 && ++b > 2){
//     cout  << "Stage1 - inside if ";
// } else {
//     cout << "Stage2 - inside else ";
// }

// cout << a << " " << b << endl;

// //question 3 

// int a = 1 ;
// int b = 2 ;

// if (a-- > 0 || ++b > 2){
//     cout  << "Stage1 - inside if ";
// } else {
//     cout << "Stage2 - inside else ";
// }

// cout << a << " " << b << endl;

// //question 4
// int number = 3;
// cout << (25 *(++number)) << endl;

// //question 5
// int a = 1;
// int b = a++;
// int c = ++a;
// cout << b ;
// cout << c << endl;




//(DECIMAL TO BINARY CONVERSION)


// int decimal ;
// cin >> decimal ;

// int ans = 0 ;

// int power = 1 ;

// while (decimal>0)
// {
//  int rem = decimal % 2 ;
//  decimal = decimal /2 ;
//     ans = ans + rem * power ;
//     power = power * 10 ;
// }
// cout << ans << endl;


}