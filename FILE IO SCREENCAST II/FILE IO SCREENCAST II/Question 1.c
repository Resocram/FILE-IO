/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI acos(-1)
#define OUTPUTFILE "sineTable.txt"
int main(void) {
	FILE* outfile;
	int nvalue;
	double value;
	double sinvalue;
	int count = 1;
	outfile = fopen(OUTPUTFILE, "w");
	if (outfile == NULL) {
		printf("Error opening file\n");
	}
	else {
		printf("Please enter a positive integer N: \n");
		scanf("%d", &nvalue);
		fprintf(outfile,"    x  sin(x)\n");
		while (count <= nvalue) {
			value = (double) count * PI / nvalue;
			sinvalue = sin(value);
			fprintf(outfile, "%5.3f  %5.4f\n", value, sinvalue);
			count++;
		}
		fclose(outfile);
		system("PAUSE");
		return 0;
	}


}
*/