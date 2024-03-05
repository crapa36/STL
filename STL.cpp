//----------------------------------------------------------
// 2024 STL 3.5 월 9-10시                        (1-1)
//
// Visual Studio 17.9.0 이상, Release/x64
// Project 속성/std:c++ latest <== 미리보기 최신, SDL 검사 - NO 끄기
// 
// 한학기 강의를 저장하는 save 만들기
// ----------------------------------------------------------

#include <iostream>
#include "save.cpp"
using namespace std;

//main을 수정하지 않고 의도대로 실행되게 change를 선언하고 정의하라

void change(int& a, int& b) {// 1,2 스와핑
    int temp{ a };
    a = b;
    b = temp;
}

class Dog {
public:
    Dog(int a) {
        num = a;
    }

    /*Dog operator=(Dog& ref){
        num = ref.num;
    }*/
    /*void change(Dog& a, Dog& b) {
        Dog temp{ a };
        a = b;
    }*/
    operator int() {
        return(num);
    }
private:
    int num;

};

void change(Dog& a, Dog& b);

int main()
{
    Dog a{ 1 }, b{ 2 };
    change(a, b);
    cout << a << ", " << b << endl;

    //save("save.h");
    //save("save.cpp");
    save("STL.cpp");
}