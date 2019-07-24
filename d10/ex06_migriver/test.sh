#!/bin/sh

try() {
  echo "$2" | cat -e > /tmp/test-d10-ex06
  echo "./do-op $1; want: $2."
  ./do-op $1 | cat -e | diff - /tmp/test-d10-ex06 
}

try "" ""
try "42 + 21" "63"
try "1 + 1" "2"
try "42amis - -20toto12" "62"
try "1 p 1" "0"
try "1 + toto3" "1"
try "toto3 + 4" "4"
try "foo plus bar" "0"
try "25 / 0" "Stop : division by zero"
try "25 % 0" "Stop : modulo by zero"
