//
//  main.cpp
//  up_cpp_data
//
//  Created by Sebastien Lavoie on 2016-08-07.
//  Copyright © 2016 Sebastien Lavoie. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

float cost(float price, int quantity) {
    return price * quantity;
}

int main() {
    string menu[4] = {"Hamburger", "Fries", "Hot dog", "Salad"};
    float price[4] = {4.75, 2.75, 3.75, 3.25};
    int choice;
    int quantity;
    
    cout<<"Here is the menu : "<<endl;
    for (int i = 0; i < 4; i++) {
        cout<<i+1<<". "<<menu[i]<<endl;
    }
    cout<<"Enter your selection : "<<endl;
    cin>>choice;
    cout<<"Enter the quantity : "<<endl;
    cin>>quantity;
    
    cout<<"your total comes to : $"<<cost(price[choice-1], quantity)<<endl;
    
    return 0;
}
