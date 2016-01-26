#!/bin/bash
touch log
echo "select option"
select archive in "tar.gz" "zip"
do
break
done
# time of file birth, second since Epoch
atime=`stat -c%W log`
# time of last modification, second since Epoch 
mtime=`stat -c%Y log`
archivename=log_$atime_$mtime
if [ '$archive -eq "tar.gz"' ];
then 
    tar -czvf $archivename.tar.gz log
else
    zip $atchivename.zip log
fi

