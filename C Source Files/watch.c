#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
char a[10];
void log_in()
{
    char pass[]="ibrahim";
    for(int i=1; i<=3; i++)
    {

        printf("Enter the password :- ");
        gets(a);
        int x = strcmp(pass,a);
        if(x==0)
        {
            printf("Log in successfully...\n") ;
            return 0;
        }
        else
        {

            printf("Wrong password...\n\n....Try again....\n\n\n");


        }
    }
    time();

}
void time()
{

    for(int i=30; i>=1; i--)
    {
        printf(" Try again in %ds\n",i);
        sleep(1);
        system("cls");
    }
    char ch ;
    printf("Do you want to change you password..\nPressed [Y/N]..\n\tWhere,\t Y=[yes].\tN=[No].\n ===>");
    ch=getche();
    if(ch=='N'|| ch=='n')
    {
        log_in();
    }
    else if (ch=='Y'|| ch=='y')
    {
        forget_pass();
    }
}
forget_pass()
{
    char n[10];
    char pass[10];
    printf("\nEnter a new password(Must be use 8 characters ) :-");
    gets(n);
    strcpy(pass,n) ;

        int x = strcmp(pass,m);
        if(x==0)
        {
            printf("New password added successfully...\n") ;
            return 0;
        }
}
int main()
{
    log_in();

    return 0;
}
