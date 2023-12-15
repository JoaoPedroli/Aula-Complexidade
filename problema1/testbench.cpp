#include <bits/stdc++.h>
using namespace std;

int fromFront(int n, int m, vector<int> *v){
	for(int i = 0, steps = 0; i < n; i++, steps++){
		if((*v)[i] == m){
			return steps;
		}
	}
	return n;
}


int fromBack(int n, int m, vector<int> *v){
	for(int i = n-1, steps = 0; i > 0; i--, steps++){
		if((*v)[i] == m){
			return steps;
		}
	}
	return n;
}


void testbench(int (*func)(int, int, vector<int>*), int n, int m, vector<int> *v, string name){
	auto start = chrono::high_resolution_clock::now();
	int ret = func(n, m, v);
	auto end = chrono::high_resolution_clock::now();
	double elapsed_seconds = chrono::duration<double>(end-start).count();
	cout << fixed << setprecision(6);
	cout << name << " -> " << elapsed_seconds << "s - " << ret + 1 << " steps"<< endl; 
}

int main(){
	int n, m, ret;
	cin >> n >> m;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	testbench(fromFront, n, m, &v, "Do Inicio");
	testbench(fromBack, n, m, &v, "Do Final");
}
