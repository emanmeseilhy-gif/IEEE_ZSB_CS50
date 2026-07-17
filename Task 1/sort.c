#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("How many numbers do you want to sort? ");
        if (scanf("%d", &n) != 1)
        {
            while (getchar() != '\n');
            n = -1;
        }
    }
    while (n <= 0);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        if (scanf("%d", &numbers[i]) != 1)
        {
            while (getchar() != '\n');
            i--; 
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
