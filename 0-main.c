#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);


    int array1[] = {-242, -197, 7, 193, 157, 176, 169, 88, -71, 84};
    size_t n1 = sizeof(array1) / sizeof(array1[0]);

    print_array(array1, n1);
    printf("\n");
    bubble_sort(array1, n1);
    printf("\n");
    print_array(array1, n1);

    int array2[] = {34, 23, -63, -12, -53, 154, -161, 87, 39, -175};
    size_t n2 = sizeof(array2) / sizeof(array2[0]);

    print_array(array2, n2);
    printf("\n");
    bubble_sort(array2, n2);
    printf("\n");
    print_array(array2, n2);

    int array3[] = {19};
    size_t n3 = sizeof(array3) / sizeof(array3[0]);

    print_array(array3, n3);
    printf("\n");
    bubble_sort(array3, n3);
    printf("\n");
    print_array(array3, n3);

    return (0);
}

