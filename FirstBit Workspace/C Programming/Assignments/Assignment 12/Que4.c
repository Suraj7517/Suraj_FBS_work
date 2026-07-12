/*4. WAP to Form a New String where the First Character and the Last Character have
been Exchanged*/

void main(){
  char str[] = "Suraj";
    int len = strlen(str);

    char temp;

    temp=str[0];
    str[0]=str[len-1];
    str[len-1]=temp;

    printf("%s",str);

}