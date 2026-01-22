# Formatted Input/Output

# Programming Projects

## ex03.c

Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 78-0-393-97950-3. (Older ISBNs use 10 digits.) The first group (the GS1 prefix) is currently either 978 or 979. The group identifier specifies the language or country f origin (for example, 0 and 1 are used in English-speaking countries). The publisher code identifies the publisher (393 is the code for W. W. Norton). The item number is ssigned by the publisher to identify a specific book (97950 is the code for this book). An ISBN ends with a check digit that's used to verify the accuracy of the  receding digits. Write a program that breaks down an ISBN entered by the user:

>Enter ISBN: 978-0-393-97950-3
>GS1 prefix: 978
>Group identifier: 0
>Publisher code: 393
>Item number: 97950
>Check digit: 3

Note: The number of digits in each group may vary; you can't assume that groups have the lengths shown in this example. Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page).

## ex05.c

Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:

>Enter the numbers from 1 to 16 in any order:
>16 3 2 13 5 10 11 8 9 6 7 12 4 15 141

>16 3 2 13
>5 10 11 8
>9 6 7 12
>4 15 14 1

>Row sums: 34 34 34 34
>Column sums: 34 34 34 34
>Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the numbers are said to form amagic square. The magic square shown here appears in a 1514 engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the last row give the date of the engraving.)