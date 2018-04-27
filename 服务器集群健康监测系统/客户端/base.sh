#!/bin/bash

find_maxone_in_file() {
    word=`cat $1 | tr -c [a-z][A-Z] "\n"`
    for i in $word; do
        temp=`echo -n $i | wc -c`
        if [[ $temp -gt $max ]]; then
            max=$temp
            maxchar=$i
        fi 
    done
}


