NowTime=`date +"%Y-%m-%d_%H:%M:%S"`
MemInfo1=`free -m | head -n 2 | tail -n 1`
sleep 0.5
MemInfo2=`free -m | head -n 2 | tail -n 1`

arr1=(`echo $MemInfo1 | awk '{printf("%d %d %d",$2,$3,$4)}'`)
arr2=(`echo $MemInfo2 | awk '{printf("%d %d %d",$2,$3,$4)}'`)

AvlUsed=`echo "scale=2;(${arr1[1]}/${arr1[0]}+${arr2[1]}/${arr2[0]})/2.0" | bc`
DynaAvlUsed=`echo "scale=2;$AvlUsed*0.2+$1*0.8" | bc`
MemLog=./mem.log
echo $NowTime ${arr1[0]} ${arr2[2]} 0$AvlUsed 0$DynaAvlUsed
