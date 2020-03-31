/*1.编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。*/
#include<stdio.h>
int main()
{
    char first_name[40];
    char last_name[40];

    printf("Please enter your first name:");
    scanf("%s",first_name);
    printf("Please enter your last name:");
    scanf("%s",last_name);
    
    printf("%s %s\n",first_name,last_name);
    
    return 0;
}
