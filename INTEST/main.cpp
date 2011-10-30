#include <iostream>
int main(){
	int n, x, count = 0;
	long long int y;
	scanf("%d %d", &n , &x);
	while(n--){
		scanf("%lld",&y);
		if(y%x==0) count++;
	}
	printf("\n%d",count);
	return 0;
}