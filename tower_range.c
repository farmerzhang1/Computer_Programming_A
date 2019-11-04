#include <stdio.h>

int main(void)
{
	double x, y;
	scanf_s("%lf%lf", &x, &y);
	if ((x - 2) * (x - 2) + (y - 2) * (y - 2) <= 1 || (x + 2) * (x + 2) + (y - 2) * (y - 2) <= 1
		|| (x - 2) * (x - 2) + (y + 2) * (y + 2) <= 1 || (x + 2) * (x + 2) + (y + 2) * (y + 2) <= 1)
		printf("%d", 10);
	else printf("%d", 0);
	system("pause");
}/*关于lf和f，其实还有Lf，三者在printf函数中是interchangeable的，而在scanf函数中不是，f float lf double Lf long double*/
