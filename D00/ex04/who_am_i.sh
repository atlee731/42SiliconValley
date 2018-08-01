#!/bin/sh
ldapwhoami -Q -H ldap://ldap-master.42.us.org | cut -b 4-
