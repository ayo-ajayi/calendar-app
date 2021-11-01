
#include <stdio.h>
#include <stdlib.h>

typedef enum month
{
	jan,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
} month;

typedef struct date
{
	month m;
	int d;
} date;
char print_mon(date x)
{
	switch (x.m)
	{
	case jan:
		printf("jan");
		break;
	case feb:
		printf("feb");
		break;
	case mar:
		printf("mar");
		break;
	case apr:
		printf("apr");
		break;
	case may:
		printf("may");
		break;
	case jun:
		printf("jun");
		break;
	case jul:
		printf("jul");
		break;
	case aug:
		printf("aug");
		break;
	case sep:
		printf("oct");
		break;
	case oct:
		printf("oct");
		break;
	case nov:
		printf("nov");
		break;
	case dec:
		printf("dec");
		break;
	default:
		printf("error");
	}
}

void print_today(date s)
{
	printf("Today is ");
	print_mon(s);
	printf(" %d\n", s.d);
}

void print_tomm(date x)
{
	switch (x.m)
	{
	case jan:
	case mar:
	case may:
	case jul:
	case aug:
	case oct:
	case dec:
		if ((x.d + 1) > 31)
			x.m = (x.m + 1) % 12;
		printf("Tommorrow is ");
		print_mon(x);
		printf(" %d\n", (x.d + 1) % 31);
		break;

	case apr:
	case jun:
	case sep:
	case nov:
		if ((x.d + 1) > 30)
			x.m = x.m + 1;
		printf("Tommorrow is ");
		print_mon(x);
		printf(" %d\n", (x.d + 1) % 30);
		break;

	case feb:
		if ((x.d + 1) > 28)
			x.m = x.m + 1;
		printf("Tommorrow is ");
		print_mon(x);
		printf(" %d\n", (x.d + 1) % 28);
		break;
	}
}

int main()
{
	date today;
	today.m = mar;
	today.d = 14;

	print_today(today);
	print_tomm(today);
	return 0;
}
