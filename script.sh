#!/bin/sh
read ARGS

./push_swap $ARGS | ./checker_Mac $ARGS
echo "\n"
