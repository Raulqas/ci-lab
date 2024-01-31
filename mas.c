#include <stdio.h>
#include <stdlib.h>

void func(int array[], int len)
{
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (array[i] == array[j])
            c++;
        }
        if (c == 1)
            printf("%d", array[i]);
        c = 0;
    }
}

int main()
{
    int len = 0;
    scanf("%d",&len);
    int array[len];
    for (int i = 0; i < len; i++)
    {
        array[i] = rand() % 70 - 20; 
    }
    func(array,  len);
    printf("\n");
    for (int i = 0; i<len; i++)
    {
        printf("%d", array[i]);
    }
}
