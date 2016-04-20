#!/bin/bash
cd ~/Desktop/tmp
a=`ls -f . | wc -l`
if [ '$a >=2' ];
then rm -rf ~/Desktop/tmp/*
fi
