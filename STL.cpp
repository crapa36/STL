//---------------------------------------------------------
// 2024 1�б� STL 5�� 13�� ȭ����
// 
// �˰��� �Լ��� �ݺ��ڸ� ���ڷ� �޴´�.
//---------------------------------------------------------
#include <iostream>
#include "save.h"
#include "string.h"
#include <fstream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;
extern bool ����;


int main(){
    save("STL.cpp");
    map<String, list<String>> m{ { "���̺�",{"������","�����","�̼�","����","����","����"}} };
    m.insert(pair<String, list<String>> { "����ũ", { "����","����","����","����" } });
    m.insert(make_pair("������", list<String>{"������"}));
}