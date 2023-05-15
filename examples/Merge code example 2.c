/*
 * Sorting Merge Sort
 * 0(n log n) efficient
 * by Person and professor Ira Pohl
 */

#include<stdio.h>
#define SIZE 8

void print_array(int how_many, int data[], char *str)
{
        int i;
        printf("%s", str);

        for (i = 0; i < how_many; i++)
                printf("%d\t", data[i]);
}

void merge(int a[], int b[], int c[], int how_many) // a and b same size
{
        int i = 0, j = 0, k = 0;

        while (i < how_many && j < how_many)
                if (a[i] < b[j])
                        c[k++] = a[i++];
                else
                        c[k++] = b[j++];

        while (i < how_many)
                c[k++] = a[i++];

        while (j < how_many)
                c[k++] = b[j++];
}

void mergesort(int key[], int how_many) //a power of 2
{
        int j, k;
        int w[how_many];

        for (k = 1; k < how_many; k *= 2) 
        {
                for (j = 0; j < how_many -k; j += 2 *k)
                        merge(key + j, key + j + k, w + j, k);
                
                for (j = 0; j < how_many; j++)
                        key[j] = w[j];
        }
}

int main()
{
        int a[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};

        print_array(SIZE, a, "My grades\n");
        printf("\n\n");

        mergesort(a, SIZE);

        print_array(SIZE, a, "My sorted grades\n");
        printf("\n\n");

        return 0;
}
