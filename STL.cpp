//----------------------------------------------------------
// 2024 STL 3.5 �� 9-10��                        (1-1)
//
// Visual Studio 17.9.0 �̻�, Release/x64
// Project �Ӽ�/std:c++ latest <== �̸����� �ֽ�, SDL �˻� - NO ����
// 
// ���б� ���Ǹ� �����ϴ� save �����
// ----------------------------------------------------------

#include <iostream>
#include "save.h"

#include <format>
#include <random>
using namespace std;
default_random_engine dre;
uniform_int_distribution uid{ 1000,9999 };


//main�� �������� �ʰ� �ǵ���� ����ǰ� change�� �����ϰ� �����϶�

class Dog {//Ŭ�������� �������� ���� �Ǹ��ϴ�.  
private:
    int age;

public:
    Dog(int age) : age(age) {};
    
    friend ostream& operator<<(ostream& os, const Dog& dog) {
        return os << dog.age;
    }
    operator int() {
        return age;
    }
};

template <class T>
void change(T& a, T& b) {// 1,2 ������
    int temp{ a };
    a = b;
    b = temp;
}

int main(){
    int a[1000];
    
    for (int& num : a)
        num = uid(dre);

    for (int num : a)
        cout << format("{:8}", num);
    int largest = 0;
    for (int num : a)
        if (num > largest)largest = num;
    cout << endl << format("{:8}", largest);
    save("stl.cpp");
}



