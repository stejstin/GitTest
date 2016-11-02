/*Author: Stephen Stinson
 *Date: 11/2/16
 *File: main.cpp
 *Description: Simple c++ program that spits out to the console HELLO WORLD!
 */

#include <iostream>
using namespace std;


int sum(int n);//prototype for the sum method
int product(int n);// prototype for the prototype method

int main(){
  int n;
  
  cout << "HELLO WORLD!" << endl;
  cout << "Now Please enter a number ";
  cin >> n;

  cout << "The sum is: "  << sum(n) << endl;
  cout << "The product is: " << product(n) << endl;
}

int sum(int n){
  int sum1 = 0;
  for(int i = 1; i <= n; i++){
    sum1 += i;
  }

  return sum1;
}

int product(int n){
  int product1 = 1;
  for(int i = 1; i <= n; i++){
    product1 *= i;
  }

  return product1;
}
