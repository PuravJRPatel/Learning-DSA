// 1. A Simple Square Pattern of Numbers
// 2. A Simple Square Pattern of Stars
// 3. A Simple Square Pattern of Letters
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  //1.
  // int n;
  // int i;
  // int j;
  // cout << "enter n: "<<endl;
  // cin >> n;
  // for(i = 1; i <= n; i++){
  //   for(j = 1; j<=n; j++){
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  //2.
  // int n = 4;
  // int i;
  // int j;
  // for (i = 1; i <= n; i++){
  //   for (j = 1; j <= n; j++){
  //     cout << "* ";
  //   }
  // cout << endl;
  // }
  
//   int n = 3;
//   int i;
//   int j;
  
//   for (i = 1; i <= n; i++){
//        for (j = 1; j <= n; j++){
//         cout << i << " ";
//         i = i + 1;
//     }
//     cout << endl;
//   }
// return 0;

// int n = 3;
// int i;
// int j;
// char num = 65;
// for (i = 1; i <= n; i++)
// {
//   for (j = 1; j <= n; j++)
//   {
//     cout << num;
//     num ++ ;
//   }
//   cout << endl;
// }

// int n = 3;
// for (int i = 0; i <= n; i++)
// {
//   for (int j = 0; j < i + 1; j++)
//   {
//     cout << "*" ;
//   }
//   cout << endl;
// }

// int n = 4;
// int num = 0;

// for (int i = 0; i <= n; i++)
// {
//   num ++; 
//   for (int j = 0; j < i + 1; j++)
//   {
//     cout << num << " ";
//   }
//   cout << endl;
// }

// int n = 4;


// for (int i = 0; i <= n; i++)
// { 
//   for (int j = 1; j < i + 1; j++)
//   {
//     cout << j << " ";
    
//   }
//   cout << endl;
// }

// int n = 4;
// int i;
// int j;
// for (i = 0; i <= n; i++)
// {
//   for (j = i + 1; j >= 1; j--)
//   {
//     cout << j; 
//   }
//   cout << endl;
// }

// int n = 4;
// int i;
// int j;
// int num = 1;
// for (i = 0; i <= n; i++)
// {
//   for (j = 1; j < i + 1; j++)
//   {
//     cout << num << " ";
//     num ++; 
//   }
//   cout << endl;
// }

// int n = 4;
// int i;
// int j;
// int k;
// int num = 0;

// for (i = 0; i < n; i++)
// {
//   for (j = 0 ; j < i; j++)
//   {
//     cout << " "; 
//   }
//   num ++;
//   for (k = n ; k >= i + 1 ; k--)
//   {
//     cout << num;
//   } 

//   cout << endl;
// }

int i;
int j;
int k;
int l;
int n = 4;

for (i = 0; i < n; i ++)
{
  for (j = 0; j <= n - i - 1; j ++)
  {
    cout << " ";
  }
  for (k = 1; k <= i + 1; k ++)
  {
    cout << k;
  }
  for (l = i ; l >= 1 ;l--)
  {
    cout << l;
  }
  cout << endl;
}

}