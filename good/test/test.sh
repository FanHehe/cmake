#!/bin/bash

rm -rf ../build/*
cd ../build
cmake ..
../build/cv ../res/1.png
