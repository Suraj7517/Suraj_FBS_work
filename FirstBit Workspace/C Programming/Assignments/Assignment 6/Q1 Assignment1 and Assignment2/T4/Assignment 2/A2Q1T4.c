/*1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
int Op(int, int, char);

void main(){
    int a, b;
    char ope;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+,-,/,*,%%): ");
    scanf(" %c", &ope);

    int res = Op(a, b, ope);

    if(res == -9999){
        printf("Invalid operation");
    }
    else{
        printf("The operational value is = %d", res);
    }
}

int Op(int a, int b, char op){

    if(op == '+'){
        return a + b;
    }
    else if(op == '-'){
        return a - b;
    }
    else if(op == '*'){
        return a * b;
    }
    else if(op == '/'){
        if(b == 0){
            return -9999;
        }
        return a / b;
    }
    else if(op == '%'){
        if(b == 0){
            return -9999;
        }
        return a % b;
    }
    else{
        return -9999;
}
}