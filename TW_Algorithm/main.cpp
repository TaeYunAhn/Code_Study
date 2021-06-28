#include <iostream>
#include <vector>
#include "Recursive.h"
#include "Sort.h"

using namespace std;

int main()
{
    CRecursive recursive;
    printf("%d\n", recursive.sum(12));
    printf("%d\n", recursive.fibonacci(7));
    //printf("원반 개수 입력:");
    //int N = 0;
    //std::cin >> N;
    recursive.hanoi(3, 1,2,3);

    printf("\n");
    recursive.hanoi(2, 1,3,2);
    recursive.hanoi(2, 2,1,3);


    CSort sort;
    vector<int> list = {21, 10, 12, 20, 25, 13};
    sort.merge_sort(list, 0, list.size()-1);

    for ( const auto& data : list )
        cout << data << " ";

    cout << "\n";


}