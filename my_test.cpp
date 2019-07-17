#define BOOST_TEST_MODULE my_test

#include "ip_filter.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(my_test)

BOOST_AUTO_TEST_CASE(test_split)
{
std::vector<std::string> v_test= split("1.1.1.1",'.');   
BOOST_CHECK(v_test.size()==4);
}

BOOST_AUTO_TEST_CASE(test_loxograf)
{
  type_storage pool;
  std::vector<std::string> vct;
  for(int i=0;i<5;++i){
  vct.emplace_back(i);
    vct.emplace_back(i);
      vct.emplace_back(i);
       vct.emplace_back(i);
    pool.emplace_back(vct);
    vct.resize(0);
  }
lexografsort(pool);  
 int i{4}; 
  for (const auto iter : pool){
   BOOST_CHECK(std::stoi(*iter.cbegin())==i)  
     --i;
  }

}

}
