#include <iostream>
using namespace std;

int main()
{
   int i, j;
   int k, l, m, n;
   int o, p, q, r;

   for(i = 1; i <= 10; i++)
   {
      //print * equal to row number
      for(j = 1; j <= i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }

   cout << "\n";

   for(i = 10; i >= 1; i--)
   {
      //print * equal to row number
      for(j = 1; j <= i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }

   cout << "\n";

   for(k = 1, m = 9; k <= 9, m >= 1; k++, m--)
   {
       for(l = 1; l <= k; l++)
       {
           cout << " ";
       }

       for(n = 1; n <= m; n++)
       {
           cout << "*";
       }

       cout << endl;
   }

   cout << "\n";

   for(o = 9, q = 1; o >= 1, q <= 9; o--, q++)
   {
       for(p = 1; p <= o; p++)
       {
           cout << " ";
       }

       for(r = 1; r <= q; r++)
       {
           cout << "*";
       }

       cout << endl;
   }

   return 0;
}