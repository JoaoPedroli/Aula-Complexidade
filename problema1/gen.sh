#!/usr/bin/bash
for i in {1..10};
do
	python3 gerador.py $1 > $i.txt
	echo "$i done!"
done;
