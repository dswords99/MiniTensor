//
// Created by Daniel Swords on 25/12/2025.
//

#ifndef TENSOR___TENSOR_H
#define TENSOR___TENSOR_H

#include <vector>
#include <initializer_list>

class Tensor {

private:
    std::vector<int> dimensions;
    std::vector<int> strides;
    std::vector<float> data;

public:
    Tensor(std::initializer_list<int> dims);

    [[nodiscard]] const std::vector<int>& get_dimensions() const { return dimensions; }
    [[nodiscard]] const std::vector<int>& get_strides() const { return strides; }
    [[nodiscard]] const std::vector<float>& get_data() const { return data; }
};

#endif //TENSOR___TENSOR_H
