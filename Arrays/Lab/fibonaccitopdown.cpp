#include <bits/stdc++.h> 
using namespace std; 
  
int lookup[100];  

void _initialize()  
{  
    int i;  
    for (i = 0; i < 100; i++)  
        lookup[i] = -1;  
}  
int fib(int n)  
{  
    if (lookup[n] == -1)  
    {  
        if (n <= 1)  
            lookup[n] = n;  
        else
            lookup[n] = fib(n - 1) + fib(n - 2);  
}  
  
return lookup[n];  
}  
   
int main ()  
{  
    int n;
    cin>>n;
    _initialize();  
    cout << "Fibonacci number is " << fib(n);  
    return 0;  
}  