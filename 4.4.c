/*4.编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示
出来。*/
#include<stdio.h>
#define CM_PER_INCH (2.54)
int main()
{
    char name[40];
    float height;

    printf("What is your name?");
    scanf("%s",&name);
    printf("How tall are you(inch)?");
    scanf("%f",&height);

    printf("%s,you are %.3f feet tall.\n",name,height);
    printf("%s, you are %.3f cm tall\n", name,height * CM_PER_INCH);

    return 0;
}
