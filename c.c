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



#include<stdio.h>

void func(void){
    int a = 10 ;
    static int b = 20;
    printf("%d %d\n",a++,++b);

}

int main(void){
    int i;
    for(i = 1;i <= 3; i++)func();
    return 0;

}



#include<string.h>

void main(){
    int i;
    char c[256];

    printf("Input words:");
    scanf("%s",&c);

    for(i = 0;i <strlen(c);i++){
        c[i] = c[i] |0xDF;

    }
    printf("%s\n",c);

}


void main(){
    int n,result,i;
    printf("input number(0~255):");
    scanf("%d",&n);
    for(i = 0;i < 8; i++){
        result = n & 0x80;
        if(result ==0){
            printf("0");

        }
        else{
            printf("1");

        }
    }
}



int main(void){
    int i;
    for(i = 10;i>0;i--)
    printf("%d\n",i);
    return 0;
}



int main(void){
    int i;
    i = 10;
    while(i>0){
        printf("%d\n",i);
        i = i-1;

    }
}




int main(void){
    int i;
    typedef struct stu{
        char name[10];
        int id;
    }
    student;
    student data[] = {{"kitagawa",1001},{"minamide",1002},{"higashino",1003}};
    student *p;
    p = data;
    for(i = 0;i < 3;i++){
        printf("%4d: %6s\n",p->id,p ->name);
        p++;
    }
    return 0;
}



//ちょっと考えなちゃいけない問題//
int y = 1;

void func(int* y){ *y = 3;
}
int main(){
    int x = 5;
    func(&x);
    printf("%d %d\n",x,y);
    return 0;

}

*/

 #include <stdio.h>
int main(void)
{
void *vp;
int i = 10;
vp = &i;
  printf("%d\n",*(int*)vp);
return 0; }