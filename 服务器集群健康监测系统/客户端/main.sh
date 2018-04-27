#!/bin/bash 
source base.sh
maxchar=''
max=0

for arg in $@; do
    if [[ -f $arg ]]; then  
        find_maxone_in_file $arg
    elif [[ -d $arg ]]; then  
        files=`ls -a $arg`
        for j in $files; do
            if [[ -f ${arg}/${j} ]]; then
                find_maxone_in_file ${arg}/${j}
            fi 
        done
    fi 
done
echo $maxchar $max
