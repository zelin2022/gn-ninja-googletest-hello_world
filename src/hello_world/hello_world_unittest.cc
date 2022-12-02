#include "hello_world.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace hello_world {
// namespace {

using ::testing::HasSubstr;

TEST(HelloWorldTest, ReturnsCorrectString){
  EXPECT_THAT(hello_world::GetHelloWorldString(), HasSubstr("Hello"));
}
// } // namespace 
} // namespace hello_world