#include <iostream>
#include "dynamicarr.h"

int main()
{
	DynamicArray darr;
	std::cout << "darr successfully initialized" << std::endl;

        darr.reserve(3);
	std::cout << "darr successfully reserved" << std::endl;

        darr.push_back(1);
        darr.push_back(2);
        //printf("pushback 2\n");
        darr.push_back(3);
        //printf("pushback 3\n");
        darr.push_back(4);
        //printf("pushback 4, array resized\n");

        darr.insert(1, 5);
        //printf("insert\n");

	std::cout << "Capacity = " << darr.get_capacity() << std::endl;
	std::cout << "Size = " << darr.get_size() << std::endl;
	std::cout << "Number at index 1 is " << darr[1] << std::endl;

        darr.traverse();
}

