#include<iostream>
using namespace std;

 int main () {

      int i=0 , j=1;

      for(int n =0;n<10;n++)
      {

         cout<<i<<" ";
         int sum=i+j;


         i=j;
         j=sum;
      }
 }