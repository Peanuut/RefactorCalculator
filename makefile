CC = GCC
OBJS = main.o formulas.o menuIO.o
TEST_OBJS = formulatest.o formulas
SRC_EXT = c
OBJ_EXT = o
TARGET = program
TEST_TARGET = test
UNITY = Unity/src/unity.c
UNITY_H = Unity/src/unity.h

all: test run

main.o: main.c
	$(CC) main.c

menuIO.o: menuIO.c menuIO.h
	$(CC) menuIO.c

formulas.o: formulas.c formulas.h
	$(CC) formulas.c

unity.o: $(UNITY) $(UNITY_H)
	$(CC) $(UNITY)

formulatest.o:formulatest.c
	$(CC) formulatest.c

test: $(TEST_OBJS)
	$(CC) formulatest.o formulas.o -o $(TEST_TARGET)

run: $(OBJS)
	$(CC) main.o formulas.o menuIO.o -o $(TARGET)
