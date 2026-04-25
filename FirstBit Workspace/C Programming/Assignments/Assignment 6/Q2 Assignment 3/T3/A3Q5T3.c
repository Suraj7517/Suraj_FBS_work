/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/
void check();
void main() {
	int no=153;
    check(no);
}
void check(int no){
	int temp, rem, result = 0;
    int digits = 0, i, power;
    temp = no;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = no;

    while (temp != 0) {
        rem = temp % 10;

        power = 1;
        for (i = 1; i <= digits; i++) {
            power = power * rem;
        }

        result = result + power;
        temp /= 10;
    }

    if (result == no)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}