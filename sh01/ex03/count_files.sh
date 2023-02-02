#!/bin/sh
find . | wc -l | awk '{ printf "%d\n", $0 }'
