// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ip_filter.h"

int main()
{
	try
	{
		type_storage ip_pool;

		for (std::string line; std::getline(std::cin, line);)
		{
			std::vector<std::string> v = split(line, '\t');
			ip_pool.emplace_back(split(v.at(0), '.'));
		}

		// My reverse lexicographically as function
		lexografsort(ip_pool);

		type_storage tmp_storage{};

		//filters as function
		for (auto iter : filter(ip_pool, 1)) { tmp_storage.emplace_back(std::move(iter)); }
		for (auto iter : filter(ip_pool, 4670)) { tmp_storage.emplace_back(std::move(iter)); }
		for (auto iter : filter(ip_pool, 46)) { tmp_storage.emplace_back(std::move(iter)); }

		for (auto iter : tmp_storage) { ip_pool.emplace_back(std::move(iter)); }


		for (const auto& ip : ip_pool)
		{
			for (vector_const_iter ip_part = ip.cbegin(); ip_part != ip.cend(); ++ip_part)
			{
				if (ip_part != ip.begin())
				{
					std::cout << ".";
				}
				std::cout << *ip_part;
			}
			std::cout << std::endl;
		}

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
