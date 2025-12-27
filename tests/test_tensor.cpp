#include <gtest/gtest.h>
#include "../Tensor.h"

TEST(TensorConstructor, Handles3DTensor) {
    Tensor t = {3, 4, 5};

    std::vector<int> expected_shape = {3, 4, 5};
    EXPECT_EQ(t.get_dimensions(), expected_shape);

    std::vector<int> expected_strides = {20, 5, 1};
    EXPECT_EQ(t.get_strides(), expected_strides);

    EXPECT_EQ(t.get_data().size(), 60);


    EXPECT_EQ(t.get_data()[0], 0.0f);
    EXPECT_EQ(t.get_data()[59], 0.0f);
}

TEST(TensorConstructor, Handles1DTensor) {
    Tensor t = {10};

    std::vector<int> expected_strides = {1};
    EXPECT_EQ(t.get_strides(), expected_strides);
    EXPECT_EQ(t.get_data().size(), 10);
}


TEST(TensorConstructor, Handles2DMatrix) {
    Tensor t = {10, 20};


    std::vector<int> expected_strides = {20, 1};
    EXPECT_EQ(t.get_strides(), expected_strides);
    EXPECT_EQ(t.get_data().size(), 200);
}