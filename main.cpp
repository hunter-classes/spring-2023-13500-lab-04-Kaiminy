#include <iostream>
#include "tasks.h"



int main(){
  box(3,5);
  std::cout << "box(3,5):\n";
  std::cout << "\n------------------\n";


  
  checkerboard(8,9);
  std::cout << "checkerboard(8,9):\n";
  std::cout << "\n------------------\n";

  //cross(6);
  cross(6);
  std::cout << "cross(6):\n";
  std::cout << "\n------------------\n";

  //lower
  lower(6);
  std::cout << "lower(6):\n";
  std::cout << "\n------------------\n";

  //upper
  upper(5);
  std::cout << "upper(5):\n";
  std::cout << "\n------------------\n";

  //trapezoid
  trapezoid(12,5);
  std::cout << "trapezoid(12,5):\n";
  std::cout << "\n------------------\n";

  //checkerboard3x3
  checkerboard3x3(27,27);
  std::cout << "checkerboard3x3(16,11):\n";
  std::cout << "\n------------------\n";
  
}
