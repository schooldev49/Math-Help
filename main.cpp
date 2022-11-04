#include <iostream>
#include <vector>
#include "Math.hpp"


int main(){
  std::vector<double> inputs {5,7,8,2,2};
  Math math;
 
  std::cout << math.meanAbs(inputs) << "\n";
  return 0;
}
