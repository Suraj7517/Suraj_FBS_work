//3. WAP to Remove the nth Index Character from a Non-Empty String.
void main(){
  char str[] = "Suraj";
    int n = 3;

    int i = n;

    while(str[i] != '\0'){
        str[i] = str[i+1];
        i++;
    }

    printf("%s", str);
}