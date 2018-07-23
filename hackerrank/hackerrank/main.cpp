//
//  main.cpp
//  hackerrank
//
//  Created by adam on 7/23/18.
//  Copyright © 2018 adam. All rights reserved.
//


#include <iostream>

using namespace std;

int main() {

    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    
    // Read and save an integer, double, and String to your variables.
    
    cout << "Enter an in :";
    cin >> j;
    cout << "Enter an double :";
    cin >> e;
    cout << "Enter a string :";
    getline(cin, t);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    std::cout << to_string(j + i);
    // Print the sum of the double variables on a new line.
    std::cout << to_string(d + e);
    
    // Concatenate and print the String variables on a new line
    std::cout << (s + t);
    
    // The 's' variable above should be printed first.
    
    
}
