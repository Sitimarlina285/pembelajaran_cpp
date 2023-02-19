#include <iostream>
using namespace std;

int main(){
	//membuat variabel
	char name [25], web_address[30];
	
	printf ("nama: ");
	scanf("%s", &name);
	
	printf ("alamat web: ");
	scanf("%s", &web_address);
	
	printf("\n-----------------------------\n");
	printf("nama yang di inputkan: %s\n", name );
	printf("alat web yang di inputkan: %s\n", web_address);
	
	return 0;
}
