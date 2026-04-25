/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
void check();
void main(){
	check();
}
void check(){
	int side1,side2,side3;
	printf("Enter Sides of triangle :");
	scanf(" %d %d %d",&side1,&side2,&side3);
	if(side1 + side2 > side3 &&
	   side2 + side3 > side1 &&
	   side1 + side3 > side2){

			if(side1==side2 && side2==side3 && side1==side3){
				printf("The given triangle is equilateral");
			}
			else if(side1==side2 || side2==side3 || side1==side3){
				printf("The given triangle is isosceles");
			}
			else if(side1!=side2 && side2!=side3 && side1!=side3){
				printf("The given triangle is scalene");
			}
		}
		else
		printf("Invalid triangle!");
}