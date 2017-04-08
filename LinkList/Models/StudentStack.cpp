//
//  StudentStack.cpp
//  LinkList
//
//  Created by Eddie on 4/8/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//
#include <iostream>
#include "StudentStack.hpp"

StudentStack::StudentStack() {
    this->size = 0;
    this->top = nullptr;
}

void StudentStack::push(StudentData *studentData) {
    if (this->size == this->MAX_SIZE) {
        cout<<"Error: Stack is full. Insetion failed"<<"\n";
        return;
    }
    studentData->setNext(this->top);
    this->top = studentData;
    this->size++;
}

StudentData* StudentStack::pop() {
    if (this->isEmpty()) {
        cout<<"Stack is empty. Pop failed."<<"\n";
        StudentData *emptyPointer = new StudentData();
        return emptyPointer;
    }
    StudentData *studentData = this->top;
    this->top = this->top->getNext();
    studentData->setNext(nullptr);
    
    this->size--;
    
    return studentData;
}

StudentData* StudentStack::topStudent(){
    if (this->isEmpty()) {
        cout<<"Stack is empty. Operation failed."<<"\n";
        StudentData *emptyPointer = new StudentData();
        return emptyPointer;
    }
    
    return this->top;
}

bool StudentStack::isEmpty() {
    if (this->size == 0) {
        return true;
    }
    
    return false;
}

bool StudentStack::isFull() {
    if (this->size == this->MAX_SIZE) {
        return true;
    }
    
    return false;
}
