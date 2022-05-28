// chain implmentation using a linked list
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Hash
{
    int BUCKET;
    list<int> *table;

public:
    Hash(int V);
    // inserts a key into hash table
    void insertItem(int x);

    // deletes a key from hash table
    void deleteItem(int key);

    // hash function to map values to key
    int hashFunction(int x)
    {
        return (x % BUCKET);
    };
    int main()
    {
        int a[] = {15, 11, 27, 8, 12};
        int n = sizeof(a) / sizeof(a[0]);

        Hash h(7);
        for (int i = 0; i < n; i++)
            h.insertItem(a[i]);

        // delete 12 from hash table
        h.deleteItem(12);

        // display the Hash table
        h.displayHash();

        return 0;
    }