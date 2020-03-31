/*8.编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算
并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，
使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转
换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点
后面 1 位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越
好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。使用
#define 创建符号常量或使用 const 限定符创建变量来表示两个转换系数。*/
#include<stdio.h>
#define PINT_PER_GALLON 3.785
#define KM_PER_MILE 1.609
int main()
{
    double mileage,oil_consump;
    double pint_per_hundred_km,mile_per_gallon;

    printf("Please enter the mileage of the trip(mile):");
    scanf("%lf",&mileage);
    printf("Please input the oil consumption(gallon):");
    scanf("%lf",&oil_consump);

    pint_per_hundred_km = ( oil_consump * PINT_PER_GALLON) / ( mileage * KM_PER_MILE ) / 100;
    mile_per_gallon = mileage / oil_consump;

    printf("It uses %lf liters of gasoline every 100 kilometers.\n",pint_per_hundred_km);
    printf("%.1lf miles per gallon.\n",mile_per_gallon);

    return 0;
}
