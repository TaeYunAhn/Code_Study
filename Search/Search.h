#pragma once
#include <vector>


struct Node
{
    int data = -1;
    Node *next;
};

class CSearch
{
public:
    int linearSearch(int* list, int val);
    int binarySearch(int list[], int size, int val);
    int makeHashTable(int* list, int size);
    int hashSearch(int val);
    int printHashTable();

private:
    int binarySearchR(const std::vector<int>& vList, int start, int end, int val);
    int hashFunction(int val);

private:
    Node table[10];

};
