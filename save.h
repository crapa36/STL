#pragma once
#include <iostream>
#include <string>
#include <string_view>
#include <fstream>
#include <vector>
#include <algorithm>
#include <chrono>

#define _CRT_SECURE_NO_WARNINGS

void save(std::string_view filename) {
	//sudo
	//���� ���� ����
	std::ifstream in{ filename.data() };
	if (!in)
	{
		std::cout << "������ �� �� �����ϴ�" << std::endl;
		exit(0);
	}
	// �������� �����̱���� ����
	std::ofstream out("STL_��������.txt", std::ios::app);
	//����� �ð��� ���Ͽ� ���
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);      //utc
	auto lt = std::localtime(&time);                     //�����ð�

	auto old = out.imbue(std::locale("ko_KR"));
	out << std::endl << std::endl;
	out << "====================" << std::endl;
	out << filename << std::put_time(lt, ", ����ð� : %x %A %X ") << std::endl;
	out << "====================" << std::endl;

	out.imbue(old);
	// ���������� ��� ������ �����Ͽ� ����
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}
