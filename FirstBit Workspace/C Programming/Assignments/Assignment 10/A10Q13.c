//Returns length before first matching character.
void main(){
	char str[] = "World";
	printf("%lu", strcspn(str, "ld"));
}