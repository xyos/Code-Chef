#include <iostream>
using namespace std;
int main()
{
	int w;
	double a;
	scanf("%d %lf", &w , &a);
	a = (w % 5 == 0 && a - w - .5 >= 0) ? a - w - .5 : a;
	printf("\n%.2lf",a);
	return 0;
}