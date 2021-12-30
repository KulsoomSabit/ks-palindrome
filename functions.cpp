#include "functions.hpp"

KuulStack	*stringToKuulStack(std::string str) {
	KuulStack *s = new KuulStack(); // create a new stack
	for (char c : str) { // for each loop
						// iterates through each character in the loop
		s->push(std::tolower(c)); // adds each character in lowercase to the stack
	}
	return s; // return the cool stack
}

KuulQueue	*stringToKuulQueue(std::string str) {
	KuulQueue *q = new KuulQueue(); // create a new queue
	for (char c : str) { // for each loop
						// iterates through each character in the loop
		q->push(std::tolower(c)); // adds each character in lowercase to the queue
	} //converts upper to lower
	return q; // return the cool queue
}

bool isPalindrome(std::string str) {
	KuulQueue *q = stringToKuulQueue(str); // get the string as a queue
	KuulStack *s = stringToKuulStack(str); // get the string as a stack
	size_t start = 0, end = q->getSize(); // start and ending indexes
											// so that we only check half the queue
	char first, last; // first and  last characters
	// for (char c : str) {
	// 	q->push(std::tolower(c));
	// 	s->push(std::tolower(c));
	// }$
	while (start < end) // keep going until half the the string has been parsed
	{
		first = q->pop(); end--; // get a char from the queue and decrement index
		last = s->pop(); start++;// get a char from the stack and increment index
		while (std::isspace(first) || std::ispunct(first)) { //find next char in queue
			first = q->pop(); //get next character
			end--; // decrement index
		}
		while (std::isspace(last) || std::ispunct(last)) {//find next char in stack
			last = s->pop(); //get next character
			start++; // increment index
		}
		if (first != last) { // if the characters don't match
            return false; //its not a palindrome
		}

	}
	return true; // its a palindrome!	
}
