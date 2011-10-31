# include <iostream>
using namespace std;

void divide(int * &v, const int &n, const int &s){
	for(int i = 0; i < s;i++){
		v[i] = v[i]/n;
	}
}
void gcd(int* &v, const int &s){
	int m = v[0];
	//finding min in array
	for(int i = 1; i < s;i++){
		if(v[i] < m){
			m = v[i];
		}
	}
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
    int* v;
	cin >> n;
	while(n--){
        scanf("%d", &size);
        v = new int[size];
		for(int i = 0; i < size; i++){
            scanf("%d", &v[i]);
		}
        gcd(v,size);
	}
	return 0;
}
