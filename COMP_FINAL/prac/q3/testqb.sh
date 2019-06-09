#!/bin/sh
#written by Mitchell Shelton
#for testing practice prac exam qb

if [ -f "./sort" ]
then
    rm ./sort
fi

gcc -Wall -Werror -O -o sort sort.c

if [ -f "./sort" ]
then
    echo "===Beginning tests==="
    numtests=9
    i=1
    while [ $i -le $numtests ]
    do

        file="../tests/qb/qb$i.in"
        size=`cat $file`

        ./sort $size > "../tests/qb/qb$i.out"

        diff=`diff "../tests/qb/qb$i.exp" "../tests/qb/qb$i.out"`

        if [[ $diff = '' ]]
        then
            echo "===Test $i Passed!==="
        else
            echo "===Test $i Failed==="
            
            diff "../tests/qb/qb$i.exp" "../tests/qb/qb$i.out"

            echo "To view this again do diff ../tests/qb/qb$i.exp ../tests/qb/qb$i.out"
        fi

        i=$(( i+1 ))
    done
    
    echo "===Testing finished==="
else
    echo "File compilation went wrong, you probably have compile errors"
fi
