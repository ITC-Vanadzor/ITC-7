#!/bin/bash
echo "Enter the number of minutes before shutdown"
read time
sudo hutdown -h $time
