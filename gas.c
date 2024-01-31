#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* unique(int size, int a[], int *newsize)
{
    *newsize = 0;
    int *b = calloc(size,sizeof(int));
    for (int i = 0; i < size; i++ )
    {
        int uniq = 1;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
            {
                uniq = 0;
                break;

            }
        }
        if (uniq)
        {
            b[*newsize] = a[i];
            (*newsize)++;
        }
    }
    return b;
}

void fill(int size, int a[])
{
    for (int i = 0; i < size; i++)
        a[i] = rand() % 41 - 20;

} 

void print_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
        printf("%d", a[i]);
    printf("\n");
}

int main()
{
    srand(time(NULL));
    int size;
    printf("Enter size");
    scanf("%d",&size);

    int a[size];
    fill(size,a);
    print_array(size,a);

    int uniq_size;
    int *b;
    b = unique(size, a, &uniq_size);
    print_array(uniq_size,b); 
}