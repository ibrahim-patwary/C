#include <stdio.h>

void insertionSort(int arr[], int size)
{


    int i, index, key;
    for(i = 1; i < size; i++)
    {
        key = arr[i];
        index = i;
        while(index > 0 && arr[index - 1]<key)
        {
            arr[index] = arr[index - 1];
            index--;
        }

        arr[index] = key;
    }
}

void binpack(int arr[], int s, int n)
{
    int newArr[n], binC = 0, i, j;
    for(i = 0; i < n; i++) {
        newArr[i] = s;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(newArr[j] - arr[i] >= 0)
            {
                newArr[j] = newArr[j] - arr[i];
                break;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(newArr[i] != s)
        {
            binC++;
        }
    }

    printf("%d", binC);
}


int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    insertionSort(arr, n);
    binpack(arr, k, n);


    return 0;
}
