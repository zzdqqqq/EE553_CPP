//
//  main.cpp
//  Lesson1
//
//  Created by Zidong Zhang on 1/24/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//


    /*
     
     if this is signed
     ±21
     000 = 1
     001 = 2
     011 = 3
     100 = -4
     101 = -3
     110 = -2
     111 = -1
     
     
     */
    //    int a = 2;
    //    int b = 3;
    //
    //    if (a = b) // make a equal to 3. this is not zero so it's true
    //    {
    //        cout << "equal\n";
    //    }else{
    //        cout << "NOT equal \n";
    //    }
    //
    //
    //    return 0;
    //}
    
    
    /*
     while(x<10){
     x++;
     cout << x << endl; this is not good
     
     }
     
     
     */
    /*
     while (y < 10)
     {
     cout << y++; this is prefered.
     }
     
     
     */
#include <iostream>
using namespace std;
    
    int main()
    {
        uint32_t w = 2 + 2;
        int x = 2 - 5;
        uint32_t a = 2 - 5; // overflow ????
        
        int y = 3 * 4;
        int z = 2 / 3;
        
        cout << "w" << w << endl;
        cout << "x" << x << endl;
        cout << "a" << a << endl;
        cout << "y" << y << endl;
        cout << "z" << z << endl;
        
        for (int i = 1; i <= 100; i = i * 2)// 先执行 i最后再算
        {
            cout << i << endl;
        }
        
        
        int sum = 0;
        for (int i = 1; i <= 99; i += 2){
            sum += i;
            cout << i << "\t" << sum << "\n" << endl;
        }
        
        cout << sizeof(float) << endl;
        
        for (double i = 0; i <= 100; i += 0.1)
            cout << i << '\t' << "XX" << '\n';
        cout << '\n';
        
        sum = 0;
        for (int i = 1; i < 10; i++)
            sum += 1/i;
        
        
        
        
        return 0;
    }
    

