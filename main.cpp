
#include <iostream>
#include <vector>
#include <string>
#include "Math.hpp"
#include <sstream>
enum questionType {
  meanAbs
};

int main(){
  
  std::string s;
  std::vector<double> inputs;
  std::cout << "Enter the digits in the data, seperated by commas: ";
  std::cin >> s;
  std::stringstream ss(s);
  while (ss.good()){
    std::string substring;
    std::getline(ss,substring,',');
    inputs.push_back(std::stod(substring));
  }
  Math math;
 std::cout << math.meanAbs(inputs) << "\n";
  return 0;
}
