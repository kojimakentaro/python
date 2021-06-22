#include<stdio.h>
/*
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



int main(void){
    int i = 0,v = 0, array[] = {1,8,2,7,3,6,4,5};
    int *p = array + 3;
    p += 3;
    printf("%d\n",*p);
    return 0;

}

*/


void func(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

int main(void){
    int i,j,array[5] = {3,1,5,2,4};
    for(i = 0;i < 4; i++)
        for(j = i + 1; j < 5; j++)
            if(array[i] > array[j])
                func(array + i,array + j);
    
    for(i = 0;i < 5; i++)
        printf("%d",array[i]);

    printf("\n");

}