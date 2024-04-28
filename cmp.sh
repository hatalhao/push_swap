#!/bin/sh
read ARGS

./push_swap $ARGS | ./checker $ARGS
echo "\n"
