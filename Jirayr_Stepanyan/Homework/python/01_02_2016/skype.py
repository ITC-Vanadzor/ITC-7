#!/usr/bin/python
import Skype4Py
import sys
import time

def clock():
    client = Skype4Py.Skype();
    client.Attach();
    user = 'Poghos Poghosyan';
    message = 'barev dzez';
    client.SendMessage(user, message);
i=time.time();
if i==12.00:
    clock();
