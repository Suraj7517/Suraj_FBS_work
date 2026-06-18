
class BankAccount{
	long accountNumber;
	String holderName;
	double currentBalance;
	double interstrate;

	BankAccount(){
		this.accountNumber=531561;
		this.holderName="guru";
		this.currentBalance=123411;
		this.interstrate=12;
	}

	BankAccount(long ac,String n,double b,double ir){
		this.accountNumber=ac;
		this.holderName=n;
		this.currentBalance=b;
		this.interstrate=ir;
	}


	void setAcnumber(long ac){
		this.accountNumber=ac;
	}

	void setName(String n){
		this.holderName=n;
	}

	void setBalance(double b){
		this.currentBalance=b;
	}

	void setInterstRate(double ir){
		this.interstrate=ir;
	}
	
	long getAcnumber(){
		return this.accountNumber;
	}

	String getName(){
		return this.holderName;
	}

	double getBalance(){
		return this.currentBalance;
	}

	double getIntrestrate(){
		return this.interstrate;
	}

	void display(){
		System.out.println("Account Number:"+this.accountNumber);
		System.out.println("Holder Name:"+this.holderName);
		System.out.println("Account Balance:"+this.currentBalance);
		System.out.println("Intrest Rate:"+this.interstrate);
	}

	public String toString(){
		return "Account Number:"+this.accountNumber+" Holder Name:"+this.holderName+" Account Balance:"+this.currentBalance+" Intrest Rate:"+this.interstrate;
	}

}
class Test8{

public static void main(String [] args){
	BankAccount ac1;
	ac1=new BankAccount(1231123,"Mahesh",63662,15);
	System.out.println("HashCode:"+ac1.hashCode());
	ac1.display();

	}
}