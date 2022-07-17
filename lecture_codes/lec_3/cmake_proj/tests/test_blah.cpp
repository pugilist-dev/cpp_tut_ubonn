#include <gtest/gtest.h>

#include "hello.h"
#include "world.h"

TEST(TestHello, OutputTest){
	EXPECT_EQ(1,Sum(1,1));
}