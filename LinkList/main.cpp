//
//  main.cpp
//  LinkList
//
//  Created by Eddie on 3/17/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include <iostream>
#include "StudentStack.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    StudentStack *studentStack = new StudentStack();
    
    studentStack->pop();
    
    studentStack->push(new StudentData("idrees", "1"));
    studentStack->push(new StudentData("idrees", "2"));
    studentStack->push(new StudentData("idrees", "3"));
    studentStack->push(new StudentData("idrees", "4"));
    studentStack->push(new StudentData("idrees", "5"));
    studentStack->push(new StudentData("idrees", "6"));
    
    return 0;
}
