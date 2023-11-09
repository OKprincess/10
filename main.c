//
//  main.c
//  10_P2
//
//  Created by ok sojoung on 2023/11/09.
//

#include <stdio.h>

int main(void){
    int i = 0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
    
    printf("%s\n", str);
    
    while(str[i] != '\0'){      // 조건이 거짓이 될 때까지 반복
        printf("%c", str[i]);
        i++;
    }
    
    return 0;
}
