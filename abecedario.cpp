#pragma once
#include <string>
#include "tads/hash_func.cpp"

class hashAbc : public hashFunc<int*> {
public:
    int hash(int* registro) override {
        int cuento = 0;

        for (int i = 0; i < 26; i++) {
            cuento = cuento * 31 + registro[i];
        }

        return cuento;
    }

    int* abc(std::string registro){
      int* ret = new int[26]();
      for (char c : registro) {
        ret[c - 'a']++;
      }
      return ret;
    }
};
