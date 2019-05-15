#include <iostream>



void bubble_sort(int a[], int n);

int main()
{

    int a[] = {1, 2, 4, 15, 9, 6, 3, 7};
    bubble_sort(a, 7);

    for (int i = 0; i < 7; i++)
    {
        printf(" %d", a[i]);
    }
    
}

void bubble_sort(int a[], int n) {
    for (int i = n-1, flag = 1; i >= 1 && flag == 1; --i) {
        flag = 0;
        for (int j = 0; j < i; j++)
        {
            /* code */
            if (a[j] > a[j + 1])
            {
                /* code */
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                flag = 1;
            }
            
        }
        
    }
}
