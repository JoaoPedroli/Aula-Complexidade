#include <bits/stdc++.h>
using namespace std;

int funcA(int n, int m, vector<int> &v){
	for(int i = 0; i < n; i++)
		if(v[i] == m)
			return i;
	return -1;
}

int funcB(int n, int m, vector<int> &v){
	for(int i = n-1; i > 0; i--)
		if(v[i] == m)
			return i;
	return -1;
}
int main(){
	int n, m, ret;
	cin >> n >> m;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	clock_t start, end;
	start = clock();
	ret = funcA(n, m, v);
	end = clock();
	cout << fixed << setprecision(6);
	cout << "A -> " << double(end - start)/CLOCKS_PER_SEC << "s - " << (ret == -1? n: ret + 1) << " ops"<< endl; 
	start = clock();
	ret = funcB(n, m, v);
	end = clock();
	cout << "B -> " << double(end - start)/CLOCKS_PER_SEC << "s - " << (ret == -1? n: n - ret) << " ops" << endl; 
}
