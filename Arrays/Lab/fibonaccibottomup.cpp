#include<bits/stdc++.h> 
using namespace std;
int fib(int n) 
{ 
  int f[n+1]; 
  int i; 
  f[0] = 0;   f[1] = 1;  
  for (i = 2; i <= n; i++) 
      f[i] = f[i-1] + f[i-2]; 
  
  return f[n]; 
} 
   
int main () 
{ 
  int n;
  cin>>n;
  printf("Fibonacci number is %d ", fib(n)); 
  return 0; 
}