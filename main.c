//
//  main.c
//  10_P5
//
//  Created by ok sojoung on 2023/11/09.
//

#include <stdio.h>
#include <string.h>

int main(void){
    FILE* fp;
    char str[100];
    // 파일열기
    fp = fopen("/Users/okso/sample.txt", "w");
     
    // 파일에 입력받은 값 쓰기
    for(int i=0; i<3; i++)
    {
        printf("Input a word:");
        scanf("%s", str);
        
        fprintf(fp, "%s\n", str);
    }
    
    // 파일 닫기
    fclose(fp);
    
    return 0;
}
