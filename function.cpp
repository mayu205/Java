#include<stdio.h>

void fun_val(int no)
{
    no++;
}
void fun_Address(int *ptr)
{
    (*ptr)++;
}
void fun_Reference(int &ref)
{
    ref++;
}

int main()
{
    int i=10,j=10,k=10;
    fun_val(i);
    fun_Address(&j);
    fun_Reference(k);

    printf("i %d\n",i);
printf("j %d\n",j);
printf("k %d\n",k);
    return 0;
}