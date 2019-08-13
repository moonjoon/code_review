/* Copyright (c) 2019 moonjoon.ko All rights reserved. */
#include "priority_queue.h"

template <>
TemplatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
TemplatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool TemplatePriorityQueue<int>::empty() const{
        return storage.empty();
}

template <>
int TemplatePriorityQueue<int>::size() {
        return storage.size();
}

template <>
const int& TemplatePriorityQueue<int>::top() const{
        return storage.top();
}

template <>
void TemplatePriorityQueue<int>::pop(){
        storage.pop();
}

template <>
void TemplatePriorityQueue<int>::push(const int& val){
        storage.push(val);
}
