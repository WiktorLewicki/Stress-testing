#!/bin/bash
g++ a.cpp -o a
g++ b.cpp -o b
g++ gen.cpp -o gen
for((i = 0; i < 1000000; i++)){
	echo $i
	./gen $i> test.in
	./a < test.in > a.out
	./b < test.in > b.out
	diff -wq a.out b.out || break
}
