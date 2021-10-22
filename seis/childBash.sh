#!/bin/bash
gcc loop.c -o out
python loop.py &
./out   