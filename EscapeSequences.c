#include<stdio.h>

int main(){

    char *s = "A\0721";
    printf("My\a name\a is\a Aditya\b Kulkarni\a");
    printf("\vVertical tab sequence\n");
    printf("chara\rcter\\ r sequence\n");
    printf("%s\n", s);
    printf("Aditya \fkulkarni\n");
    return 0;
}
