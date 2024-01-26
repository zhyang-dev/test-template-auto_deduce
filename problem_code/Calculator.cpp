#include "Calculator.h"

Calculator::Calculator() {}

template <typename... Args> auto Calculator::add(Args... args) {
  return (args + ... + 0);
}

template auto Calculator::add(int, int, int);