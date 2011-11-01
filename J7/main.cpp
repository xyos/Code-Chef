#include <iostream>
#include <math.h>
using namespace std;
int main(void){
	int n;
	double p,s,x,y;//s = surface, p = perimeter
	cin >> n;
	while(n--){
		scanf("%lf %lf", &p, &s);
		x = (p - sqrt(p*p - 24*s))/12;
		printf("%.2lf\n", x*x*((p-8*x)/4));
	}
	return 0;
}
