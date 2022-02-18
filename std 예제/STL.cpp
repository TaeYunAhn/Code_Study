#include "STL.h"
#include <vector>
#include <set>
#include <map>
#include <string>
#include <iostream>

int main()
{
    std::set<std::string> s;

    s.insert("a");
    s.insert("b");
    s.insert("c");
    s.insert("d");
    s.insert("a");
    s.erase("b");

    for (const auto &e : s)
    {
        std::cout << e << std::endl;
    }

    std::cout << s.empty() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << std::endl;

    // --------------------------------
    std::map<std::string, double> attack;

    // insert-1
    attack["marine"] = 6.0;
    attack["firebat"] = 8.0;

    // insert-2
    std::pair<std::string, double> tt("zergling", 5.0);

    std::cout << tt.first << " " << tt.second << std::endl;
    attack.insert(tt);
    attack.insert(std::make_pair("dragoon", 10.0));

    std::cout << attack["dragoon"] << std::endl;
    std::cout << attack["zergling"] << std::endl;

    std::vector<std::string> highAttacker;
    for (const auto &a : attack)
    {
        std::cout << a.first << " " << a.second << std::endl;
        if (a.second > 5)
            highAttacker.push_back(a.first);
    }

    for (std::vector<std::string>::iterator itr = highAttacker.begin(); itr != highAttacker.end(); itr++)
        std::cout << *itr << std::endl;

    for (const auto &h : highAttacker)
        std::cout << h << std::endl;

    const auto &itr1 = attack.begin() + 2;
    while (itr1 != attack.end())
    {
        std::cout << itr1->first << ": " << itr1->second << std::endl;
        itr1++;
    }

    const auto itr = attack.find("zerglin");
    if (itr == attack.end())
    {
        std::cout << "no result" << std::endl;
    }
    else
    {
        std::cout << "zergling: " << itr->second << std::endl;
    }

    std::cout << attack.size() << std::endl;
    std::cout << attack.count("dragoon") << std::endl;
    std::cout << attack.count("zerg") << std::endl;
    std::cout << attack.empty() << std::endl;

    return 0;
}