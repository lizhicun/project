#!/bin/bash
NowTime=`date +"%Y-%m-%d_%H:%M:%S"`
LoadAvg=`cut -d " " -f 1-3 /proc/loadavg`
CpuTime=`cat /sys/class/thermal/thermal_zone0/temp`
CpuTemp=`echo "scale=2;$CpuTime/1000" | bc` 

eval $(head -n 1 /proc/stat | awk -v sum1=0 -v idle1=0 \
    '{for (i=2;i<=8;i++) {sum1=sum1+$i} printf("sum1=%d;idle1=%d;", sum1,$5)}')

sleep 0.5

eval $(head -n  1 /proc/stat | awk -v sum2=0 -v idle2=0 \
    '{for (i=2;i<=8;i++) {sum2=sum2+$i} printf("sum2=%d;idle2=%d;", sum2,$5)}')

CpuUsedPerc=`echo "scale=4;(1-($idle1-$idle2)/($sum1-$sum2))*100" | bc`
CpuUsedPerc=`printf "%.2f\n" $CpuUsedPerc`
WarnLog="./Warn.log"
WarnLevel="normal"
if [[ `echo $CpuTemp '>=' 85 | bc -l` = 1 ]]; then
    WarnLevel="fault"
    echo "fault" >> $WarnLog
elif [[ `echo $CpuTemp '>=' 70 | bc -l` = 1 ]]; then
    WarnLevel="Warning"
elif [[ `echo $CpuTemp '>=' 50 | bc -l` = 1 ]]; then
    WarnLevel="note"
fi

echo "$NowTime $LoadAvg $CpuUsedPerc ${CpuTemp} C $WarnLevel" 
