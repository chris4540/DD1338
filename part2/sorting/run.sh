#!/bin/bash
rm -f *.class
export CLASSPATH="${CLASSPATH};../lib/algs4.jar;"
javac Quick.java
# java Quick < tiny.txt
java Quick < words3.txt