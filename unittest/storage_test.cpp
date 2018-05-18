#include "gtest/gtest.h"
#include "storage.h"

TEST(storage, set) {
	util::CStorage storage;

	EXPECT_EQ(util::CStorage::NotFound, storage.Get("test"));

	storage.Set("test", "test");

	EXPECT_EQ("test", storage.Get("test"));
}