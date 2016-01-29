#!/bin/bash
# Time-stamp: <2016-01-28 15:02:23 dmendyke>
# Author: Daniel Mendyke [daniel@mendyke.com]

dep=${1%.*}.d
obj=${1%.*}.o
g++ -std=c++11 -c -MM -MT ${obj} -MT ${dep} -MF ${dep} $1
#echo -e "\t\$(CC) \$(CCFLAGS) -c -o ${obj} \$<" >> ${dep}
