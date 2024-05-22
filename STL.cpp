//---------------------------------------------------------
// 2024 1학기 STL 5월 13일 화요일
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
//---------------------------------------------------------
#include <iostream>
#include "save.h"
#include "string.h"
#include <fstream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;
extern bool 관찰;


int main(){
    save("STL.cpp");
    map<String, list<String>> m{ { "아이브",{"안유진","장원영","이서","리즈","레이","가을"}} };
    m.insert(pair<String, list<String>> { "블랙핑크", { "제니","지수","로제","리사" } });
    m.insert(make_pair("아이유", list<String>{"아이유"}));
}