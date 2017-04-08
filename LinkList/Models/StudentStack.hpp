//
//  StudentStack.hpp
//  LinkList
//
//  Created by Eddie on 4/8/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef StudentStack_hpp
#define StudentStack_hpp

#include <stdio.h>
#include "StudentData.hpp"

class StudentStack {
    int size;
    StudentData *top;
    
    const int MAX_SIZE = 5;
    
public:
    StudentStack();
    void push(StudentData *studentData);
    StudentData* pop();
    StudentData* topStudent();
    
    bool isEmpty();
    bool isFull();
};

#endif /* StudentStack_hpp */
