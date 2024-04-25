#!/bin/sh
read ARGS

echo "1"
./push_swap $ARGS | ./checker_linux $ARGS
echo "\n"

echo "2"
./push_swap $ARGS | ./checker_linux $ARGS
echo "\n"

echo "3"
./push_swap $ARGS | ./checker_linux $ARGS
echo "\n"

echo "4"
./push_swap $ARGS | ./checker_linux $ARGS
echo "\n"

echo "5"
./push_swap $ARGS | ./checker_linux $ARGS
echo "\n"

echo "6"
./push_swap $ARGS | ./checker_linux $ARGS