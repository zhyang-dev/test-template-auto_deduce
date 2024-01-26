#include "Calculator.h"
#include <iostream>

// Error: Function 'add<int, int, int>' with deduced return type cannot be used
//        before it is defined
// ref: // https://blog.csdn.net/weixin_44974875/article/details/123650726


int main() {
  Calculator cal;
  std::cout << cal.add(1, 2, 3) << std::endl;
}