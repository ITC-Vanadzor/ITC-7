#!/bin/bash
echo "Fayli arxivacum"
select var in "tar" "zip";do
break
done
echo "duq yntreciq $var"
if [ $var == tar ]
then tar -cvf log_`stat -c%y $0 |cut -c 12-16`.tar ~/BASH/log.txt
else zip log_`stat -c%y $0 |cut -c 12-16`.zip ~/BASH/log.txt
fi
