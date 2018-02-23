#!/bin/bash
$1 $2 
echo "Import needly signal at firts, and needly PID at second"
sudo kill $1 $2 
