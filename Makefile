# Time-stamp: <2016-01-29 16:00:51 daniel>
# Author: Daniel Mendyke [daniel@mendyke.com]

#
# Makefile: Build system for sample
#

## Macros
RM := /bin/rm
CC := /usr/bin/g++
CCFLAGS := -std=c++11 -g
SH := /bin/bash
VAL := /usr/bin/valgrind

## Special Rules
%.d : %.cc ; $(SH) dep.sh $<
%.o : %.cc ; $(CC) $(CCFLAGS) -o $@ -c $<

## Variables
target = exercise
src = main.cc application.cc stack.cc fifo.cc
objs = $(src:.cc=.o)
deps = $(src:.cc=.d)

## default target
all : $(target) $(deps) ; @echo Build Complete

## Run with valgrind
run : $(target) ; $(VAL) ./$(target)

## add rules for each object
include $(deps)

## clean: remove target and object files
## nuke: remove everything built by 'make'
.PHONEY: clean
clean : ; $(RM) --force $(objs)
nuke : clean ; $(RM) --force $(deps) $(target)

## build main target
$(target) : $(objs) ; $(CC) $(CCFLAGS) -o $@ $^
