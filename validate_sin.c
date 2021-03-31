#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int populate_array(int sin, int *sin_array);
int check_sin(int *sin_array);

int main(int argc, char **argv) {
    //printf("%c\n", argv[1][0]);
    if(argc != 2){
	return 1;
    }
    if(argv[1][0] == '0' || strlen(argv[1]) != 9 ){
	printf("Invalid SIN\n");
	return 0;
    }
    int num = strtol(argv[1], NULL, 10);
    int arr[9];
    populate_array(num, arr);
    if(check_sin(arr)==0){
	printf("Valid SIN\n");
    }else{
	printf("Invalid SIN\n");
    }
  
    return 0;
}
