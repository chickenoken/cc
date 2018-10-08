int USCLN(int a, int b)
{
	int a, b, i, hcf;

	cout << "\n  a=";
	cin >> a;
	cout << "\n  b=";
	cin >> b;

	for (i = 1; i <= a || i <= b; i++) {
		if (a%i == 0 && b%i == 0)
			hcf = i;
	}

	cout << "USCLN =" << hcf;

	return 0;
}