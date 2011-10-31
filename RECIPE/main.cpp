# include <iostream>
using namespace std;

void divide(int * &v, const int &n, const int &s){
	for(int i = 0; i < s;i++){
		v[i] = v[i]/n;
	}
}
void gcd(int* &v, const int &s, const int &m){
	//finding gcd and processing array
	for(int i = m; i > 2; i--){
		int count = 0;
		for(int j = 0; j<s ; j++){
			if((v[j] % i) == 0){
				count++;
			}
		}
		if(count == s){
			divide(v,i,s);
			break;
		}
	}
	//printing
	for(int i = 0; i < s-1;i++){
		cout << v[i] << " ";
	}
	cout << v[s-1] <<endl;
}

int main()
{
	int n, i, size;
    int* v;//each number [1-1000]
	cin >> n;
	while(n--){
        scanf("%d", &size);
        v = new int[size];
		int min = 1001;
		for(int i = 0; i < size; i++){
            scanf("%d", &v[i]);
			if(v[i]<min) min = v[i];
		}
        gcd(v,size,min);
	}
	return 0;
}
