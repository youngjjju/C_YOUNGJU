#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int total = 0;

int main() {
	
	int i;
	char input[100];
	char* token;
	double total_credit = 0;
	double total_score = 0;

	for(i = 0; i < 20;i++) {

		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = NULL;
		token = strtok(input, " ");
		char *grade = strtok(NULL , " ");
		char* abc = strtok(NULL, " ");
		double credit= atof(grade);
		total_credit += credit;
		
		if (strcmp("A+", abc)==0) {
			total_score += 4.5 * credit;
		}
		if (strcmp("A0", abc) == 0) {
			total_score += 4.0 * credit;
		}
		if (strcmp("B+", abc) == 0) {
			total_score += 3.5 * credit;
		}
		if (strcmp("B0", abc) == 0) {
			total_score += 3.0 * credit;
		}
		if (strcmp("C+", abc) == 0) {
			total_score += 2.5 * credit;
		}
		if (strcmp("C0", abc) == 0) {
			total_score += 2.0 * credit;
		}
		if (strcmp("D+", abc) == 0) {
			total_score += 1.5 * credit;
		}
		if (strcmp("D0", abc) == 0) {
			total_score += 1.0 * credit;
		}
		if (strcmp("P", abc) == 0) {
			total_credit -= credit;
		}

	}
	if (total_credit != 0) {
		printf("%lf", total_score / total_credit);
	}
	else {
		printf("%lf", 0.000000);
	}
}