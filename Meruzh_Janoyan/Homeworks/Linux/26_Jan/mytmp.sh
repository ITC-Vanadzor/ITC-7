#!/bin/bash
 
exist=`ls /etc/rc0.d/ | grep "mytmp"`

if [ -z "$exist" ]
	then
		echo "Adding script to autorun.."
		`sudo cp $0 /etc/rc0.d/$0`
fi

echo "Clearing TMP folder.."
`rm -rf ~/Desktop/TMP>/dev/null`	
mkdir ~/Desktop/TMP

