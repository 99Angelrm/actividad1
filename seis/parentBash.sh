#!/bin/bash
echo "insert Timeout"
read tiempo
timeout $tiempo bash childBash.sh