//test_gprof.c
#include<stdio.h>

void new_func1(void);

void func1(void)
{
    printf("\n Inside func1 \n");
    int i = 0;

    for(;i<0xffffffff;i++); // 4,294,967,295 //están ahí para consumir algo de tiempo de ejecución.
    new_func1();

    return;
}

static void func2(void)
{
    printf("\n Inside func2 \n"); 
    int i = 0;

    for(;i<0xafffffff;i++); //2,952,790,015 //están ahí para consumir algo de tiempo de ejecución.
    return;
}

int main(void)
{
    printf("\n Inside main()\n");
    int i = 0;

    for(;i<0xfffff11;i++); //están ahí para consumir algo de tiempo de ejecución.
    func1();
    func2();

    return 0;
}