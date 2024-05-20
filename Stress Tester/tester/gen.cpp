#include <bits/stdc++.h>
using namespace std;
mt19937 gen;
int get(int a, int b){
	uniform_int_distribution<int> dist(a, b);
	return dist(gen);
}
int main(int argc, char **argv){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	gen.seed(stoi(argv[1]));
	int a=get(1, 10000), b=get(1, 10000);
	cout<<a<<" "<<b<<"\n";
	//wygeneruj test przekierowując go na standardowe wyjście np. i
	//nt n=get(1, 10);
	//cout<<n;
	return 0;
}
