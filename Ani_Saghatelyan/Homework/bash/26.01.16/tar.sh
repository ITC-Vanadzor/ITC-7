#!/bin/bash
name=`ls *log`
firstLine=`head -1 $name | cut -c 2-6`
lastLine=`tail -1 $name  | cut -c 2-9`    
modificate=`stat -c "%Y"  $name`
echo $modificate

           select choice in "tar" "zip"; do
              case $choice in

            zip) 
                 if ["$firstLine" = "$lastLine"]  || [ -z "$firstLine"];then
                   zip -r "$modificate $name".zip $name;
                      else 
                        zip -r "$firstLine $name $lastLine".zip $name;
                fi
                 ;; 
         
             tar)
                  if ["$firstLine" = "$lastLine"]  || [ -z "$firstLine"];then
                  tar -cvf  "$modificate $name".tar.gz2 $name;
                  else 
                   tar -cvf  "$firstLine $name $lastLine".tar.gz2 $name;
                  fi
                ;;
             *)
               echo "The extract name is incorrect"
             esac
               done
