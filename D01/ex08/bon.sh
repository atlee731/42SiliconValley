#!/bin/sh
ldapsearch -Q -H ldap://ldap-master.42.us.org sn | grep '^sn:' | cut -c 4- | grep le | wc -l
