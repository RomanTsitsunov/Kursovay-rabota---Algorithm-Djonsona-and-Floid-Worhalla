#include "pch.h"
#include "Binary_heap.h"
#include <iostream>

Binary_heap::Binary_heap(int* _a, int _n)
{
	m = _n;
	n = _n;
	int i;
	a = new int* [n];
	d = new int[n];
	for (i = 0; i < n; i++)
	{
		a[i] = new int[2];
		a[i][0] = _a[i];
		a[i][1] = i;
		d[i] = i;
	}
}

void Binary_heap::create_heap()
{
	int i;
	for (i = n / 2; i > 0; i--)
		min_heapify(i);
}

int Binary_heap::parent(int i)
{
	return i / 2;
}

int Binary_heap::left(int i)
{
	return 2 * i;
}

int Binary_heap::right(int i)
{
	return (2 * i) + 1;
}

void Binary_heap::min_heapify(int i)
{
	int l, r, nmin = i;
	int* p;
	l = left(i);
	r = right(i);
	if (l <= m && a[l - 1][0] < a[nmin - 1][0])
		nmin = l;
	if (r <= m && a[r - 1][0] < a[nmin - 1][0])
		nmin = r;
	if (nmin != i)
	{
		p = a[i - 1];
		a[i - 1] = a[nmin - 1];
		a[nmin - 1] = p;
		d[a[i - 1][1]] = i - 1;
		d[a[nmin - 1][1]] = nmin - 1;
		min_heapify(nmin);
	}
}

int Binary_heap::nmin()
{
	return a[0][1];
}

void Binary_heap::pop()
{
	d[a[0][1]] = n;
	a[0] = a[m - 1];
	d[a[0][1]] = 0;
	m--;
	min_heapify(1);
}

void Binary_heap::Decrease_key(int _i, int x)
{
	int i = d[_i];
	if (i < m && x < a[i][0])
	{
		int* p;
		a[i][0] = x;
		while (i > 0 && a[parent(i + 1) - 1][0] > a[i][0])
		{
			p = a[i];
			a[i] = a[parent(i + 1) - 1];
			a[parent(i + 1) - 1] = p;
			d[a[i][1]] = i;
			d[a[parent(i + 1) - 1][1]] = parent(i + 1) - 1;
			i = parent(i + 1) - 1;
		}
	}
}