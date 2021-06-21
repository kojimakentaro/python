#include<stdio.h>

void func(void){
    int a = 10;

    static int b = 20;
    printf("%d,%d\n",a++,++b);
}

int main(void){
    int i;
    for(i = 1;i <=3; i++)func();
    return  0;

}