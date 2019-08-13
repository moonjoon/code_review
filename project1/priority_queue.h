/* Copyright (c) 2019 moonjoon.ko All rights reserved. */

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <queue>

class TemplatePriorityQueue {
	public:
		template <typename T> TemplatePriorityQueue();
		template <typename T> ~TemplatePriorityQueue();
		template <typename T> bool IsEmpty() const;
		template <typename T> const T& Top() const;
		template <typename T> int Size() const;
		template <typename T> void Push(const T&);
		template <typename T> void Pop();	
	private:
		std::priority_queue<T> storage;
};
#endif // PRIORITY_QUEUE_H_
