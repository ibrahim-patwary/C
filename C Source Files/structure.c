#include<stdio.h>
struct information
{
    char name[30];
    int age;
    char group[5];
    float  cgpa;
};
int main()
{
    struct information ibu;
  //  printf("Enter your name :-");
    //scanf("%s",ibu.name);
    strcpy(ibu.name,"ibu");
   // printf("\n%s",ibu.name);
    printf("Enter your age :-");
    scanf("%d",ibu.age);
    printf("\n%d",ibu.age);
    printf("Enter your group :-");
    scanf("%s",ibu.group);
    printf("\n%s",ibu.group);
    printf("Enter your cgpa :-");
    scanf("%f",ibu.cgpa);
    printf("\n%0.3f",ibu.cgpa);

    return 0;
}
