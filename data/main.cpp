//
//  main.cpp
//  data
//
//  Created by Zidong Zhang on 1/25/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>

int n;

void f(){//O(1)

}

int main(){
    for(int i = 0; i < n; i++){//O(n)
        f();//O(1)
    }
    for (int i = 5; i < n - 60; i++)//O(n)
    {
        
    }
    for (int i = 0; i < n; i += n/3){//O(3)==>O(1)
        
    }
    
    for (int i = n/2; i < n; i += 20){// O(n)
        
    }
    
    for (int i = 0; i < sqrt(n); i++){// O(sqrt(n))
        
    }
    
    for (int i = 0; i < n; i += sqrt(n)){// O(sqrt(n))
        
    }
//        *******************************************
    for (int i = 0; i < n - sqrt(n); i++){// O(n) sqrt is smaller than n, it's like a const.
//        *******************************************
    }
    
    for (int i = 1; i < n; i = i * 2){// O(log2(n))
        
    }
    
    for (int i = 5; i <= n; i = i * 3){// O(log3(n))
        
    }// all logs are the same for complexity : log2(n) = log3(n) / log2(3)
    
    for (int i = 0; i < n; i++){// O(n)
        for (int j = 0; j < n; j++){// O(n)
            
        }
    }// O(n^2)
    
    // O(sqrt(n)*log2(n))
    for (int i = 0; i < sqrt(n); i++){
        for(int j = 1; j < n; j *= 2){
            
        }
    }
    
    // O(n)
    for (int i = 0; i < n; i++){//O(n)
        
    }
    
    for (int i = 0; i < 2*n; i++){//O(n)
        
    }
    
    // O(n^2)
    for (int i = 0; i < n; i++){// O(n^2)
        for (int j = 0; j < n; j++){
            
        }
    }
    for (int i = 0; i < n; i++){// O(n)
        
    }
    
    // O(n^2)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){// O(0 + 1 + 2 + 3 + ... + (n-1))
            
        }
    }
    // O(n^2)
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){// O(1 + 2 + 3 + ... + n)
            
        }
    }
    
    // recursive
    
    int fact(int n){
        int prod = 1;
        for(int i = 1; i <= n; i++){
            prod *= 1;
        }
        return prod;
    }
    
    int fact2(int n){
        if (n == 0)
            return 1;
        return n * fact2(n-1);
    }
    
}
