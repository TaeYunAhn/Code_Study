#include "Search.h"
#include <algorithm>
#include <iostream>


using namespace std;


int CSearch::linearSearch(int* list, int val)
{
    int i = 0;
    while (list[i])
    { 
        if (list[i] == val)
        {
            return val;
        }
        i++;
    }
    return -1;
}

int CSearch::binarySearch(int list[], int size, int val)
{
    std::vector<int> vList;
    for ( int i =0; i <size; i++ )
    {
        vList.push_back(list[i]);
    }

    std::sort(vList.begin(), vList.end());

    /*int start = 0;
    int end = vList.size();
    int mid = vList.size() / 2;

    while ( start < end )
    {
        if ( vList[mid] < val )
        {
            mid = ( mid + end ) / 2;
            start = mid;
        }
        else if ( vList[mid] > val )
        {
            mid = (start + mid ) / 2;
            end = mid;
        }
        else
        {
            return val;
        }
    }

    return -1;*/

    // 재귀

    return binarySearchR(vList, 0, vList.size(), val);




    /*for ( int j = (vList.size() / 2 ); j < size; j++ )
    {
        if ( vList[j] == val )
        {
            return val;
        }
        else if ( vList[j] < val )
        {
            binarySearch( vList, val)
        }
    }
    return -1;
    */



}

int CSearch::makeHashTable(int* list, int size)
{
    // 1. list를 해시 테이블로 매칭

    int i = 0;
    while ( i <= size )
    { 
        const int index = hashFunction(list[i]);
        Node* new_node = new Node;
        new_node->data = list[i];
        new_node->next = nullptr;

        if ( table[index].data == -1 )
        {
            table[index] = *new_node;
        }
        else
        {
            Node *cur_node = &table[index];
            while ( cur_node->next )
            {
                cur_node = cur_node->next;
            }
            cur_node->next = new_node;
        }
        i++;
    }

    return size;

    /*
    int j = 0;
    Node node;

    while ( j <= 9 )
    {
        table[j++] = node.index;
    }
    
    
    
    int i = 0;
    while ( i <= size )
    { 
        table[j++] = hashFunction(list[i++]);  
    }

    

    int k = 0;
    while ( k <= size )
    {
        node->data = 
    }*/
    
    


}

int CSearch::hashSearch(int val)
{
    // 1. val를 해시 함수를 통해 해시 값으로 변환
    // 2. 해시 값으로 해시 테이블에서 데이터 가져옴
    
    if ( table[hashFunction(val)].data == val )
    {
        return val;
    }
    else
    {
        while (table[hashFunction(val)].next->next != nullptr )
        {
            table[hashFunction(val)] = *table[hashFunction(val)].next;
            if ( table[hashFunction(val)].data == val )
                return val;
        }
    }
    return -1;
}

int CSearch::printHashTable()
{
    // 해시 테이블 출력
    int i = 0;
    while (i <= 9 )
    {
        cout << i << " : ";
        if ( table[i].data == -1 )
        {
            cout << endl;
        }
        else
        {
            Node *cur_node = &table[i];
            while ( cur_node )
            {
                cout << cur_node->data << " ";
                cur_node = cur_node->next;
            }
            cout << endl;
        }
        i++;
    }

    return i;
}

int CSearch::binarySearchR(const std::vector<int>& vList, int start, int end, int val)
{
    if ( start >= end )
        return -1;

    const int mid = (start + end ) / 2;
    if ( vList[mid] == val )
        return val;
    else if ( vList[mid] < val )
        return binarySearchR(vList, mid+1, end, val);
    else
        return binarySearchR(vList, start, mid-1, val);
}

int CSearch::hashFunction(int val)
{
    // 해시 함수
    return (val % 10);
}