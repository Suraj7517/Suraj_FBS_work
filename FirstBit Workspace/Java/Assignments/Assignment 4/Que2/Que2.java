class Vehicle{
	int vehicleNumber;
	int model;
	String companyName;
	int noOfWheels;
	double prise;

	Vehicle(int vehicleNumber,int model,String companyName,int noOfWheels,double prise){
		this.vehicleNumber=vehicleNumber;
		this.model=model;
		this.companyName=companyName;
		this.noOfWheels=noOfWheels;
		this.prise=prise;
	}

	void setvehicleNumber(int no){
	this.vehicleNumber=no;
	}

	int getvehicleNumber(){
		return this.vehicleNumber;
	}

	void setModel(int model){
		this.model=model;
	}

	int getModel(){
		return this.model;
	}

	void setCompanyName(String name){
		this.companyName=name;
	}

	String getCompanyName(){
		return this.companyName;
	}

	void setNoOfWheels(int noOfWheels){
	this.noOfWheels=noOfWheels;
	}

	int getNoOfWheels(){
		return this.noOfWheels;
	}

	void setPrise(double prise){
	this.prise=prise;
	}


	double getPrise(){
		return this.prise;
	}

	void display(){
		System.out.println("No of Vehicle: "+this.vehicleNumber);
		System.out.println("Model: "+this.model);
		System.out.println("Company: "+this.companyName);
		System.out.println("No of wheels: "+this.noOfWheels);
		System.out.println("Prise: "+this.prise);
	}
}

class Bike extends Vehicle{
	int noOfStands;
	int noOfHelmets;
	String bikeCategeory;

	Bike(int vehicleNumber,int model,String comapnyName,int noOfWheels,double prise,int noOfStands,int noOfHelmets,String bikeCategeory){
		super(vehicleNumber,model,comapnyName,noOfWheels,prise);
		this.noOfStands=noOfStands;
		this.noOfHelmets=noOfHelmets;
		this.bikeCategeory=bikeCategeory;
	}
	
	void setnoOfStands(int no){
	this.noOfStands=no;
	}

	int getNoOfStands(){
		return this.noOfStands;
	}

	void setNoOfHelmets(int noOfHelmets){
		this.noOfHelmets=noOfHelmets;
	}

	int getnoOfHelmets(){
		return this.noOfHelmets;
	}

	void setBikeCategeory(String bikeCategeory){
		this.bikeCategeory=bikeCategeory;
	}

	String getCompanyName(){
		return this.bikeCategeory;
	}

	void display(){
		super.display();
		System.out.println("No of stands: "+this.noOfStands);
		System.out.println("No of helmets: "+this.noOfHelmets);
		System.out.println("Categeory: "+this.bikeCategeory);
	}

}

class Car extends Vehicle{
	String hasPowerSteering;
	String driveMode;
	String parkingAssistSensors;
	
	Car(int vehicleNumber,int model,String comapnyName,int noOfWheels,double prise,String hasPowerSteering,
String driveMode,String parkingAssistSensors)
	{
		super(vehicleNumber,model,comapnyName,noOfWheels,prise);
		this.hasPowerSteering=hasPowerSteering;
		this.driveMode=driveMode;
		this.parkingAssistSensors=parkingAssistSensors;
	}

	void sethasPowerSteering(String hasPowerSteering){
	this.hasPowerSteering=hasPowerSteering;
	}

	String getVehicleNumber(){
		return this.hasPowerSteering;
	}

	void setDriveMode(String driveMode){
		this.driveMode=driveMode;
	}

	String getDriveMode(){
		return this.driveMode;
	}

	void setParkingAssistSensors(String parkingAssistSensors){
		this.parkingAssistSensors=parkingAssistSensors;
	}

	String getParkingAssistSensors(){
		return this.parkingAssistSensors;
	}

	void display(){
		super.display();
		System.out.println("Power Steering: "+this.hasPowerSteering);
		System.out.println("Drive Mode:"+this.driveMode);
		System.out.println("Parking Sensor: "+this.parkingAssistSensors);
	}

}

class Bus extends Vehicle{
	int passengerCapacity;
	int standingCapacity;
	
	Bus(int vehicleNumber,int model,String comapnyName,int noOfWheels,double prise,int passengerCapacity,int standingCapacity){
		super(vehicleNumber,model,comapnyName,noOfWheels,prise);
		this.passengerCapacity=passengerCapacity;
		this.standingCapacity=standingCapacity;
		}
	

	void setPassengerCapacity(int passengerCapacity){
		this.passengerCapacity=passengerCapacity;
	}

	int getPassengerCapacity(){
		return this.passengerCapacity;
	}

	void setStandingCapacity(int standingCapacity){
		this.standingCapacity=standingCapacity;
	}

	int getStandingCapacity(){
		return this.standingCapacity;
	}
	
	void display(){
		super.display();
		System.out.println("Passenger Capacity:"+this.passengerCapacity);
		System.out.println("Standing capacity: "+this.standingCapacity);
	}
}

class Test{
	public static void main(String [] args){
	
		Vehicle v1=new Vehicle(2526,2026,"Mahindra",4,2200000);
		v1.display();
		System.out.println();

		Bike b1=new Bike(7775,2026,"YAMAHA",2,190000,2,1,"Sports");
		b1.display();
		System.out.println();

		Car c1=new Car(1777,2026,"Mahindra",4,190000,"Yes","Automatic","Yes");
		c1.display();
		System.out.println();

		Bus bs1=new Bus(7775,2026,"TATA",6,1900000,50,15);
		bs1.display();
	}
}