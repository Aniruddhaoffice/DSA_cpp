#include<iostream>
using namespace std;
int main()
{

/*

//pattern 1


    int n ;
    cin >> n ;

    int i = 1 ;

    while (i<=n)
    {
    int j = 1;
      while (j<=n)
      {
            cout << "*";
            j++;
      }
      cout << endl;
      i++;
    }



//pattern 3

    int n ;
    cin >> n ;

    int i = 1 ;

    while (i<=n)
    {
    int j = 1;
      while (j<=n)
      {
            cout << j;
            j = j + 1;
      }
      cout << endl;
      i = i + 1;
    }
   

//pattern 2


int n ;
cin >> n ;

int i = 1 ;

while (i<=n)
{
int j = 1;
  while (j<=n)
  {
        cout << i ;
        j = j + 1;
  }
  cout << endl;
  i = i + 1;
}




//Basic hand practice on c++

//problem no 1 

int a ;
int b;
cin >> a ;
cin >> b ;


int sum = a + b ;

if (a>b){
    cout << "A is greater "<<endl;
}else {
    cout <<"b is greater then A" <<endl;
}



//problem no 2 

int x ;


cin >> x;


int i = 1  ; 


for (i = 1 ; i <= x ; i = i + 1 ){
    
    if (i % x == ! 0 ){

        cout<< i <<endl;
    }

}




//problem no 3

int n ;
cin >> n ;

int i = 1 ;


while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        cout << j; ;
        j ++;
    }
    cout << endl;
    i++;
}

    return 0;


//problem no 4

int n ;

cin >> n ;

int i = 1 ;

while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        cout << j;
        j++;
    }
    cout << endl;
    i++;
}


//problem no 5 

int x ;

cin >> x ;

int i =1;

int count = 1;

while (i<=x)
{
    int j = 1;
    while (j<=x)
    {   
        cout << count<< "  ";
        count = count + 1;
        
        j++;
    }
    cout << endl;
    i++;
}



//problem no 6

int n ;
cin >> n ;
int i = 1 ;

while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout << i;
        j++;
    }
    cout << endl;
    i++;
}

    return 0;


//problem no 7

int n ;
cin >> n ;

int i = 1 ;
int count = 1 ;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout << count;
        count = count + 1;
        j++;
    }
    cout << endl;
    i++;
}

    return 0;




//problem no 8

int n ;
cin >> n ; 
int i = 1 ;

while (i<=n)
{
    int j = 1;
    // int value = i;
    while (j<=i)
    {
        cout << i+j-1;
        // value = value + 1;

        j++;
    }
    cout << endl;
    i++;
}

    return 0;


//problem no 9

int n ;
cin >> n ;
int i = 1 ;

while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout << i-j+1;
        j++;
    }
    cout << endl;
    i++;
}

// output
// 1
// 21
// 321
// 4321



//problem no 10

int n ;
cin >> n ;
int i = 1 ;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {   
        char ch ='A' + i -1 ;
        cout << ch;
    
        j++;
    }
    cout << endl;
    i++;
}

//output
// AAAA
// BBBB
// CCCC
// DDDD

//problem no 11

int n ;
cin >> n ;
int i = 1 ;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {   
        char ch ='A' + j -1 ;
        cout << ch;
    
        j++;
    }
    cout << endl;
    i++;
}
//output
// ABCD
// ABCD
// ABCD
// ABCD
*/


//problem no 12

// int n ;
// cin >> n ;


// int i = 1 ;
// while (i<=n)
// {
//     int j = 1;
//     while (j<=n)
//     {   
//         char ch ='A'+ i + j - 2 ;
//         cout << ch;
    
//         j++;
//     }
//     cout << endl;
//     i++;

// }

//problem no 13

// int n ;
// cin >> n ;


// int i = 1 ;
// while (i<=n)
// {
//     int j = 1;
//     while (j<=i)
//     {   
//         char ch ='A'+ i - 1 ;
//         cout << ch;
    
//         j++;
//     }
//     cout << endl;
//     i++;

// }

//problem no 14
/*
int n;
cin>> n ; 

int i = 1 ;
char ch = 'A' ; 

while (i<= n )
{
    int j = 1 ;
   while (j<=i)
   {
    char ch ='A'+ i + j - 2 ;
    cout << ch;
    
    j++;
   }
   cout << endl;
   i++;
   
}

*/

// //output
// A
// BC
// DEF
// GHIJ

//problem no 15

// int n;
// cin>> n ; 

// int i = 1 ; 

// while (i <= n){
//     int j = 1 ; 
//     char ch = 'A' + n - i ;
//     while (j <= i ){
//         cout << ch ;
//         ch = ch + 1 ;
//         j ++;
//     }
//     cout << endl;
//     i++;
// }


//output
// D
// CD
// BCD
// ABCD


//problem no 16 

// int n ;
// cin >>n ; 

// int i = 1 ;

// while (i <= n ){
//    int space = n - i ;
   
//    while(space){
//         cout << " ";
//         space = space - 1;

//    }
//     int j = 1 ;
//     while (j <= i){
//         cout << "*";
//         j = j + 1;
//     }









//    cout << endl;
//    i = i + 1;

// }
// }

//output
//    *
//   **
//  ***
// **** 


//problem no 17


// int n ;
// cin >>n ;

// int i = 1 ;
// int j = 1 ;

// while (i <= n ){

//     int j = 1;
 

//     while (j <= n-i+1){

        
//         cout << "*";
       

//         j++;
//     }
//     cout << endl;
//     i++;
    
// }


//output
// ****
// ***
// **
// *

//problem no 18

// int n ;
// cin >>n ;

// int i = 1 ;

// while (i <= n )
// {
     


//     /* print space */

//     int j = 1;
//     while (j<=i- 1 )
//     {
//         cout << " ";
//         j++;
//     }

//     /* print star */
//     int k = 1 ;
//     while (k <= n - i + 1 )
//     {
//         cout <<"*";
//         k++;
//     }

//     cout << endl;
//     i++;


// }

//output

//    *** 
//     **
//      *

//problem no 19


// int n ;
// cin >>n ;

// int i = 1 ;

// while (i <= n )
// {
     


//     /* print space */

//     int j = 1;
//     while (j<=i- 1 )
//     {
//         cout << " ";
//         j++;
//     }

//     /* print star */
//     int k = 1 ;
//     while (k <= n - i + 1 )
//     {
//         cout << i ;
//         k++;
//     }

//     cout << endl;
//     i++;



// }

//output

// 1111
//  222
//   33
//    4


//problem no 20


// int n ;
// cin >>n ;

// int i = 1 ;

// while (i <= n )
// {
//      /* print space */

//     int j = 1;
//     while (j<= n - i )
//     {
//         cout << " ";
//         j++;
//     }


   
//     /* print star */
//     int k = 1 ;
//     while (k <= i )
//     {
//         cout << i;
//         k++;
//     }

//     cout << endl;
//     i++;

// }    

//output
// ---1
// --22
// -333
// 4444



//problem no 20

// int n ;
// cin >>n ;

// int i = 1 ;

// while (i <= n )
// {
//      // print space
//      int j = 1 ;
//         while (j <= i -1  )
//         {
//             cout << "*";
//             j++;
//         }
//     // print number

//     int k = 1;
//     while (k<=  n-i+1 ) 
//     {
       
//         cout << k + i - 1;
      
      
//         k++;
//     }

//     cout << endl;
//     i++;
// }

//output
// 1234
// *234
// **34
// ***4


//problem no 21

int n ;
cin >>n ;

int i = 1 ;
int count = 1 ;

while (i <= n )
{
    // print space
    int j = 1 ;
    while (j <= n-i) 
    {
        cout << "*";
        j++;
    }
    // print number
    int k = 1 ;
   
   
    while (k <= i)
    {
        cout << count  ;
       count  = count + 1 ;
    
       k++;
    }
    cout << endl;
    i++;



}

//output
// ***1
// **23
// *456
// 78910
}










    
