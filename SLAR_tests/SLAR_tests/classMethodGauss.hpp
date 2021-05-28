#pragma once
#include "classMatrix.hpp"

class methodGauss : Matrix {
    float getIterationResult(int);
    void printIteration();
public:
    methodGauss (int, float, vector<vector<float>>&, vector<float>&);
    
    bool Iteration();
};
