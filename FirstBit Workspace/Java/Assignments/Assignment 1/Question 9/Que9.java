class Fan{
	String brand;
	int noofBlades;
	String color;
	double prise;
	
	Fan(){
		this.brand="Bajaj";
		this.noofBlades=5;
		this.color="White";
		this.prise=45324;
	}

	Fan(String b,int nb,String c,double p){
		this.brand=b;
		this.noofBlades=nb;
		this.color=c;
		this.prise=p;
	}

	//setter
	void setBrand(String b){
		this.brand=b;
	}
	void setNoofblades(int nb){
		this.noofBlades=nb;
	}
	void setColor(String c){
		this.color=c;
	}
	void setPrise(double p){
		this.prise=p;
	}

	//getter
	String getBrand(){
		return this.brand;
	}
	int getNoofblades(){
		return this.noofBlades;
	}
	String getColor(){
		return this.color;
	}
	double getPrise(){
		return this.prise;

	}

	void display(){
		System.out.println("Brand:"+this.brand);
		System.out.println("Blades:"+this.noofBlades);
		System.out.println("Color:"+this.color);
		System.out.println("Prise:"+this.prise);
		
		System.out.println("\n");
	}
	
	public String toString(){
		return "Brand:"+this.brand+" Blades:"+this.noofBlades+" Color:"+this.color+" Prise:"+this.prise;
	}

}

class Test9{
	public static void main(String [] args){
		Fan f1;
		f1 = new Fan("Philips",4,"Orange",5467);
		System.out.println("HashCode:"+f1.hashCode());
		f1.display();

	}
}