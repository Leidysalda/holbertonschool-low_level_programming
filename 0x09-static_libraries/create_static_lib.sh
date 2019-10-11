#!/bin/bash
echo cc -fPIC -c *.c | ar rc liball.a *.o
