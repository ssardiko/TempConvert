#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a = atof(argv[1]), b;
	if(argc != 3 || *argv[2] != 'f' && *argv[2] != 'c') {
		printf("Please input valid arguments! \n");
		return(1);
	}
	else if(*argv[2] == 'f') {
		b = (a - 32) * 1.8;
		printf("%f\n", b);
		return(0);
	}
	else {
		b = (a * 1.8) + 32;
		printf("%f\n", b);
		return(0);
	}
}
