
class Shape{
	double area;
	double calculateArea(Triangle t){
		area=0.5*t.base*t.height;
	return area;
	}
	
	double calculateArea(Rectangle r){
		area=r.length*r.breadth;
		return area;
	}
	
	double calculateArea(Circle c){
		area=3.14*c.radius*c.radius;
		return area;
	}

}


class Triangle{
	
	double base;
	double height;

	Triangle(double base,double height){
		this.base=base;
		this.height=height;
	}
}

class Rectangle{
	double length;
	double breadth;
	
	Rectangle(double length,double breadth){
		this.length=length;
		this.breadth=breadth;
	}
	
}

class Circle{
	double radius;
	
	Circle(double radius){
		this.radius=radius;
	}
}

class TestShape{
	public static void main(String [] args){
		Shape s1=new Shape();
		Triangle t1=new Triangle(23,43);
		Rectangle r1=new Rectangle(32,65);
		Circle c1=new Circle(50);
		
		System.out.println(s1.calculateArea(t1));
		System.out.println(s1.calculateArea(r1));
		System.out.println(s1.calculateArea(c1));
	
	}
}