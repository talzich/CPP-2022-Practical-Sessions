#!/bin/bash

echo "Please insert a number"
read NUM
if [ $NUM -ge 10 ]
then
    echo "number >= 10"
else
    echo "number < 10"
fi
