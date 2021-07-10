#include <stdio.h>
#include <stdlib.h>
struct birth{int day,month,year;};
struct student{
 int ID;
 char name[100];
 int score_last_year;
 struct birth dob;
 };
int main()
{
    printf("Hello world!\n");
    return 0;
}
