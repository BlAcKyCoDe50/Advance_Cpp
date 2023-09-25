#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct words
{
    char info;
    words *link;
};

characters *top = NULL;
characters *afterthat = top;

void PRINT()
{
    characters *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int v(char d)
{
    if (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U')
    {
        return 1;
    }
    return 0;
}

int add_special(char d)
{
    characters *afterthatent = top;
    characters *coming = top->link;
    int vowel = v(d);
    if (vowel)
    {
        if (v(afterthatent->info) == 0)
        {
            characters *nd = new characters;
            nd->info = d;
            nd->link = afterthatent;
            top = nd;
            return 1;
        }
        while (coming != NULL)
        {
            if (v(afterthatent->info) == 0 && v(coming->info) == 0)
            {
                characters *nd = new characters;
                nd->info = d;
                nd->link = coming;
                afterthatent->link = nd;
                return 1;
            }
            afterthatent = afterthatent->link;
            coming = coming->link;
        }
        if (v(afterthatent->info) == 0)
        {
            characters *nd = new characters;
            nd->info = d;
            nd->link = NULL;
            afterthatent->link = nd;
            return 1;
        }
    }
    else
    {
        if (v(afterthatent->info) == 1 || v(coming->info) == 1)
        {
            characters *nd = new characters;
            nd->info = d;
            nd->link = afterthatent;
            top = nd;
            return 1;
        }
        while (coming != NULL)
        {
            if (v(afterthatent->info) != 0 && v(coming->info) != 0)
            {
                characters *nd = new characters;
                nd->info = d;
                nd->link = coming;
                afterthatent->link = nd;
                return 1;
            }
            afterthatent = afterthatent->link;
            coming = coming->link;
        }
        if (v(afterthatent->info) != 0)
        {
            characters *nd = new characters;
            nd->info = d;
            nd->link = NULL;
            afterthatent->link = nd;
            return 1;
        }
    }
    return 0;
}

void add(char d)
{
    characters *nd = new characters;
    nd->info = d;
    nd->link = NULL;

    if (top == NULL)
    {
        top = nd;
    }
    else
    {
        afterthat->link = nd;
    }
    afterthat = nd;
}

int main()
{
    int items;
    cin >> items;
    char ch;
    for (int i = 0; i < items; i++)
    {
        cin >> ch;
        add(ch);
    }
    char item;
    cin >> item;
    int a = add_special(item);
    if (a)
    {
        PRINT();
    }
    else
    {
        cout << "Can't be inserted";
    }
    return 0;
}