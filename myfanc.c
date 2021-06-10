//ŠÖ”’è‹`
#include<stdio.h>
void star() {
	printf("š");
}
void nextLine() {
	printf("\n");
}
void stars(int num) {
	for (int i = 0; i < num; i++) {
		star();
	}
	nextLine();
}