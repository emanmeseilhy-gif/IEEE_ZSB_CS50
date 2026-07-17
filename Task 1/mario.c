/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int height;
do {
printf("Height: ");
scanf("%d", &height);
} while (height < 1 || height > 8);
for (int i = 1; i <= height; i++) {
for (int j = 1; j <= height - i; j++) {
printf(" ");
}
for (int k = 1; k <= i; k++) {
printf("#");
}
printf("\n");
}
return 0;
}
