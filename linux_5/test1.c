#include <stdio.h>
void fun1()
{
    char *lp=NULL;
    *lp='a';
}
void fun()
{
    int aa=10;
    int bb=20;
    int cc =aa+bb;
    printf("cc=%d\n",cc);
    //fun1();
}
int main()
{
    int x=4,y=5;
    int z=x+y;
    printf("z=%d\n",z);
    fun();
    return 0 ;
}
