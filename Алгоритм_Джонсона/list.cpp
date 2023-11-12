#include "pch.h"
#include "list.h"
#include <iostream>

list::list()
{
	head = nullptr;
	tail = nullptr;
}

list::~list()
{
	node_l* tmp;
	while (head != nullptr)
	{
		tmp = head;
		head = head->next;
		delete tmp;
	}
	tmp = head;
	delete tmp;
}

void list::addfirst(int i, int x)
{
	node_l* tmp = new node_l(i, x);
	if (head == nullptr)
	{
		head = tmp;
		tail = tmp;
	}
	else
	{
		tmp->next = head;
		head = tmp;
	}
}

int list::size()
{
	node_l* tmp; int n = 0;
	tmp = head;
	while (tmp != nullptr)
	{
		tmp = tmp->next;
		n++;
	}
	return n;
}

node_l* list::operator[](int i)
{
	node_l* tmp = head;
	int j = 0;
	while (j < i)
	{
		tmp = tmp->next;
		j++;
	}
	return tmp;
}