//
//  main.c
//  Chris
//
//  Created by louxunmac on 2019/4/28.
//  Copyright © 2019 gongsheng. All rights reserved.
//

#include <stdio.h>
#include "Sort.h"


int main(void) {
    printf("Hellor world \n");
    
    
    
    say_hello();
    
    int a[] = {1, 5, 23, 14, 6, 9, 21, 2, 10, 3, 6, 5, 9, 13};
    
    bubble_sort(a, 14);
    
    for (int loop = 0; loop < 14; loop ++) {
        printf("%d ", a[loop]);
    }
    printf("\n");
    
    return 0;
}
