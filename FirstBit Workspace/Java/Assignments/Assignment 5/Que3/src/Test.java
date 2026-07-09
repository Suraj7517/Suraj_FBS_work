class Shape {
	double area;

	Shape(){
		this.area=0;
	}

	void setArea(double area){
		this.area=area;
	}
	
	double getArea(){
		return this.area;
	}

	double calArea(){
		return this.area;
	}

	void display(){
		System.out.println("Area Is:"+this.calArea());
	}
}

class Circle extends Shape{
	double radius;

	Circle(double radius){
		this.radius=radius;
		this.area=3.14*this.radius*this.radius;
	}
	
	void setRadius(double radius){
		this.radius=radius;
	}

	double getRadius(){
		return this.radius;
	}

	void display(){
		System.out.println("Radius:"+this.radius);
		super.display();
	}
	double calArea(){
		return this.area=3.14*this.radius*this.radius;
	}

}

class Triangle extends Shape{

	double base;
	double height;

	Triangle(double base,double height){
		this.base=base;
		this.height=height;
		this.area=0.5*this.base*this.height;
	}
	
	void setBase(double base){

		this.base=base;
	}

	double getBase(){
		return this.base;
	}

	
	void setHeight(double height){

		this.height=height;
	}
	
	double getHeight(){
		return this.height;
	}

	void display(){
	
	System.out.println("Base:"+this.base);
	System.out.println("Height:"+this.height);
	super.display();

	}
	
	double calArea(){
		return this.area=0.5*this.base*this.height;
	}

}

class Rectangle extends Shape{
	double length;
	double breadth;
	
	Rectangle(double length,double breadth){	
		this.length=length;
		this.breadth=breadth;
		this.area=this.length*this.breadth;
	}
	
	void setLength(double length){
		this.length=length;
	}

	double getLength(){
		return this.length;
	}
	
	void setBreadth(double breadth){
		this.breadth=breadth;
	}

	double getBreadth(){
		return this.breadth;
	}
	
	void display(){
		System.out.println("Length: "+this.length);
		System.out.println("Breadth: "+this.breadth);
		super.display();
	}
	
	double calArea(){
		return this.area=this.length*this.breadth;
	}
}

class Test{

	public static void main(String [] args){
		
		Shape s1;
		
		s1=new Circle(35);
		System.out.println("Area of circle: "+s1.calArea());

		s1=new Triangle(25,20);
		System.out.println("Area of triangle: "+s1.calArea());

		s1=new Rectangle(50,70);
		System.out.println("Area of Rectangle: "+s1.calArea());
	}
}