int USCLN(int a, int b)
{
	int a, b, i, hcf;

	a = 12;
	b = 16;

	for (i = 1; i <= a || i <= b; i++) {
		if (a%i == 0 && b%i == 0)
			hcf = i;
	}

	COUT<<"USCLN ="<<hcf;

	return 0;
}