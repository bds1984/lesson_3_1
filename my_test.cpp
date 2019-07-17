#define BOOST_TEST_MODULE my_test

#include "ip_filter.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(my_test)

BOOST_AUTO_TEST_CASE(test_split)
{
std::vector<std::string> v_test= split("1.1.1.1",'.');   
BOOST_CHECK(v_test.size()==4);
}

}
