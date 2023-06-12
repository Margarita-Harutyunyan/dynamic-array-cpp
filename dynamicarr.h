#ifndef DYNAMIC_H
#define DYNAMIC_H

// Class definition

class DynamicArray {
public:
	DynamicArray();
	~DynamicArray();
	
	int& operator[](int index);

	void push_back(int elem);
	void reserve(int num);
	void insert(int pos, int elem);
	int at(int pos);
	int get_size();
	bool empty();
	int get_capacity();
	

	// Additional methods
	void traverse();

private:
	int* arr;
	int size;
	int capacity;
};


#endif

