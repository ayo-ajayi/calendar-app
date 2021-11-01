#include <stdio.h>

typedef enum months
{
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
} months;
typedef struct data
{
	months m;
	int d;
	int ms;
} data;

void printdate(int day, months month)
{
	//This function shows the date value according to the month and day provided
	switch (month)
	{
	case Jan:
		printf("%i January \n", day);
		break;
	case Feb:
		printf("%i February \n", day);
		break;
	case Mar:
		printf("%i March \n", day);
		break;
	case Apr:
		printf("%i April \n", day);
		break;
	case May:
		printf("%i May \n", day);
		break;
	case Jun:
		printf("%i June \n", day);
		break;
	case Jul:
		printf("%i July \n", day);
		break;
	case Aug:
		printf("%i August \n", day);
		break;
	case Sep:
		printf("%i September \n", day);
		break;
	case Oct:
		printf("%i October \n", day);
		break;
	case Nov:
		printf("%i November \n", day);
		break;
	case Dec:
		printf("%i December \n", day);
		break;
	}
}
void tomorrow(int day, int ms, months month)
{
	//This function calculates tomorrow's values
	day++;
	if ((month <= Dec) && (month >= Jan) && (day <= ms))
	{
		printdate(day, month);
	}
	else if ((month == Dec) && (day == 32))
	{
		printdate(1, Jan);
	}
	else
	{
		day = 1;
		month++;
		printdate(day, month);
	}
}

void main()
{
	int day = 0;
	int monthsize[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	data today;
	months month;
	printf("Enter the month and day as follows:\n1 15, for January 15th.\n");
	scanf("%i %i", &month, &day);
	today.m = month;
	today.d = day;
	today.ms = monthsize[month - 1];
	if ((today.m <= Dec) && (today.m >= Jan) && (today.d <= today.ms))
	{
		printf("Today is:");
		printdate(today.d, today.m);
		printf("tomorrow is:");
		tomorrow(today.d, today.ms, today.m);
	}
	else
	{
		printf("Out of range, enter values correctly");
	}
}