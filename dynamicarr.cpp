#include <iostream>
#include <cstdlib>
#include "dynamicarr.h"



// Constructor and destructor methods

DynamicArray::DynamicArray()
{
        this->arr = NULL;
        this->size = 0;
        this->capacity = 0;
}

DynamicArray::~DynamicArray()
{
        std::free(this->arr);
        std::cout << "Destructor called successfully" << std::endl;
}

// Operator []

int& DynamicArray::operator[](int index)
{
	return this->arr[index];
}

//Other public methods

void DynamicArray::push_back(int elem)
{
        if (this->size == this->capacity){
                size_t new_capacity = this->capacity * 2;
                int* new_arr = (int*)std::realloc(this->arr, new_capacity);
                if (new_arr == NULL){
			std::cout << "Failed to reallocate memory" << std::endl;
                        return;
                }
                this->arr = new_arr;
                this->capacity *= 2;
        }

        this->arr[this->size] = elem;
        this->size += 1;
}

void DynamicArray::reserve(int num)
{
        this->arr = (int*)std::malloc(num * sizeof(int));
        if (this->arr == NULL){
		std::cout << "Failed to allocate memory in reserve function" << std::endl;
                return;
        }
        this->capacity = num;
}


void DynamicArray::insert(int pos, int elem)
{
        if (pos >= this->size)
        { std::cout << "Error: array index out of range" << std::endl;
          return;
        }

        else {
                this->arr[pos] = elem;
        }

}


int DynamicArray::at(int pos)
{
        if (pos >= this->size)
        { std::cout << "Error: array index out of range" << std::endl;
          return -1;
        }
        else {
                return this->arr[pos];
        }
}

int DynamicArray::get_size()
{
        return this->size;
}

bool DynamicArray::empty()
{
        if (this->size == 0) {return true;}
        return false;
}


int DynamicArray::get_capacity()
{
        return this->capacity;
}


void DynamicArray::traverse()
{
	std::cout << "Traversing the array" << std::endl;
        for (int i = 0; i < this->size; i++){
		std::cout << this->arr[i] << " ";
        }
	std::cout << "\n";
}

