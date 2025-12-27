#include <initializer_list>
#include "Tensor.h"

Tensor::Tensor(std::initializer_list<int> dims) : dimensions(dims) {
    auto n = dimensions.size();
    strides = std::vector<int>(n);

    strides[n - 1] = 1;

    for (int i = n - 2; i >= 0; --i) {
        strides[i] = dimensions[i + 1] * strides[i + 1];
    }

    data = std::vector<float>(strides[0] * dimensions[0]);
}