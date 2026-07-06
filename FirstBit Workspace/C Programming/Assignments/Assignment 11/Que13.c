//mystrncmp

int mystrncmp(char str1[], char str2[], int n)
{
	int i = 0;

	while(i < n && str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
			return str1[i] - str2[i];

		i++;
	}

	if(i == n)
		return 0;

	return str1[i] - str2[i];
}

void main()
{
	printf("%d\n", mystrncmp("Programming", "Programmer", 7));
}