//
//  main.c
//  10_P6
//
//  Created by ok sojoung on 2023/11/09.
//

#include <stdio.h>
#include <string.h>

int main(void){
    FILE* fp = NULL;
    char c;
    
    fp = fopen("/Users/okso/sample.txt", "r");
    if(fp == NULL)
    {
        printf("파일을 못열음\n");
        return 0;
    }
    
    while ( (c=fgetc(fp)) != EOF)
    {
        putchar(c);
    }
     
    fclose(fp);
    
    return 0;
}
