#!/bin/sh
for i in $(find .. -type f)
do
	if [[ $(git check-ignore $i) ]]; then
		echo $(basename $(git check-ignore $i));
	fi
done
