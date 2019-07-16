#pragma once
#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using vector_const_iter=std::vector<std::string>::const_iterator;
using type_storage=std::vector<std::vector<std::string> >;

std::vector<std::string> split(std::string str, char d);
void lexografsort(type_storage& in_data);// My reverse lexicographically as function


//filters as function
template <typename T>T filter(T in_pool, int key) {

	T ip_pool_filter;        //temporary storage for filter 
	ip_pool_filter.reserve(in_pool.size());

	switch (key)
	{
	case 1:
		for (const auto iter : in_pool) {
			if (std::stoi(*iter.cbegin()) == 1) { ip_pool_filter.emplace_back(iter); }
		}
		break;

	case 4670:
		for (const auto iter : in_pool) {
			if (std::stoi(*iter.cbegin()) == 46 && std::stoi(*(iter.cbegin() + 1)) == 70) { ip_pool_filter.emplace_back(iter); }
		}
		break;

	case 46:
		for (const auto iter : in_pool) {
			if (
				std::stoi(*iter.cbegin()) == 46 ||
				std::stoi(*(iter.cbegin() + 1)) == 46 ||
				std::stoi(*(iter.cbegin() + 2)) == 46 ||
				std::stoi(*(iter.cbegin() + 3)) == 46
				) {
				ip_pool_filter.emplace_back(iter);
			}
		}
	default:
		break;
	}

	return ip_pool_filter;
}


