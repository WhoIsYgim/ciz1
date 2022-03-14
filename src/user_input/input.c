#include "input.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  MAX_LEN 100


char* get_str() {
    char* str = (char*) malloc(sizeof (char)*MAX_LEN);
    if(!str){
        return NULL;
    }
    size_t count = sizeof (char)*MAX_LEN;
    getline(&str,&count, stdin);
    str[strlen(str)-1] = '\0';
    return str;
}

/* //alternative input funk
char get_ch(){
    char c = '\0';
    int res = 0;
    do{
        res = scanf("%c",&c);
    } while(res!=1);
    return c;
}
char* get_str()
{
    struct {
        char* str;
        int length;
        int capacity;
    } buffer = {NULL,0,1};
    char c = 0;

    while (c = get_ch(),(c!=EOF)&&(c!='\n'))
    {
        if (buffer.length+1 >= buffer.capacity)
        {
            buffer.capacity*=2;
            char* temp = (char*)malloc(sizeof (char)*(buffer.capacity+1));
            buffer.str = temp;
            if(buffer.str){
                temp = strcpy(temp,buffer.str);
                free(buffer.str);
            }
            buffer.str = temp;
        }
        buffer.str[buffer.length] = c;
        buffer.str[buffer.length+1]='\0';
        ++buffer.length;
    }
    return buffer.str;
}

*/

