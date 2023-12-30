#include<stdio.h>
intmain()
{
    int phy,chem,bio,math,comp;
    float per;
    printf("enter five subjects marks:");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)/5.0;
    if(per>=70)
    {
        printf("distinction");
    }
    else if(per>=60&&per<70)
    {
        printf("first class");
    }
    else if(per>=40&&per<60)
    {
        printf("second class");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}
