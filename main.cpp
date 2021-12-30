//Kulsoom Sabit

#include "classes.hpp"
#include "functions.hpp"
#include <iostream>
#include <fstream>

int	main() {
	int choice;
	std::string name;
    std::cout << "Hey! what's your name?";
    std::cin >> name;
    std::cout << "Hey " << name << "!" << std:: endl;
    std::cout << "This is a program to test for Palindromes! You get to help!" << std::endl;
    std::cout << "If you would like to test your own word, enter 1 or if you want to test a text file, enter 2" << std::endl;
    std::cout << "Please choose option 1 or 2"<<std::endl;
    std::cin >> choice;
    if (choice == 1)
    {
        std::cout << "Great! you chose option 1!" << std::endl;
        std::string input;
        std::cout << "Please enter a word to test if its a palindrome" <<std::endl;
        std::cin >> input;
        if (!isPalindrome(input)) { // check if inpute is NOT palindrome
			std::cout << input << " " << "is not a palindrome!"<<std::endl; 
		}
		else
		{
			std::cout << input << " " << "is a palindrome!"<<std::endl;
		}
		
    }
    else if (choice == 2)
    {
        std::string line;
        std::cout << "Enter file name:" << std::endl;
        std::cin >> line; 
        std::ifstream ifs(line); // create input filestream object and open the chosen file
        while (std::getline(ifs, line)) { // read line from file
            if (!isPalindrome(line)) { // check if line is NOT a palindrome
				std::cout << line << " " << "is not a palindrome!"<<std::endl; 
			}
			else
			{
				std::cout << line << " " << "is a palindrome!"<<std::endl;
			}
			
        }
    }
    else
    {
        std::cout << "1 or 2" << std::endl;
    }
}
