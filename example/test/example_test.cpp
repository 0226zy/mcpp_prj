// =========================================================
// File:        example_test.cpp
// Created:     2024-06-22 17:00:41 CST
// Author:      0226zy
// Description: 
// =========================================================
#include <gtest/gtest.h>
#include "src/example.h"

TEST(ExampleTest, StringTest) {
  Example e;
  EXPECT_EQ(e.String(), "Hello World!!!");
}
