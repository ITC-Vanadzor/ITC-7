#!/bin/bash
pid=`pidof $1` 
kill -$2 $pid 
