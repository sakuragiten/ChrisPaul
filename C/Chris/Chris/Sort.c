//
//  Sort.c
//  Chris
//
//  Created by louxunmac on 2019/4/28.
//  Copyright © 2019 gongsheng. All rights reserved.
//

#include "Sort.h"

typedef enum {
    true = 1, false = 0
}bool;

void say_hello() {
    printf("say: hello, how are u?\n");
}

void bubble_sort(int a[], int n) {
    int i;
    bool change;
    for (i = n - 1, change = true; i >= 1 && change; --i) {
        change = false;
        for (int j = 0; j < i; j ++) {
            if (a[j] > a[j + 1] ) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                change = true;
            }
        }
    }
}

