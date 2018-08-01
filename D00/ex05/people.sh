#!/bin/sh
ldapsearch -Q -H ldap://ldap-master.42.us.org -o ldif-wrap=no -L "(uid=z*)" cn | grep '^cn:' | cut -c 5- | sort -r --ignore-case 
