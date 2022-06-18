#!/bin/bash
shopt -s expand_aliases
source ~/.mybashrc
n=$1
mkdir $n
cd $n
ncpp a.cpp
ncpp b.cpp
ncpp c.cpp
ncpp d.cpp
ncpp e.cpp
touch input.txt
touch output.txt
