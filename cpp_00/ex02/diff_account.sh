#!/bin/bash

 
RED="\033[0;31m"
GREEN="\033[0;32m"
NO_COLOR="\033[0m"

make

./bank_log > test.log

if diff <(cut -d' ' -f2- test.log) <(cut -d' ' -f2- 19920104_091532.log) > /dev/null; then
	echo -e "${GREEN}OK${NO_COLOR}"
else
	echo -e "${RED}KO${NO_COLOR}"
fi