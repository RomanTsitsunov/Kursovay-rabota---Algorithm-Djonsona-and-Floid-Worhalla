#pragma once

struct node_l
{
    int v, w;
    node_l* next;
    node_l(int i, int x)
    {
        v = i;
        w = x;
        next = nullptr;
    }
};



class list
{
public:
    list();
    ~list();
    void addfirst(int i, int x);
    int size();
    node_l* operator[](int i);
private:
    node_l* head;
    node_l* tail;
};