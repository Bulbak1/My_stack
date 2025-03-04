#pragma once
#include <iostream>

class Node {
private:
	char value;
	Node* next = nullptr;
public:
	Node() = default;
	Node(char);
	~Node() = default;
	friend class Stack;
};

class Stack {
private:
	Node* root = nullptr;
	int size = 0;
public:
	Stack() = default;
	Stack(char);
	~Stack();
	void push(char);
	char pop();
	char top() const;

	bool is_empty() const;
	void clear();
};

class Decue {
private:
	Stack* f;
	Stack* S;
	int size;
public:
	Decue();
};