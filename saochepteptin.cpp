#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	ifstream in;
	ofstream out;
	in.open("PTIT.in");
	out.open("PTIT.out");
	while(!in.eof()){
		getline(in, a);
		out << a;
		out << '\n';
	}
	in.close();
	out.close();
}