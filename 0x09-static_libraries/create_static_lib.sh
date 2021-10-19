#!/bin/bash
gcc ./*.c -c -fPIC
ar rc liball.a ./*.o
