//
//  main.cpp
//  class_activity10
//
//  Created by Sonia Lopchan on 9/15/24.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sales, commission;
    
    cout <<"Enter the total sales : ";
    cin >> sales;
    
    if (sales <= 10000){
        commission = 0.1 *sales;
    } 
    else if (sales <= 15000){
        commission = 0.15 *sales;
    }
    else {
        commission = 0.2 *sales;
    }
    
    cout << "The commission earned is: $" << commission << endl;
    
    return 0;
}
