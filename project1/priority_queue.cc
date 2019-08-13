/* Copyright (c) 2019 moonjoon.ko All rights reserved. */
#include "priority_queue.h"

template <>
TemplatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
TemplatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool TemplatePriorityQueue<int>::IsEmpty() const{
        return storage.empty();
}

template <>
int TemplatePriorityQueue<int>::Size() const {
        return storage.size();
}

template <>
const int& TemplatePriorityQueue<int>::Top() const{
        return storage.top();
}

template <>
void TemplatePriorityQueue<int>::Pop(){
        storage.pop();
}

template <>
void TemplatePriorityQueue<int>::Push(const int& val){
        storage.push(val);
}
