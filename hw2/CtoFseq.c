/* Program: C_to_F10k.c
* Author: Michael Goldman
* This is the sequencial one
*/



int main() {
	int count;
	double cel[10];
	double i = 0;

	for(count = 0; count < 10; count++) {
		cel[count] = (i - 32) * (5/9);
		i = i + .01;
	}

	for(count = 0; count < 10; count++) {
		printf("%d\n", cel[count]);
	}
}

/*
* Program: C_to_F10k.c
* Author: Michael Goldman
* This is the sequencial one
*
int i;
float fahr = 0;	

void fillArr(int n, int cel[]) {

	for(i = 0; i < n; i++) {
		cel[i] = (fahr - 32) * (5/9);
		printf("%dF ==> %dC\n", fahr, cel[i]);		
		fahr = fahr + .01;

	}

}

void printArr(int n, int cel[]) {
	float fahr = 0;

	for(i = 0; i < n; i++) {
		printf("%dF ==> %dC\n", fahr, &cel[i]);
		fahr = fahr + .01;
	}
}
		


float main() {

	int cel[1000];
	int n = 1000;

	fillArr(n, cel);
//	printArr(n, cel);
	
}
*/
