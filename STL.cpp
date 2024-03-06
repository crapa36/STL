//----------------------------------------------------------
// 2024 STL 3.5 월 9-10시                        (1-1)
//
// Visual Studio 17.9.0 이상, Release/x64
// Project 속성/std:c++ latest <== 미리보기 최신, SDL 검사 - NO 끄기
// 
// 한학기 강의를 저장하는 save 만들기
// ----------------------------------------------------------

#include <iostream>
#include "save.h"

#include <format>
#include <random>
using namespace std;
default_random_engine dre;
uniform_int_distribution uid{ 1000,9999 };


//main을 수정하지 않고 의도대로 실행되게 change를 선언하고 정의하라

class Dog {//클래스에서 이정도만 쓰면 훌륭하다.  
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
void change(T& a, T& b) {// 1,2 스와핑
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



