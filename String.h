//-------------------------------------------------------
// String.h STL ������ �����ϱ� ���� Ŭ����
// 
// 2024/4/2 ����
//-------------------------------------------------------

#pragma once
#include <memory>
#include <iostream>


class String {
    size_t len{};
    std::unique_ptr<char[]> p;//-> ����Ʈ ���� ������ �ȵ�� �ϰ� ����. ����� ���� �Ҹ��� �����.
    size_t id{};
public:
    //����Ʈ ������2024.4.2
    String();

    String(const char* s);
    //�Ҹ��ڸ� �����Ϸ��� �ڵ��ߴ�. - 2024-4-2
    ~String();
    //��������� �����Ҵ� - 2024.4.2
    String(const String&);
    String& operator = (const String&);
    bool operator == (const String&);
    //�̵� ������ �̵� �Ҵ� -2024.4.2
    String(String&&)noexcept;
    String& operator=(String&&)noexcept;


    //sort �� getLen 2024.4.2
    size_t getLen() const;
    friend std::ostream& operator<<(std::ostream& os, const String& s) {
        for (size_t i = 0; i < s.len; ++i)
            os << s.p.get()[i];
        return os;
    }
    // p�� ����Ű�� �޸𸮸� ������ 2024.4.2
    char* getMem() const;
    friend std::istream& operator>>(std::istream& is, String& s);

    bool operator<(const String& rhs)const;
private:
    static size_t uid; // -> �̰� �� Ȯ���ϱ�

};