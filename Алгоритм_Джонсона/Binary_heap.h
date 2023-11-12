#pragma once
class Binary_heap
{
public:
	Binary_heap(int* a, int n);
	void create_heap();
	int parent(int i);
	int left(int i);
	int right(int i);
	void min_heapify(int i);
	int nmin();
	void pop();
	void Decrease_key(int i, int x);
private:
	int** a; int* d; int n; int m;
};