//mystrcasecmp

int mystrcasecmp(char str1[], char str2[])
{
	int i = 0;

	while(str1[i] != '\0' && str2[i] != '\0')
	{
		char ch1 = str1[i];
		char ch2 = str2[i];

		if(ch1 >= 'A' && ch1 <= 'Z')
			ch1 = ch1 + 32;

		if(ch2 >= 'A' && ch2 <= 'Z')
			ch2 = ch2 + 32;

		if(ch1 != ch2)
			return ch1 - ch2;

		i++;
	}

	return str1[i] - str2[i];
}

void main()
{
	printf("%d\n", mystrcasecmp("Hello", "hello"));
	return 0;
}