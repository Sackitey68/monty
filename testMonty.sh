#!/bin/bash
echo "----(testing push pall)----"
echo "----(expected)----"
echo 3
echo 2
echo 1
echo "----(got)----"
./monty bytecodes/push_pall.m
echo "----(testing pint)----"
echo "----(expected)----"
echo 1
echo 2
echo 3
echo "----(got)----"
./monty bytecodes/pint.m
echo "----(testing pop)----"
echo "----(expected)----"
echo 3
echo 2
echo 1
echo 2
echo 1
echo 1
echo "----(got)----"
./monty bytecodes/pop.m
echo "----(testing swap)----"
echo "----(expected)----"
echo 3
echo 2
echo 1
echo 2
echo 3
echo 1
echo "----(got)----"
./monty bytecodes/swap.m
echo "----(testing add)----"
echo "----(expected)----"
echo 3
echo 2
echo 1
echo 5
echo 1
echo "----(got)----"
./monty bytecodes/add.m
echo "----(testing sub)----"
echo "----(expected)----"
echo 7
echo 2
echo 1
echo "----(got)----"
./monty bytecodes/sub.m
echo "----(testing pchar)----"
echo "----(expected)----"
echo "H"
echo "A"
echo "----(got)----"
./monty bytecodes/pchar.m
echo "----(testing pstr)----"
echo "----(expected)----"
echo "Holberton"
echo "----(got)----"
./monty bytecodes/pstr.m
