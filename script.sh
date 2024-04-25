#!/bin/sh

echo "1"
./push_swap 1 2 3 | ./checker_linux 1 2 3
echo "\n"

echo "2"
./push_swap 1 3 2 | ./checker_linux 1 3 2
echo "\n"

echo "3"
./push_swap 3 1 2 | ./checker_linux 3 1 2
echo "\n"

echo "4"
./push_swap 3 2 1 | ./checker_linux 3 2 1
echo "\n"

echo "5"
./push_swap 2 1 3 | ./checker_linux 2 1 3
echo "\n"

echo "6"
./push_swap 2 3 1 | ./checker_linux 2 3 1