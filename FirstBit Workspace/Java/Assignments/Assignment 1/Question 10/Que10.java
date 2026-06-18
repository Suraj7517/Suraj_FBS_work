class Bike{
	String brand;
	String color;
	double milege;
	int speed;

	Bike(){
		this.brand="YAMAHA";
		this.color="Black";
		this.milege=45;
		this.speed=230;
	}

	Bike(String b,String c,double m,int s){
		this.brand=b;
		this.color=c;
		this.milege=m;
		this.speed=s;
	}

	void setBrand(String b){
		this.brand=b;
	}
	void setColor(String c){
		this.color=c;	
	}

	void setMilege(double m){
		this.milege=m;
	}
	void setSpeed(int s){
		this.speed=s;
	}
		
	String getBrand(){
		return this.brand; 
	}
	String getColor(){
		return this.color; 
	}
	double getMilege(){
		return this.milege; 
	}
	int getSpeed(){
		return this.speed; 
	}


	void display(){
		System.out.println("Brand Name:"+this.brand);
		System.out.println("Color:"+this.color);
		System.out.println("Milege:"+this.milege);
		System.out.println("Speed:"+this.speed);
	}
	
	public String toString(){
		return "Brand Name:"+this.brand+" Color:"+this.color+" Milege:"+this.milege+" Speed:"+this.speed;
	}

}
class Test10{
	public static void main(String [] args){
		Bike b1;
		b1=new Bike("KTM","White",55,390);
		System.out.println("HashCode:"+b1.hashCode());
		b1.display();
	}
}