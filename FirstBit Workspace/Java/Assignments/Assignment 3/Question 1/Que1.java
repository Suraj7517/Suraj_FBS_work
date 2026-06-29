class ElectricityBill{
String customerName;
static double rate=20;
double unitsConsumed;

ElectricityBill(String name,double unit){
	this.customerName=name;
	this.unitsConsumed=unit;
	}

static void updateRate(double newRate){
	rate=newRate;
	}
void checkBill(){
	System.out.println("Name"+this.customerName);
	System.out.println("Units"+this.unitsConsumed);
	System.out.println("Rate:"+this.rate);
	System.out.println("Bill Amount:"+this.rate*this.unitsConsumed);
}
}
class Test{
	public static void main(String [] args){
		ElectricityBill eb1;
		eb1=new ElectricityBill("Ram",55);
		eb1.checkBill();
		ElectricityBill.updateRate(25);		

		ElectricityBill eb2;
		eb2=new ElectricityBill("Shyam",75);
		eb2.checkBill();
	}

}