#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>

int main(int argc,char *argv[]){
	uint32_t a;
	uint32_t b;
	
	FILE *numFile1= fopen(argv[1],"rb");
	FILE *numFile2= fopen(argv[2],"rb");
	int num1 = fread(&a,sizeof(uint32_t),1,numFile1);
	int num2 = fread(&b,sizeof(uint32_t),1,numFile2);

	a=ntohl(a);
	b=ntohl(b);

	printf("%d(%X) + %d(%X) = %d(%X)\n",a,a,b,b,a+b,a+b);

	fclose(numFile1);
	fclose(numFile2);

	return 0;
	}
