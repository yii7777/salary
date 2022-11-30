#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int salary = 38000;
	int year = salary * 2;
	int bonus;
	int input;
	int yearsalary;
	int i;
	int bonus_sum;
	
	for(i = 0;i < 4; i++){
		printf("Enter your achievement:");
	scanf("%d", &input);
		if(input >= 300000)
	    bonus = 3000;
	else
	    bonus = 1500;
	    bonus_sum = bonus_sum + bonus;
	}

	yearsalary = salary * 12 + year + bonus_sum;
	printf("Your yearsalary have %d\n", yearsalary);
	return 0;
}
