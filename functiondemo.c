 #include<stdio.h>
int Addition(int No , int Nov)
{
    int Ans=0;
    Ans = No + Nov;
    return Ans;
}
int main()
{
    int Value1 = 0, Value2 = 0;
    int Ret = 0;

    printf("Enter first number : \n");
    scanf("%d",&Value1);

    printf("Enter Second number : \n");
    scanf("%d",&Value2);

    Ret = Addition(Value1,Value2);
    printf("Addition is : %d\n",Ret);
    
    return 0;
}