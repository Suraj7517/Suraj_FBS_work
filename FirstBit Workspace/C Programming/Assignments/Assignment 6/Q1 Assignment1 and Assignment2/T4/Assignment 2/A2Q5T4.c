/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/
float Price(float,char);
void main(){
	float price;
	char user;
	printf("Enter The price : ");
	scanf(" %f",&price);
	
	printf("Are you student(y/n): ");
	scanf(" %c",&user);
	
	float amt=Price(price,user);
	printf("payable amount is=%.2f",amt);
}
float Price(float price,char user){
	
	if(user=='y'){
	
		if(price>500){
			price-=price*0.20;
			return price;
			}
		else{
			price-=price*0.10;
			return price;
		}
	}
 	else if(user=='n'){
 			if(price>600){
			price-=price*0.15;
			return price;
			}
		else{
				return price;
		}
 		
	 }
}
