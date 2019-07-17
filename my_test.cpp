#define BOOST_TEST_MODULE my_test

#include "ip_filter.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(my_test)

BOOST_AUTO_TEST_CASE(test_split)
{
std::vector<std::string> v_test= split("1.1.1.1",'.');   
BOOST_CHECK(v_test.size()==4);
}

BOOST_AUTO_TEST_CASE(test_lexograf)
{  
std::vector<std::vector<std::string>> pool;
std::vector<std::string> vct;
  for(int i=0;i<5;++i){
  vct.emplace_back(std::to_string(i));
    vct.emplace_back(std::to_string(i));
      vct.emplace_back(std::to_string(i));
       vct.emplace_back(std::to_string(i));
    pool.emplace_back(vct);
vct.resize(0);
  }
lexografsort(pool); 
  vct.resize(0);
  int x{4}
for(int i=0;i<5;++i){
 vct=pool[i];
BOOST_CHECK(std::stoi(vct[1])==x);
  --x;
} 


}
}



  
