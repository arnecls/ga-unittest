#include "gtest/gtest.h"
#include "defer.h"

TEST(defer, main) {
	auto result = 1;
	auto func = [&result]() {
		result = 2;
	};

	{
		defer(func);
	}

	EXPECT_EQ(2, result);
}