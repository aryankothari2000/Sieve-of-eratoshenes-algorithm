#include <bits/stdc++.h> 
using namespace std; 
  
void SieveOfEratosthenes(int n) 
{  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    
    for(int i=4;i<=n;i=i+2){
      prime[i]=false;
      
    for (int p=3; p*p<=n; p=p+2) 
    { 
        
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 
int main() 
{ 
    int n;
    cin>>n; 
    cout << "Following are the prime numbers smaller than or equal to " << n << endl; 
    SieveOfEratosthenes(n); 
    return 0; 
} 
