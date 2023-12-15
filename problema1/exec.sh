#!/usr/bin/bash
g++ testbench.cpp -O0
for i in {1..10}; 
do
	echo "Caso teste $i"
	./a.out < $i.txt
done;
rm a.out

