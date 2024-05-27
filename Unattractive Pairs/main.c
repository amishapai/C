#include <stdio.h>
#include <stdlib.h>

int dup(char *arr, int *n);
int del(char *arr, int *n, int r);

int main() {
    int test;
    scanf("%d", &test);
    for (int tes = 0; tes < test; tes++) {
        int n;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);

        for (int k = 0; k < n/2 + 1 ; k++) {
            dup(arr, &n);
        }
        for (int k = 0; k < n-1; k++)
        {
            if(arr[k] != arr[k+1])
            {
                del(arr, &n, k);
                k = -1;
            }
        }
        int count = 0;
        if(arr[0] != arr[1] && n ==2)
        {
            count = count - 2;
        }

            count = count + n;
            printf("%d\n" , count);


    }
    return 0;
}


int dup(char *arr, int *n) {
    for (int j = 1; j < *n - 1; j++) {
        if (arr[j] != arr[j + 1] && arr[j] == arr[j - 1]) {
            del(arr, n, j);
            break;
        } else if (arr[j] != arr[j - 1] && arr[j] == arr[j + 1]) {
            del(arr, n, j - 1);
            break;
        }
    }
    return 0;
}

int del(char *arr, int *n, int r) {
    for (int j = r; j < *n - 2; j++) {
        arr[j] = arr[j + 2];
    }
    *n = *n - 2;
    return 0;
}
