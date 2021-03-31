int populate_array(int sin, int *sin_array) {
	int d = sin;
	int c = 0;
	int b[9];
	while(d>0){
		sin_array[8-c] = d%10;
		d = d/10;
		c++;
	}
	for(int e=8; e>=0; e--){
		b[8-e] = sin_array[e];
	}
	for(int i=0; i<9; i++){
		sin_array[i] = b[i];
	}
	if(c==9){
		return 0;
	}else{
		return 1;
	}
}

int check_sin(int *sin_array) {
	int e[] = {1,2,1,2,1,2,1,2,1};
	int f[9];
	int m = 0;
	int n = 0;
	for(int k=0; k<9; k++){
		if(e[k] * (sin_array[k])>9){
			n = (e[k] * (sin_array[k]))%10;
			m = n + ((e[k] * (sin_array[k]))/10);
		}else{
			m = e[k] * (sin_array[k]);
		}
		f[k] = m;
		//printf("%d\n", f[k]);
	}

	int sum = 0;
	for(int p = 0; p<9; p++){
		sum += f[p];
	}
	if(sum%10 == 0){
		return 0;
	}else{
    		return 1;
	}
}
