#define BOOST_TEST_MODULE my_test

#include "ip_filter.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(my_test)

BOOST_AUTO_TEST_CASE(test_split)
{
std::vector<std::string> v_test= split("1.1.1.1",'.');   
BOOST_CHECK(v_test.size()==4);
  
std::vector<std::vector<std::string>> pool;
  std::vector<std::string> vct;
  for(int i=0;i<5;++i){
  vct.emplace_back(i);
    vct.emplace_back(i);
      vct.emplace_back(i);
       vct.emplace_back(i);
    pool.emplace_back(vct);
    vct.resize(0);
  }
BOOST_CHECK(pool.size()==5);
}

}



  
