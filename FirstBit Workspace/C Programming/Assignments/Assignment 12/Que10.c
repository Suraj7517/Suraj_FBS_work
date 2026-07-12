//10. Write a program to check the string is palindrome or not.

void main()
{
    char str[] = "Suraj";
    char pdr[100];

    int length = strlen(str);
    int i = 0;

    for (int j = length - 1; j >= 0; j--)
    {
        pdr[i] = str[j];
        i++;
    }

    pdr[i] = '\0';

    printf("%s\n", pdr);

    if (strcmp(str, pdr) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
