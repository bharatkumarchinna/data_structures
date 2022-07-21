#include<stdio.h>
void hanoi(int n, char A, char C, char B){
	if(n==1){
		printf("Moved disk 1 from rod %c to rod %c.\n", A, C);
		return;
	}
	hanoi(n-1,C,B,A);
	printf("Moved disk %d from %c to %c.\n",n, A, C);
	hanoi(n-1, B, C, A);
}
int main(){
	int n = 4;
	hanoi(n, 'A', 'C', 'B'); 
	return 0;
}
