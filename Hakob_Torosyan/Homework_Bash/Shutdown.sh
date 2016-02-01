#!/bin/bash
echo "Insert time for shutdowning "
read time 
sudo shutdown -h $time 0
