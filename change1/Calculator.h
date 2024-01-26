#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
  Calculator();
  template <typename... Args> auto add(Args... args);
};

Calculator::Calculator() {}

template <typename... Args> auto Calculator::add(Args... args) {
  return (args + ... + 0);
}

#endif // CALCULATOR_H
