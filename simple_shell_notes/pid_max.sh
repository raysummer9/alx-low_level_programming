#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Max PID Value: $pid_max"
