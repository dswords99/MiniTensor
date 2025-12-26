//
// Created by Daniel Swords on 25/12/2025.
//

#ifndef TENSOR___TENSOR_H
#define TENSOR___TENSOR_H

#include <vector>

class Tensor {
    std::vector<int> dimensions;
    std::vector<int> strides;
    std::vector<float> data;
};

#endif //TENSOR___TENSOR_H
