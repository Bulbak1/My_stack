// StackLib1.cpp : Определяет функции для статической библиотеки.
//
#include "pch.h"
#include "framework.h"
#include "Stack.h"
#include <iostream>

using namespace std;

//Node::Node() {
//
//};

Node::Node(char nval) : value(nval) {


};

Stack::Stack(char nval) : root(new Node(nval)), size(1) {

};

Stack::~Stack() {
	clear();
};

void Stack::push(char nval) {
	Node* NNode = new Node(nval);
	NNode->next = root;
	root = NNode;
	size++;
};

char Stack::pop() {
	if (is_empty()) {
		cout << "Стек пуст, удаление невозможно" << endl;
		return '\0';
	}
	char value = root->value;
	Node* tmp = root;
	root = root->next;
	delete tmp;
	size--;
	return value;
};

char Stack::top() const {
	if (is_empty()) {
		cout << "Стэк пуст!";
		return '\0';
	}
	return root->value;
};

inline bool Stack::is_empty() const {
	return size == 0;
};

void Stack::clear() {
	while (!is_empty()) {
		pop();
	}
};