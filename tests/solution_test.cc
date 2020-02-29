#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RearrangeTest, ReturnRearrangedVector) {
  vector<int> v={9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  int i=9;
  Solution s;
  s.arrange_vector(v,i);
  vector<int> actual =  v;
  vector<int> expected = {5, 2, 3, 6, 12, 7, 14, 9, 10, 11};
  EXPECT_EQ(expected, actual);
}
TEST(RearrangeTest, ReturnRearrangedEmptyVector) {
  vector<int> v={};
  int i=9;
  Solution s;
  s.arrange_vector(v,i);
  vector<int> actual =  v;
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}