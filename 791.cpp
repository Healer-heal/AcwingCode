#include<iostream>
#include<vector>
using namespace std;

vector<int> Add(vector<int> &A, vector<int> &B) {
	vector<int>c;
	int t = 0;
	for(int i = 0; i < A.size() || i < B.size(); i++) {
		if (i < A.size()) {
			 t += A[i];
		}
		
		if (i < B.size()) {
			t += B[i];
		}
		
		c.push_back(t % 10 );
		t /= 10;
	}
	
	if (t) {
		c.push_back(1);
	}
	
	return c;
}

int main()
{
	string a, b;
	vector<int>A,B;
	cin>> a >> b;
	for(int i = a.size() - 1; i >= 0; i--) {
		A.push_back(a[i] - '0');
	}
	
	for(int i = b.size() - 1; i >= 0; i--) {
		B.push_back(b[i] - '0');
	}
	
	auto c = Add(A,B);
	int len = c.size();
	while(c[len - 1] == 0 && len > 0) {
		len--;
	}
	
	if (len == 0) {
		for(int i = len; i >= 0; i--) {
			printf("%d",c[i]);
		}
	}
	
	else {
		for(int i = len - 1; i >= 0; i--) {
			printf("%d",c[i]); 
		}
	}

	
	return 0;
}