# include <iostream>
using namespace std;

int getCount(const int& c){
	switch(c){
	case 65:
		return 1;
	case 66:
		return 2;
	case 68:
		return 1;
	case 79:
		return 1;
	case 80:
		return 1;
	case 81:
		return 1;
	case 82:
		return 1;
	default:
		return 0;
	}
}
int main()
{

	int n;
	char c;
	int count ;
	cin >> n;
	getchar();
	while(n--){
		count = 0;
		while( (c=getchar()) != '\n' )
		{
			count+=getCount(c);
		}
		printf("%d\n",count);

	}
	return 0;
}