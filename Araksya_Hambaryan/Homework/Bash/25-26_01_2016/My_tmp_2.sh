#!/bin/bash
if [ '`find /etc/rc6.d/ -name My_tmp_clear` -ne "/etc/rc6.d/My_tmp_clear"' ]
    then
	sudo ln -s $0 /etc/rc6.d/My_tmp_clear
    fi
if [ '`find /etc/rc0.d/ -name My_tmp_clear` -eq "/etc/rc0.d/My_tmp_clear"' ]
    then
	sudo ln -s $0 /etc/rc0.d/My_tmp_clear
    fi
`rm -rf ~/Desktop/My_tmp/*`
