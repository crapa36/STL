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
	//읽을 파일 열기
	std::ifstream in{ filename.data() };
	if (!in)
	{
		std::cout << "파일을 열 수 없습니다" << std::endl;
		exit(0);
	}
	// 쓸파일을 덮붙이기모드로 연다
	std::ofstream out("STL_강의저장.txt", std::ios::app);
	//저장된 시간을 파일에 기록
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);      //utc
	auto lt = std::localtime(&time);                     //현지시간

	auto old = out.imbue(std::locale("ko_KR"));
	out << std::endl << std::endl;
	out << "====================" << std::endl;
	out << filename << std::put_time(lt, ", 저장시간 : %x %A %X ") << std::endl;
	out << "====================" << std::endl;

	out.imbue(old);
	// 읽을파일의 모든 내용을 쓸파일에 쓴다
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}
