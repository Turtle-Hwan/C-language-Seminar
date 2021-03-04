int maxNum(int a[]) {
	int max = 0;
	int i = 0;

	for (int i = 0; i < 20; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}
