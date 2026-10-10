#include <stdio.h>
using namespace std;

int main() {
	int i, j;
	i = 8;
	
	j=5;
	int ketqua = ++i;
	printf("Ket qua cua 2 * ((i / 4) + (6 * (j – 3)) % (i + j – 4)) la %d\n", ketqua) ;
	return 0;
}
