int main() {
	int a, b, max, step, lcm;

	a = 3;
	b = 4;
	lcm = 0;

	if (a > b)
		max = step = a;
	else
		max = step = b;

	while (1) {
		if (max%a == 0 && max%b == 0) {
			lcm = max;
			break;
		}

		max += step;
	}

	cout<<"BSCNN ="<< lcm;
	cout << "bai cua danh";
	return 0;
}