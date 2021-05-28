#pragma once
#include "classMatrix.hpp"

class methodJacobi : Matrix {
    float getIterationResult(int);
    void printIteration();
public:
    methodJacobi (int, float, vector<vector<float>>&, vector<float>&);
    
    bool Iteration();
};

