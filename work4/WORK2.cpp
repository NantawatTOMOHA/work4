#include<stdio.h>
double aum[4] = { 0,0,0,0 }, m = 0, c = 0;
void data();
void ifelse();
void notsame();
void allprocess();
int main() {
	allprocess();
	return 0;
}
void data() {
	printf("Program calculate sloop and linear equation\n");
	printf("\n");
	printf("Enter coordinate X1 Y1 :\n");
	printf("Enter X1 : ");
	scanf_s("%lf", &aum[0]);
	printf_s("Enter Y1 : ");
	scanf_s("%lf", &aum[1]);
	printf("Enter coordinate X2 Y2 :\n");
	printf("Enter X2 : ");
	scanf_s("%lf", &aum[2]);
	printf("Enter Y2 : ");
	scanf_s("%lf", &aum[3]);
	printf("\n");
	m = ((aum[3] - aum[1]) / (aum[2] - aum[0]));
	c = aum[1] + (-1 * (m * aum[0]));
	if(aum[0] != aum[2] && aum[1] != aum[3]) {
		printf("Sloop : %.2lf\n", m);}
	else if (aum[0] == aum[2]&&aum[1]!=aum[3]) {
		printf("sloop : Infinite\n");
	}else{}
}
void ifelse() {
	if (aum[0] != aum[2] && aum[1] != aum[3]) {
		if (c < 0) { printf("Linear equation : y=%.2lfx%.2lf\n", m, c); }
		else if (c == 0) { printf("Linear equation : y=%.2lfx\n", m); }
		else if (c > 0) { printf("Linear equation : y=%.2lfx+%.2lf\n", m, c); }
		else {}
	}
}
void notsame(){
	while (aum[0] == aum[2] && aum[1] == aum[3]) {
		
		printf("\n");
		printf("!!!coordinate has wrong!!!\n");
		printf("     please try again!\n");
		printf("\n");
		allprocess();
		
	}
}
void allprocess() {
	data();
	notsame();
	ifelse();
}