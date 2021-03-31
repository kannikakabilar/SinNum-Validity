#include <stdio.h>
#include <stdlib.h>


int check_permissions(char *g, char *r){
    for(int n = 0; n<9; n++){
	if((g[n+1]) == '-' && (r[n]) != '-'){
		return 1;
	}
    }
    return 0;
}


int main(int argc, char** argv) {
    if (!(argc == 2 || argc == 3)) {
        fprintf(stderr, "USAGE:\n\tcount_large size [permissions]\n");
        return 1;
    }else{

	int cbyte = 0;
	char perm[10];
	int largeByte = 0;
	largeByte = strtol(argv[1], NULL, 10);
	char* permission = "---------";
	if(argc == 3){
		permission = argv[2];
	}
	int all = 0;

	char name[100];
	scanf("%[^\n]%*c", name);
	while(scanf("%s %*s %*s %*s %d %*s %*s %*s %*s", perm, &cbyte)!=EOF){
		if((cbyte > largeByte) && (check_permissions(perm, permission) == 0)){
			all++;
		}
	}
	printf("%d\n", all);	
	return 0;
    }
	
	
}
