#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int e;
	int t = 1;
	vector<int> r;
	while(cin >> e){
		if(t && e != 42){
			r.push_back(e);
		}else{
			t = 0;
		}
	}
	for(vector<int>::size_type i = 0; i != r.size() - 1; i++) {
		cout << r[i] << endl;
	}
	cout << r[r.size() -1];
	return 0;
}