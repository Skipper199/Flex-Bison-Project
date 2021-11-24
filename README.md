# Flex and Bison Project
This project is part of the Computer Engineering and Informatics Department (CEID) of University of Patras Principles Of Programming course. The goal of this project was to implement the lexical and grammatical part of a subset part of the C programming language. This was done using Flex for the lexical part and Bison for the grammatical one.

## Compilation
bison -y -d parser.y && flex scanner.l && gcc -c y.tab.c lex.yy.c && gcc y.tab.o lex.yy.o -o myParser

## Run
./myParser test_cases/x

Where x is the name of the file you want to parse.
