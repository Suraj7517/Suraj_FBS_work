/*3. Create a program to manage a to-do list. Implement a structure to store
task details (task ID, description, and status). Write a menu-driven
program to add, update, and display tasks. Use functions for each
operation.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct task{
	int taskId;
	char description[50];
	char status[20];
}task;
void addTask(task* Ntask,int *cindex,int size){
	if(*cindex==size){
		printf("Task size full!");
		return;
	}
	for(int i=*cindex; i<size; i++){
		char dis[50],sts[20];
		printf("Enter task Id:");
		scanf("%d",&Ntask[i].taskId);
		
		printf("Enter task description:");
		scanf("%s",dis);
		strcpy(Ntask[i].description,dis);
		
		printf("Enter task status:");
		scanf("%s",sts);
		strcpy(Ntask[i].status,sts);
		
		(*cindex)++;
		
		printf("Your task successfully added!\n");
		return;
	}
	
}
void updateTask(task* Utask,int id,int cindex){

    int found = 0;

    for(int i=0;i<cindex;i++){

        if(Utask[i].taskId==id){

            found = 1;

            printf("Enter New task Id:");
            scanf("%d",&Utask[i].taskId);

            printf("Enter New task description:");
            scanf(" %[^\n]", Utask[i].description);

            printf("Enter New task status:");
            scanf(" %[^\n]", Utask[i].status);

            printf("Task Updated Successfully!\n");
        }
    }

    if(found==0){
        printf("Task not found!");
    }
}

void displayTask(task* Dtask,int cindex){
	for(int i=0; i<cindex; i++){
	printf("\nTask ID:%d",Dtask[i].taskId);
	printf("\nTask discription:%s",Dtask[i].description);
	printf("\nTask status:%s\n",Dtask[i].status);
	}
}


void main(){
	
	printf("*Task Magement*\n");
	int size;
	printf("Enter no of tasks:");
	scanf("%d",&size);
	task Tasks[size];
	
	
	int cindex=0;
	int exit=0;
	while(exit!=1){
	
	int choice;
	printf("\n1.Add task\n");
	printf("2.Update task\n");
	printf("3.Display Task\n");
	printf("4.Exit\n");
	
	printf("\n Enter your choice:");
	scanf("%d",&choice);

	switch(choice){
		case 1:{
			addTask(Tasks,&cindex,size);
			break;
		}
		case 2:{
			int id;
			printf("Enter task ID to update");
			scanf("%d",&id);
			updateTask(Tasks,id,cindex);
			break;
		}
		
		case 3:{
			displayTask(Tasks,cindex);
			break;
		}
		case 4:{
			exit=1;
			break;
		}
	}
	
}
}