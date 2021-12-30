#ifndef CLASSES_H
#define CLASSES_H

#include <string>

struct Node
{
	char c; // data
	Node * next; // address of next node
	// constructors
	Node(){}
	Node(char c);
};

class KuulStack{
	private:
	//size_t	size = 0; // size -- never needed so not implemented
	Node * head = nullptr; // head node
	public:
	KuulStack(){}; // default constructor
	void	push(char c); // add to start
	char	pop();
};

class KuulQueue{
	private:
	size_t	size = 0; // size
	Node * head = nullptr; // address of first node
	Node * tail = nullptr; // address of last node
	public:
	KuulQueue(){};
	void	push(char c); // add to end
	char	pop(); // remove from start
	size_t	getSize(); // returns the size
};

#endif
