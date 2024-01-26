#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
  Calculator();
  template <typename... Args> auto add(Args... args);
};

#endif // CALCULATOR_H
