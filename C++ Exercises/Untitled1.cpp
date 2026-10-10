#include <stdio.h>
#include <stdlib.h>

int main() {
	char password[16];
	int is_admin = 0;
	
	printf("Nhap mat khau: ");
	scanf("%15s", password);
	
	if (is_admin !=0)
		printf("Chuc mung! Ban da dang nhap voi quyen Admin.\n");
	else
		printf("Truy cap bi tu choi. Ban chi la user thuong.\n");

	return 0;
}
