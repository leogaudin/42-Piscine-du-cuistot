#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/\:.*//' | rev | sort -r | sed -n -e "${FT_LINE1},${FT_LINE2}p" | xargs | sed -e 's/ /, /g' | sed '/:[0-9]*$/ ! s/$/./'

