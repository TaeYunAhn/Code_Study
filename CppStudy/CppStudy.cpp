#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>
#include "Person.h"

// std를 이용해서 기존의 문자열, 배열 처리를 대체(string, array, vector, map)
// new, delete
// 클래스


void c_print(char* str)
{
    printf("%s\n", str);
}

void cpp_print(std::string str)
{
    std::cout << str << std::endl;
}

void introduce(CPerson* person)
{
    person->introduce();
}


int main()
{
    // 문자열
    // https://en.cppreference.com/w/cpp/string/basic_string
    char c_str[20] = "This is c_str";

    std::string cpp_str = "This is cpp_str";
    cpp_str = "GangNam";

    c_print(c_str);
    cpp_print(cpp_str);
    cpp_print(c_str);
    
    // new, delete
    int* c_int = (int*)malloc(sizeof(int)); // 변수 동적할당
    int* c_int2 = (int*)malloc(sizeof(int) * 3); // 배열 동적할당

    char* c_char = (char*)malloc(sizeof(char) * 64);

    free(c_int);
    free(c_int2);


    int* cpp_int = new int; // 변수 동적할당
    int* cpp_int2 = new int[3]; // 배열 동적할당

    CPerson* IU = new CPerson;
    delete(IU);
    
    delete(cpp_int);
    delete[](cpp_int2);
    
    
    // 기존 배열을 대체할 수 있는 std 자료구조
    // array(정적 길이 배열)
    std::array<int, 10> std_arr;
    std::array<int, 5> std_arr2 = { 0, 1, 2, 3, 4};
    std::array<std::string, 5> std_arr3 = {"a", "b", "c", "d", "e"};
    std_arr3[2] = "Teayun";

    std_arr[0] = 5;

    std_arr.empty();
    std_arr.fill(5);
    std_arr.size();


    // vector(가변 길이 배열)
    std::vector<int> std_vec = { 1,2,3 };
    std::vector<std::string> std_vec2 = { "a", "b", "c" };
    std_vec.push_back(4); // 삽입
    std_vec2.push_back("dddd");

    std_vec[1]; // 접근
    std_vec[1] = 5; // 수정
    std_vec.erase(std_vec.begin()+ 1); // 삭제

    std_vec.empty();
    std_vec.clear();
    std_vec.size();


    // map(연관 컨테이너)
    std::map<int, double> std_map;
    std::map<std::string, int> std_map2;
    std_map[3] = 5.0; // 삽입
    std_map[23] = 5.8;

    std_map2["TW"] = 5;
    std_map2["JS"] = 3;

    std::string strPSY = "PSY";
    std_map2[strPSY] = 8;

    std_map[3]; // 5.0
    std_map2["TW"]; // 5;
    std_map2["aa"]; // ERROR

    std_map2["TW"] = 7;

    std_map2.erase("TW");
    std_map2.size();
    std_map2.empty();
    std_map2.clear();


    //클래스
    // CPserson -> 클래스
    CPerson teayun; // teayun -> 인스턴스 / 객체
    teayun.weight = 60;
    teayun.height = 170;
    teayun.name = "태윤";
    teayun.eat();
    teayun.sleep();
    introduce(&teayun);

    CPerson jisang; // jisang -> 인스턴스 / 객체
    jisang.weight = 70;
    jisang.height = 180;
    jisang.walk();
    jisang.study();
    jisang.introduce();


    return 0;
}