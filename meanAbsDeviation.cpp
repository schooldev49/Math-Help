
#include <vector>
#include <iostream>
#include "Math.hpp"
double Math::meanAbs(std::vector<double> inputs){
    int size = inputs.size();

    double sum = 0;
    double sum2 = 0;

  for (int i=0; i<size; i++){
    sum += inputs[i];
    
  }

  sum /= size;

  for (  int i=0; i<size; i++){
   
    sum2 += inputs[i] - sum >= 0 ? inputs[i] - sum : -(inputs[i] - sum);


  }

  sum2 /= size;

  return sum2;
}
