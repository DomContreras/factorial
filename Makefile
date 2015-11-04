CC = nvcc
CFLAGS = 
LIBS =-lgtest -lpthread

gtest_test: test1.cpp factorial.cpp
	$(CC) -o gtest_test test1.cpp $(LIBS)


