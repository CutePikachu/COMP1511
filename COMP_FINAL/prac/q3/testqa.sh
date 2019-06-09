#!/bin/sh
#written by Mitchell Shelton
#for testing practice prac exam qa

if [ -f "./staircase" ]
then
    rm ./staircase
fi

gcc -Wall -Werror -O -o staircase staircase.c

if [ -f "./staircase" ]
then
    echo "===Beginning tests==="
    numtests=7
    i=1
    while [ $i -le $numtests ]
    do

        file="../tests/qa/qa$i.in"
        size=`cat $file`

        ./staircase $size > "../tests/qa/qa$i.out"

        diff=`diff "../tests/qa/qa$i.exp" "../tests/qa/qa$i.out"`

        if [[ $diff = '' ]]
        then
            echo "===Test $i Passed!==="
        else
            echo "===Test $i Failed==="
            
            diff "../tests/qa/qa$i.exp" "../tests/qa/qa$i.out"

            echo "To view this again do diff ../tests/qa/qa$i.exp ../tests/qa/qa$i.out"
        fi

        i=$(( i+1 ))
    done
    
    echo "===Testing finished==="
else
    echo "File compilation went wrong, you probably have compile errors"
fi
