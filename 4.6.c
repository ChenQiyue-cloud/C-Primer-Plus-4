/*.编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户
输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结
尾对齐，如下所示：
Melissa Honeybee
7　　　　8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
Melissa Honeybee
7　　　8
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[20],last_name[20];
    int length_f,length_l;

    printf("Please enter your first name:");
    scanf("%s",first_name);
    printf("Please enter your last name:");
    scanf("%s",last_name);

    length_f = strlen(first_name);
    length_l = strlen(last_name);
    printf("%s %s\n%*d %*d\n",first_name,last_name,length_f,length_f,length_l,length_l);
    printf("%s %s\n%d%*d\n",first_name,last_name,length_f,length_f,length_l);

    return 0;
}
