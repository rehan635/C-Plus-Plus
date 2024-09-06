#include<iostream>
using namespace std;

  int main () {
    

         int A , B ,Result;
         char c;


         cout <<"Enter First Value : ";
         cin>> A;

          cout<<"calculation:";
         cin >> c;

         cout <<" Enter second Value:";
         cin>> B;

        


         switch (c) {
          
           case '+':
                Result = A + B;
                break;

           case '-':
                Result = A - B;
                break;

           case '*':
                Result = A * B;
                break;

           case '/':
                Result = A / B;
                break;

         }

         cout << "Result : " << Result  <<endl; 
  }