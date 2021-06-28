
#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <stack>
#include <queue>


//// C++ STL

//// STRING
// string( char -> std::string)

//// DATA STRUCTURE
// array( [] -> std::array, std::vector ) - sequence container
// map( -> std::set, std::map ) - relative container
// pair( -> std::pair )
// stack
// queue


int main()
{
    // array
    std::array<std::string, 10> stdArray;
    stdArray.fill("a");

    for ( std::array<std::string, 10>::iterator itr=stdArray.begin(); itr != stdArray.end(); itr++ )
    {
        std::cout << *itr << " ";
    }

    for ( std::string d : stdArray )
    {
        std::cout << d << " ";
    }

    std::array<std::string, 10>::iterator itrBegin = stdArray.begin();
    std::array<std::string, 10>::iterator itrBegin3 = stdArray.begin()+3;

    // vector
    std::vector<std::string> stdVector;
    stdVector.clear();
    stdVector.push_back("a");
    stdVector.push_back("b");
    stdVector.push_back("c");
    stdVector.erase(stdVector.begin()+2);
    
    for ( const std::string& d : stdVector )
    {
        std::cout << d << " ";
    }

    const auto& itrVec = std::find(stdVector.begin(), stdVector.end(), "z");
    if ( itrVec == stdVector.end() ) // not found
    {

    }
    else // found
    {

    }

    if ( std::count(stdVector.begin(), stdVector.end(), "z") > 0 ) // found
    {

    }
    else // not found
    {

    }

    // map
    std::map<std::string, double> stdMap;
    stdMap["박지상"] = 180;
    stdMap["안태윤"] = 170;

    std::pair<std::string, double> pair1("차승원", 188);
    std::cout<< pair1.first << std::endl;   // key("차승원")
    std::cout<< pair1.second << std::endl; // value(188)
    stdMap.insert(pair1);

    stdMap.insert(std::make_pair("이수근", 160));
    stdMap["박지상"] = 190;

    auto itr = stdMap.find("박지상");
    // stdMap.count("차승원");
    if ( itr == stdMap.end() ) // not found
    {
        std::cout << "not found" << std::endl;
    }
    else
    {
        itr->first;
        itr->second;
    }
    

    // stdMap.size()  // 4
    for ( const auto& a : stdMap )
    {
        std::cout << "KEY: " << a.first << " VALUE: " << a.second << std::endl;
    }


    // set
    std::set<std::string> stdSet;
    stdSet.insert("a");
    stdSet.insert("a");
    stdSet.insert("a");
    stdSet.insert("a");
    
    //*stdSet.begin();

    for ( const auto& a : stdSet )
    {
        std::cout << a;
    }
    
    auto a = 1.1;

    // string
    char abc[] = "abc";
    const char* abc2 = "abc2";

    std::string temp(abc);
    temp = abc;
    const char* asdsad = temp.c_str();

    std::cout << temp << std::endl;

    printf("%s", temp.c_str());
}


struct NODE {             // 연결 리스트의 노드 구조체
    struct NODE *left;    // 다음 노드의 주소를 저장할 포인터
    struct NODE *right;
    int key;             // 데이터를 저장할 멤버
    int data;             // 데이터를 저장할 멤버
};

int insertAt(NODE* head, NODE* tail, int idx, NODE* new_node)
{
    NODE* cur_node = head;
    for ( int i = 0; i < idx; i++ )
    {
        cur_node = cur_node->next;
    }

    new_node->next = cur_node->next;
    cur_node->next = new_node;
}

void print(NODE* head)
{
    NODE* cur_node = head;
    while ( cur_node->next != NULL )
    {
        printf(cur_node.data)
    }
}

int main()
{
    NODE* head = nullptr;
    NODE* tail = nullptr;
    NODE node1(10);
    head = &node1;
    tail = &node1;

    NODE node2(20);
    head->next = &node2;
    tail = &node2;

    NODE node3(30);
    node2.next = &node3;
    tail = &node3;

    NODE node4(40);
    insertAt(1, &node4);
}
