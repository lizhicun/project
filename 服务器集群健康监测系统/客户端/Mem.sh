#!/bin/bash

NowTime=`date +"%Y-%m-%d__%H:%M:%S"`

Mem=(`free -m | head -n 2 | tail -n 1 | awk '{printf("%d %d %d", $2, $3, $5)}'`)

Memtotal=${Mem[0]}

Memused=${Mem[1]}

Memfree=${Mem[2]}

MemusePrec=`echo "scale=4;($Memused/$Memtotal)*100" | bc`

Num1=0.2
Num2=0.8
MemDymPrec=`echo "scale=4;($Num1*$Memtotal+$Num2*0.8)" | bc`

MemLog="./mem.log"

echo "$NowTime $Memtotal $Memfree $MemusePrec $MemDymPrec" >> $MemLog
