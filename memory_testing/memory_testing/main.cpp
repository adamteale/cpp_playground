//
//  main.cpp
//  memory_testing
//
//  Created by adam on 7/25/18.
//  Copyright © 2018 adam. All rights reserved.
//

#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;

int main(int argc, const char * argv[]) {
    
    LOG("test");
    
    int* j = new int[5];
    j[0] = 0;
    j[1] = 1;
    j[2] = 2;
    j[3] = 3;
    j[4] = 4;


    std::cout << std::to_string(j[0]) << std::endl;
    j++;
    std::cout << std::to_string(j[0]) << std::endl;
    j--;
    delete[] j;
    
    
    return 0;
}
