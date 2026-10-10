#include <iostream> 
using namespace std;

int main() {
	int n, i;
	float S;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	 S = 0;
	 i = 1;
	while (i<=n) {
		S = (S+1)/(i*(i+1));
		i = i+1;
	continue;
	}
	if (i>n);
	cout << "Ket qua S la: " << S << endl;
	return 0;
}
