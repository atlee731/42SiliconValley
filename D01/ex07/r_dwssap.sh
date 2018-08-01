#!/bin/sh
cat /etc/passwd | sed -e '/^[\t]*#/d' | sed -n 'g;n;p' | cut -d":" -f1 | rev | sort -r | sed -n '10,16p' | tr "\n" "," | rev | sed 's/,/./' | rev

