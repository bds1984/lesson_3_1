#include "ip_filter.h"

std::vector<std::string> split(std::string str, char d)
{
	std::vector<std::string> r;

	std::string::size_type start = 0;
	std::string::size_type stop = str.find_first_of(d);
	while (stop != std::string::npos)
	{
		r.emplace_back(str.substr(start, stop - start));

		start = stop + 1;
		stop = str.find_first_of(d, start);
	}

	r.emplace_back(str.substr(start));

	return r;

}

void lexografsort(type_storage& in_data)
{
	std::sort(in_data.begin(), in_data.end(), [](auto&& frst, auto&& scnd) {

		bool ret_res{ false };
		vector_const_iter iter_frst{};
		vector_const_iter iter_scnd{};

		for (iter_frst = frst.cbegin(), iter_scnd = scnd.cbegin(); iter_frst != frst.cend(), iter_scnd != scnd.cend(); )
		{
			if (std::stoi(*iter_frst) == std::stoi(*iter_scnd)) { ++iter_frst; ++iter_scnd; }

			else if (std::stoi(*iter_frst) > std::stoi(*iter_scnd)) { ret_res = true; break; }

			else { ret_res = false; break; }
		}
		return ret_res;
		});
}
