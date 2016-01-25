#!/bin/bash
echo "Fayli arxivacum"
select var in "tar" "zip";do
break
done
echo "duq yntreciq $var"
if [ $var == tar ]
then tar -cvf log_`date +"%d"`.tar ~/BASH/log.txt
else zip log_`date +"%d"`.zip ~/BASH/log.txt
fi
