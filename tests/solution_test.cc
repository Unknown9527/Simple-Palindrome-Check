#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

//Test SimplePalindrome
TEST(SimplePalindromeNumOdd, SimplePalindromeNumOdd) {
  Solution solution;
  EXPECT_EQ(solution.SimplePalindrome("13531"), "True");
}

TEST(SimplePalindromeNumEven, SimplePalindromeNumEven) {
  Solution solution;
  EXPECT_EQ(solution.SimplePalindrome("246642"), "True");
}

TEST(SimplePalindromeWord, SimplePalindromeWord) {
  Solution solution;
  EXPECT_EQ(solution.SimplePalindrome("madam"), "True");
}

TEST(SimplePalindromeWord2, SimplePalindromeWord2) {
  Solution solution;
  EXPECT_EQ(solution.SimplePalindrome("racecar"), "True");
}

//Test False situation
TEST(SimplePalindromeFalse, SimplePalindromeFalse) {
  Solution solution;
  EXPECT_EQ(solution.SimplePalindrome("EE599IsEasy"), "False");
}

//ApproximatePalindrome
TEST(ApproximatePalindromeTest, ApproximatePalindromeTest) {
  Solution solution;
  EXPECT_EQ(solution.ApproximatePalindrome("A man, a plan, a canal, Panama!"), "True");
}

TEST(ApproximatePalindromeTest2, ApproximatePalindromeTest2) {
  Solution solution;
  EXPECT_EQ(solution.ApproximatePalindrome("Was it a car or a cat I saw?"), "True");
}

TEST(ApproximatePalindromeTest3, ApproximatePalindromeTest3) {
  Solution solution;
  EXPECT_EQ(solution.ApproximatePalindrome("No 'x' in Nixon"), "True");
}

//Test False situation
TEST(ApproximatePalindromeFalse, ApproximatePalindromeFalse) {
  Solution solution;
  EXPECT_EQ(solution.ApproximatePalindrome("EE599 is really EASY!"), "False");
}



