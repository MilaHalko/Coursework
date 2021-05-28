#pragma once
#include "classMatrix.hpp"

class methodGradient : Matrix {
    float getIterationResult(int);
    void printIteration();
    vector<int> v;
public:
    methodGradient (int, float, vector<vector<float>>&, vector<float>&);
    ~methodGradient();
    
    bool Iteration();
};
