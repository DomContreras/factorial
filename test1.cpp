#include"factorial.cpp"
#include"gtest/gtest.h"

TEST( FactorialTest, HandlesZeroInput ){
	EXPECT_EQ(24, func(4));
//	EXPECT_EQ(6, func(3));
//	EXPECT_EQ(2, func(2));
//	EXPECT_EQ(1, func(1));
//	EXPECT_EQ(1, func(0));	
}

int main( int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	}

