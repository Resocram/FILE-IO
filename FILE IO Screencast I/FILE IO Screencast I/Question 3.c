/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INPUTFILE "yvrTemperatures08.txt"
int main(void) {
	FILE* infile;
	int val1;
	double val2;
	double val3;
	double val4;
	double val5;
	double midnightsum = 0;
	int day = 0;
	infile = fopen(INPUTFILE, "r");
	if (infile == NULL) {
		printf("Error opening file");
	}
	else {
		while (fscanf(infile, "%d %lf %lf %lf %lf", &val1, &val2, &val3, &val4, &val5) == 5) {
			midnightsum += val2;
			day++;
		}
		
	}
	printf("Average midnight temperature: %.1f\n", midnightsum / day);
	fclose(infile);

	system("PAUSE");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INPUTFILE "yvrTemperatures08.txt"
int main(void) {
	FILE* infile;
	int val1;
	double val2;
	double val3;
	double val4;
	double val5;
	int random = 0;
	double minnoon;
	double maxnoon;
	infile = fopen(INPUTFILE, "r");
	if (infile == NULL) {
		printf("Error opening file");
	}
	else {
		while (fscanf(infile, "%d %lf %lf %lf %lf", &val1, &val2, &val3, &val4, &val5) == 5) {
			if (random == 0) {
				minnoon = val2;
				maxnoon = val2;
				random = 1;
			}
			if (val2 > maxnoon) {
				maxnoon = val2;
			}
			else if (val2 < minnoon) {
				minnoon = val2;
			}
		}

	}
	printf("Lowest noon temperature: %.1f\n", minnoon);
	printf("Highest noon temperature: %.1f\n", maxnoon);
	fclose(infile);

	system("PAUSE");
	return 0;
}
*/