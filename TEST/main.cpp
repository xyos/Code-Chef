#include <iostream>
using namespace std;
int main()
{
	int e;
	while(cin >> e){
		if(e != 42){
			cout << e;
		}else{
			break;
		}
	}
	return 0;
}