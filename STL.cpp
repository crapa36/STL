//----------------------------------------------------------
// 2024 STL 3.5 �� 9-10��                        (1-1)
//
// Visual Studio 17.9.0 �̻�, Release/x64
// Project �Ӽ�/std:c++ latest <== �̸����� �ֽ�, SDL �˻� - NO ����
// 
// ���б� ���Ǹ� �����ϴ� save �����
// ----------------------------------------------------------

#include <iostream>
#include "save.cpp"
using namespace std;

//main�� �������� �ʰ� �ǵ���� ����ǰ� change�� �����ϰ� �����϶�

void change(int& a, int& b) {// 1,2 ������
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