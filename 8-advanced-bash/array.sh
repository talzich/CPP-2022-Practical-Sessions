#!/bin/bash

ARR=( a b c d )

echo $ARR # only the first element

echo ${ARR[@]} # entire array

echo ${ARR[1]} # only b, as you are used to

echo ${#ARR[@]} # size of array

echo ${#ARR[@]}+4 # ???

let EIGHT=${#ARR[@]}+4

echo $EIGHT

ARR[7]=e

echo ${ARR[7]}

echo ${ARR[@]} # entire array

echo ${#ARR[@]} # size of array
