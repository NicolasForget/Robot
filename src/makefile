#=======================================================================
# 	Analyse et conception
#		makefile
#-----------------------------------------------------------------------
#	Nicolas Forget - Ying Jiang
# 		Si4 G1
#=======================================================================

INCL_DIR = .
INCL = -I$(INCL_DIR) 
DEFS = 

CC = g++ 
CFLAGS = -g -Wall -std=c++0x
CC_COMPILE = $(CC) $(CFLAGS) $(INCL) $(DEFS)

#-----------------------------------------------------------------------

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = simulateur_robot

#-----------------------------------------------------------------------

all : $(EXEC)

%.o :	%.cpp
	$(CC_COMPILE) -o $*.o -c $*.cpp

simulateur_robot : $(OBJ)
	$(CC_COMPILE) -o $@ $^

#-----------------------------------------------------------------------

clean :
	-rm -f *.o a.out *~ $(EXEC)
