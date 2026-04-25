/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
int check(int,int,int);
void main(){
	int side1,side2,side3;
	printf("Enter Sides of triangle :");
	scanf(" %d %d %d",&side1,&side2,&side3);
	int res=check(side1,side2,side3);
	
			if(res==1){
				printf("The given triangle is equilateral");
			}
			else if(res==2){
				printf("The given triangle is isosceles");
			}
			else if(res==3){
				printf("The given triangle is scalene");
			}
			else if(res==0){
				printf("Invalid Operation");
			}
}
int check(int side1,int side2,int side3){
	
	if(side1 + side2 > side3 &&
	   side2 + side3 > side1 &&
	   side1 + side3 > side2){

			if(side1==side2 && side2==side3 && side1==side3){
				return 1;
			}
			else if(side1==side2 || side2==side3 || side1==side3){
				return 2;
			}
			else if(side1!=side2 && side2!=side3 && side1!=side3){
				return 3;
			}
		}
		else
		return 0;
}