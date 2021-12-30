#include "classes.hpp"

Node::Node(char c) {
	this->c = c; // updates the c attribute of this of object
}

void KuulStack::push(char c) {
	Node *newNode = new Node(c); // creates a new node
	newNode->next = head; // point new node to head
	head = newNode; // update head to point to the new node
}
char KuulStack::pop() {
	if (!head) {
		return '\0'; // if no nodes return null character
	}
	char tmp = head->c; // store tempory data
	Node *temp = head; // save address of node temporarily
	head = head->next; // move head to the next node
	delete temp; // delete the first node
	return tmp; // return stored data
}
void KuulQueue::push(char c) {
	Node *newNode = new Node(c); // create new node
	if (head) { // if not adding the first node
		tail->next = newNode; // make the last node point to the new node
	}
	else
	{	// if adding first node
		head = newNode; // update head
	}
	tail = newNode; // update tail
	size++; // increment size
}
char KuulQueue::pop() {
	if (!head) { // if empty queue
		return '\0'; // return null character
	}
	char tmp = head->c; // temporarily store the data of the node
	Node *temp = head; // temporarily store the address of the node
	head = head->next; // move the head to the next node
	delete temp;	// free memory at the first node
	size--; // decrement size
	return tmp; // return temporarily stored data
}
size_t KuulQueue::getSize() {
	return size; // take a guess
}
