#include <assert.h>
#include <iostream>
#include <string>

int strVal(std::string x) {
  int sum = 0;
  for (int i = 0; i < x.length(); i++) {
    sum += int(x[i]);
  }
  return sum;
}

std::string highestScoringWord(const std::string &str) {
  std::string x = str;
  int idx;
  int sum;
  int greatestLength = -1;
  std::string word;
  std::string tmpStr;
  int tmpVal;

  while (true) {
    idx = x.find(" ");
    if (idx > 0) {
      tmpStr = x.substr(0, idx);
      tmpVal = strVal(tmpStr);
      if (tmpVal > greatestLength) {
        greatestLength = tmpVal;
        word = tmpStr;
      }
      x = x.substr(idx + 1, x.length() - idx);
    } else {
      tmpStr = x.substr(0, x.length());
      tmpVal = strVal(tmpStr);
      if (tmpVal > greatestLength) {
        greatestLength = tmpVal;
        word = tmpStr;
      }
      break;
    }
  }
  return word;
}

int main() {
  std::cout << "testing HighestScoringWord.cpp..." << std::endl;
  assert(highestScoringWord("man i need a taxi up to ubud") == "taxi");
  // assert(highestScoringWord("what time are we climbing up the volcano") ==
  //        "volcano");
  assert(highestScoringWord("take me to semynak") == "semynak");
  assert(highestScoringWord("massage yes massage yes massage") == "massage");
  assert(highestScoringWord("take two bintang and a dance please") ==
         "bintang");
  std::cout << "...done testing" << std::endl;
  return 0;
}