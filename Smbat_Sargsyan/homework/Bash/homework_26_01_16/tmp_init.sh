#!/bin/bash
touch just_file.txt
`find /etc/rc0.d/ -name '$0'` > just_file.txt
`find /etc/rc0.d/ -name '$0'` >> just_file.txt
file_for_shutdown=`head -1 just_file.txt`
file_for_restart=`tail -1 just_file.txt`
if [ '$file_for_shutdown -eq "0"' ];
then 
	`sudo cp $0 /etc/rc0.d/$0`
fi
if [ '$file_for_restart -eq 0' ];
then
         `sudo cp $0 /etc/rc6.d/$0`
fi
echo "clearing tmp"
`rm just_file.txt`
`rm -rf ~/Desktop/tmp/* > /dev/null`

