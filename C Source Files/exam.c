#include<stdio.h>
int main()
{
    int ID;
    scanf("%d", &ID); // value of ID is the last two digits value of your ID
//For example if your ID is 191-15-1234 then ID = 34
    int count = 0 ;
    while(ID%=2)
    {
        printf("\tLoopy!!\nNot Loopy!\n");
        count++;

        break;
    }
    return 0;
}

