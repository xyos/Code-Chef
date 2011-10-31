#include <stdio.h>
#include <cstring>
using namespace std;
int mod(char* a, int b){
	int r = 0;
	for(int i = 0; i < strlen(a); i++){
		r = (r * 10 + a[i] - '0') % b; 
	} 
	return r;
}
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	int n, a , b;
	char longa[251];
	scanf("%d", &n);
	while(n--){
		scanf("%d %s", &b, longa);
		if(b==0){
			printf("%s\n",longa);
		}else{
			a = mod(longa,b);
			printf("%d\n",gcd(a,b));
		}
	}
	return 0;
}