#!/usr/bin/python
import re

My_row='ahn5 $kjkj%%% $$ @@ 5%kj'
result=re.sub('[@$%]', '', My_row)
print result
