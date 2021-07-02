
#include <iostream>
#include "Search.h"

int main()
{
    CSearch search;

    int list[10] = { 15,7,33,98,23,56,77,69,54,10 };
    const auto& result1 = search.linearSearch(list, 75);
    const auto& result2 = search.binarySearch(list, 10, 7);

    search.makeHashTable(list, sizeof(list)/sizeof(int));
    search.printHashTable();
    //const auto& result3 = search.hashSearch(54);

    std::cout << result1 << " " << result2<<std::endl;

    search.hashSearch(15);
    search.hashSearch(16);

    return 0;
}

