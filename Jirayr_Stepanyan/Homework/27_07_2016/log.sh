#!/bin/bash
echo "please enter  tar or zip"
read word
if [ "$word" = "tar" ]
 then
	$word -cf arxiv cpp_xndirner 
elif [ "$word" = "zip" ]
then
	$word -r arxiv cpp_xndirner
fi
