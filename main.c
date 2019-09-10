//
//  main.c
//  List
//
//  Created by s20181106115 on 2019/9/10.
//  Copyright © 2019 imnu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *p;
    p = &i;
    *p = 20;
    printf("i = %d\n", i);
    printf("&p = %x\n", &p);
    printf("p = %x\n", p);
    printf("&i = %x\n", &i);
    printf("*p = %d\n", *p);
    return 0;
}
