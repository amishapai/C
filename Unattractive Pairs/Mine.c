#include <stdio.h>
#include <stdlib.h>

int dup(char arr[], int n, int s);
int del(char arr[], int *n, int r);

int main()
{
    int test;
    scanf("%d", &test);
    for (int tes = 0; tes < test; tes++)
    {
        int n, ne;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);

        int k = 0;
        while (k < n - 1)
        {
            int c = dup(arr, n, k);
            if (c == -1)
            {
                break; // No more adjacent different characters found
            }
            else
            {
                ne = del(arr, &n, c);
                k = c; // Move to the next position after the removed characters
            }
        }

        for (int a = 0; a < ne; a++)
        {
            printf("%c", arr[a]);
        }
        printf("\n");
    }
    return 0;
}

int dup(char arr[], int n, int s)
{
    int count = -1;
    for (int j = s; j < n - 1; j++)
    {
        if (arr[j] != arr[j + 1])
        {
            count = j;
            break;
        }
    }
    return count;
}

int del(char arr[], int *n, int r)
{
    for (int j = r; j < *n - 2; j++)
    {
        arr[j] = arr[j + 2];
    }
    *n = *n - 2;
    return *n;
}

