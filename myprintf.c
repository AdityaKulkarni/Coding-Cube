#include "mystdio.h"

int main(int argc, char *argv[]){

	int i;
	if(argc <= 1){
		myprintf("Oops! At least 1 param required!\n");
		return -1;
	}

	for(i = 1; i < argc; i++){
		myprintf(argv[i]);
		myprintf("\n");
	}
	return 1;
}
