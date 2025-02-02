// Copyright 2022 NNTU-CS
#include <cstdint>
#include <math.h>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i <= sqrt(value); i++) {
      if (value % i == 0)
        return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t t = 0;
  for (uint64_t i = 0 ; i < n; i++) {
    if (checkPrime(i))
      t = i;
  }
  return t;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t n = 1;
  while (1) {
    if (checkPrime(value + n)) {
      return value + n;
      break;
    }
  n++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 0; i < hbound; i++) {
    if (checkPrime(i))
      sum += i;
  }
  return sum;
}
