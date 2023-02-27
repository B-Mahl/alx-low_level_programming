#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
void positive_or_negative(int i);
/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
#endif
