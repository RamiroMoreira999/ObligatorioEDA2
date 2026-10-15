#pragma once
#include <string>


int* abc(std::string registro){
  int* ret = new int[26];
  for (char c : registro) {
    ret[c - 'a']++;
  }
  return ret;
}

