#include<stdio.h>
#include<stdlib.h>
typedef struct Student{
	int rollNo;
	char name [15];
	int marks;
}Student;

void addStudentByValue(Student s1){
	s1.rollNo=111;
	strcpy(s1.name,"Suraj");
	s1.marks=77;
	displayStudentByValue(s1);
}
void displayStudentByValue(Student s1){
	printf("Roll No : %d ",s1.rollNo);
	printf("Name : %s ",s1.name);
	printf("Marks : %d\n",s1.marks);
}

void addStudentByAddress(Student *s1){
	s1->rollNo=121;
	strcpy(s1->name,"Sammed");
	s1->marks=88;
	
	displayStudentByAddress(s1);
}

void displayStudentByAddress(Student* s1){
	printf("Roll No : %d ",s1->rollNo);
	printf("Name : %s ",s1->name);
	printf("Marks : %d\n",s1->marks);
}

void addStudentByAddressArray(Student *s2,int size){
	s2[0].rollNo=131;
	strcpy(s2[0].name,"Pranav");
	s2[0].marks=81;
	
	s2[1].rollNo=141;
	strcpy(s2[1].name,"Sahil");
	s2[1].marks=64;
	
	displayStudentByAddressArray(s2,size);
}
void displayStudentByAddressArray(Student *s2,int size){
	for(int i=0;i<size;i++){
		printf("Roll No : %d ",s2[i].rollNo);
		printf("Name : %s ",s2[i].name);
		printf("Marks : %d\n",s2[i].marks);
	}
}

void main(){
	Student s1,s2[2];
	int size=2;
	addStudentByValue(s1);
	
	addStudentByAddress(&s1);
	addStudentByAddressArray(s2,size);
}