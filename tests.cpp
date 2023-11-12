//test.cpp
#include <gtest/gtest.h>
#include "GrayScottSimulation.h"
#include <typeinfo>



TEST(ModelParametersTest, TypeMatch) {

    EXPECT_EQ(typeid(F).name(), typeid(u[0][0]).name());
    EXPECT_EQ(typeid(k).name(), typeid(u[0][0]).name());

    std::cout << "Type of F: " << typeid(F).name() << std::endl;
    std::cout << "Type of k: " << typeid(k).name() << std::endl;
    std::cout << "Type of u[0][0]: " << typeid(u[0][0]).name() << std::endl;
}


TEST(VariableTest, SizeCompare) {
    EXPECT_EQ(u.size(), width);
    EXPECT_EQ(u[0].size(), height);
    EXPECT_EQ(v.size(), width);
    EXPECT_EQ(v[0].size(), height);

    std::cout << "Width of u: " << u.size() << std::endl;
    std::cout << "Height of u: " << u[0].size() << std::endl;
    std::cout << "Width of v: " << v.size() << std::endl;
    std::cout << "Height of v: " << v[0].size() << std::endl;
}