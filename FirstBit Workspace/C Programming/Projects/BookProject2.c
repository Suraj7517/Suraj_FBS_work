#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Book{
	int Book_ID; 
	char Book_Name[20],Author_Name[20];
	double Price,Rating;
}Book; 

void addBook(Book *arr,int *nBooks,int *cindex){
	if(*cindex==*nBooks){
		printf("Array full!");
		int newSize=*nBooks*2;
		arr=realloc(arr,sizeof(Book)*newSize);
		*nBooks=newSize;
		printf("Reallocation Completed\n");
		printf("%d",*nBooks);
		
		
	}
	else{
		for(int i=*cindex; i<*nBooks; i++){
		char name[20],bname[25];
		printf("Enter book id:\n");
		scanf("%d",&arr[i].Book_ID);
		
		printf("Enter book name:\n");
		scanf("%s",name);
		strcpy(arr[i].Book_Name,name);
		
		printf("Enter author name:\n");
		scanf("%s",bname);
		strcpy(arr[i].Author_Name,bname);
		
		printf("Enter Prise:\n");
		scanf("%lf",&arr[i].Price);
		
		printf("Enter Rating(1-10):\n");
		scanf("%lf",&arr[i].Rating);
		
		*cindex=*cindex+1;
		printf("New book successfully added..");
		break;
		}
	}
}
void  removeBook(Book *arr,int *cindex,int id){
		for(int i=0;i<*cindex;i++){
			if(arr[i].Book_ID==id){
				for(int j=i;j<*cindex;j++){
					arr[j]=arr[j+1];
				}
				*cindex=*cindex-1;
				printf("Your book has been removed.");
			}
		}
	}
void categeory1(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"ShyamchiAai")==0 || 
   			strcmp(arr[i].Book_Name,"AamchaBaapAniAmhi")==0 || 
   			strcmp(arr[i].Book_Name,"Smritichitre")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory2(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"ShrimanYogi")==0 || 
   			strcmp(arr[i].Book_Name,"RajaShivChatrapati")==0 || 
   			strcmp(arr[i].Book_Name,"Panipat")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory3(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"Mrityunjay")==0 || 
   			strcmp(arr[i].Book_Name,"Yayati")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory4(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"Kosala")==0 || 
   			strcmp(arr[i].Book_Name,"GarambichaBapu")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory5(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"Baluta")==0 || 
   			strcmp(arr[i].Book_Name,"Uchalya")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory6(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"Natasamrat")==0 ){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}
void categeory7(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"BatatyachiChal")==0 || 
   			strcmp(arr[i].Book_Name,"AsaMiAsami")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}

void categeory8(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"Duniyadari")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}
void categeory9(Book*arr,int cindex){
	for(int i=0;i<cindex;i++){
		if(strcmp(arr[i].Book_Name,"VyaktiAniValli")==0 || 
   			strcmp(arr[i].Book_Name,"HirvaChafa")==0){
			
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Prise:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	
	}
}
void searchByAname(Book *arr,int cindex,char *aname){
	int found=0;
	for(int i=0;i<cindex; i++){
		if(strcmp(arr[i].Author_Name, aname) == 0){
			found=1;
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Price:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
		}
	}
	if(found==1){
		printf("Books Not Found!");
	}
		
	
	
}
void highPrise(Book *arr,int cindex){
	
	for(int i=0; i<cindex-1; i++){
		for(int j=0;j<cindex-i-1;j++){
			if(arr[j].Price<arr[j+1].Price){
				Book temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Book List Max to Min\n");
	for(int i=0; i<cindex; i++){
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Price:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
	}
	
}

void highRating(Book *arr,int cindex){
	
	for(int i=0; i<cindex-1; i++){
		for(int j=0;j<cindex-i-1;j++){
			if(arr[j].Rating<arr[j+1].Rating){
				Book temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Highly rated books\n");
	for(int i=0; i<cindex; i++){
			printf("Book id:%d\n",arr[i].Book_ID);
			
			printf("Book name:%s\n",arr[i].Book_Name);
			
			printf("Author name:%s\n",arr[i].Author_Name);
			
			printf("Price:%.2f\n",arr[i].Price);
			
			printf("Rating(1-10):%.1f\n",arr[i].Rating);
			
			printf("\n");
	}
	
}
void updateBook(Book *arr,int cindex,int id){
	for(int i=0;i<cindex;i++){
		if(arr[i].Book_ID==id){
			
			char name[20],bname[25];
				
			printf("Enter new details:\n");
					
			printf("Enter book id:\n");
			scanf("%d",&arr[i].Book_ID);
			
			printf("Enter book name:\n");
			scanf("%s",name);
			strcpy(arr[i].Book_Name,name);
			
			printf("Enter author name:\n");
			scanf("%s",bname);
			strcpy(arr[i].Author_Name,bname);
			
			printf("Enter Prise:\n");
			scanf("%lf",&arr[i].Price);
			
			printf("Enter Rating(1-10):\n");
			scanf("%lf",&arr[i].Rating);
			
			printf("Your has been successfully updated");
		
		}
	}
}
void storeHardcoded(Book *arr){
arr[0].Book_ID=1;
strcpy(arr[0].Book_Name,"ShyamchiAai");
strcpy(arr[0].Author_Name,"Sane Guruji");
arr[0].Price=250;
arr[0].Rating=9.8;

arr[1].Book_ID=2;
strcpy(arr[1].Book_Name,"Mrityunjay");
strcpy(arr[1].Author_Name,"Shivaji Sawant");
arr[1].Price=400;
arr[1].Rating=9.9;

arr[2].Book_ID=3;
strcpy(arr[2].Book_Name,"Yayati");
strcpy(arr[2].Author_Name,"V S Khandekar");
arr[2].Price=350;
arr[2].Rating=9.7;

arr[3].Book_ID=4;
strcpy(arr[3].Book_Name,"BatatyachiChal");
strcpy(arr[3].Author_Name,"Pu La Deshpande");
arr[3].Price=300;
arr[3].Rating=9.6;

arr[4].Book_ID=5;
strcpy(arr[4].Book_Name,"VyaktiAniValli");
strcpy(arr[4].Author_Name,"Pu La Deshpande");
arr[4].Price=320;
arr[4].Rating=9.8;

arr[5].Book_ID=6;
strcpy(arr[5].Book_Name,"Kosala");
strcpy(arr[5].Author_Name,"Bhalchandra Nemade");
arr[5].Price=280;
arr[5].Rating=9.3;

arr[6].Book_ID=7;
strcpy(arr[6].Book_Name,"Radhey");
strcpy(arr[6].Author_Name,"Ranjit Desai");
arr[6].Price=360;
arr[6].Rating=9.5;

arr[7].Book_ID=8;
strcpy(arr[7].Book_Name,"Swami");
strcpy(arr[7].Author_Name,"Ranjit Desai");
arr[7].Price=370;
arr[7].Rating=9.7;

arr[8].Book_ID=9;
strcpy(arr[8].Book_Name,"ShrimanYogi");
strcpy(arr[8].Author_Name,"Ranjit Desai");
arr[8].Price=500;
arr[8].Rating=9.9;

arr[9].Book_ID=10;
strcpy(arr[9].Book_Name,"Panipat");
strcpy(arr[9].Author_Name,"Vishwas Patil");
arr[9].Price=450;
arr[9].Rating=9.6;

arr[10].Book_ID=11;
strcpy(arr[10].Book_Name,"Natasamrat");
strcpy(arr[10].Author_Name,"V V Shirwadkar");
arr[10].Price=300;
arr[10].Rating=9.8;

arr[11].Book_ID=12;
strcpy(arr[11].Book_Name,"Zadazadati");
strcpy(arr[11].Author_Name,"Vishwas Patil");
arr[11].Price=380;
arr[11].Rating=9.2;

arr[12].Book_ID=13;
strcpy(arr[12].Book_Name,"HirvaChafa");
strcpy(arr[12].Author_Name,"V P Kale");
arr[12].Price=260;
arr[12].Rating=9.1;

arr[13].Book_ID=14;
strcpy(arr[13].Book_Name,"Partner");
strcpy(arr[13].Author_Name,"V P Kale");
arr[13].Price=270;
arr[13].Rating=9.0;

arr[14].Book_ID=15;
strcpy(arr[14].Book_Name,"Duniyadari");
strcpy(arr[14].Author_Name,"Suhas Shirvalkar");
arr[14].Price=340;
arr[14].Rating=9.7;

arr[15].Book_ID=16;
strcpy(arr[15].Book_Name,"JaiShivray");
strcpy(arr[15].Author_Name,"Babasaheb Purandare");
arr[15].Price=600;
arr[15].Rating=9.9;

arr[16].Book_ID=17;
strcpy(arr[16].Book_Name,"RajaShivChatrapati");
strcpy(arr[16].Author_Name,"Babasaheb Purandare");
arr[16].Price=650;
arr[16].Rating=9.9;

arr[17].Book_ID=18;
strcpy(arr[17].Book_Name,"AamchaBaapAniAmhi");
strcpy(arr[17].Author_Name,"Narendra Jadhav");
arr[17].Price=300;
arr[17].Rating=9.4;

arr[18].Book_ID=19;
strcpy(arr[18].Book_Name,"Uchalya");
strcpy(arr[18].Author_Name,"Laxman Mane");
arr[18].Price=280;
arr[18].Rating=9.3;

arr[19].Book_ID=20;
strcpy(arr[19].Book_Name,"Baluta");
strcpy(arr[19].Author_Name,"Daya Pawar");
arr[19].Price=290;
arr[19].Rating=9.5;

arr[20].Book_ID=21;
strcpy(arr[20].Book_Name,"AsaMiAsami");
strcpy(arr[20].Author_Name,"Pu La Deshpande");
arr[20].Price=310;
arr[20].Rating=9.6;

arr[21].Book_ID=22;
strcpy(arr[21].Book_Name,"EkHotaCarver");
strcpy(arr[21].Author_Name,"Veena Gavankar");
arr[21].Price=270;
arr[21].Rating=9.2;

arr[22].Book_ID=23;
strcpy(arr[22].Book_Name,"Smritichitre");
strcpy(arr[22].Author_Name,"Laxmibai Tilak");
arr[22].Price=330;
arr[22].Rating=9.4;

arr[23].Book_ID=24;
strcpy(arr[23].Book_Name,"GarambichaBapu");
strcpy(arr[23].Author_Name,"S N Pendse");
arr[23].Price=350;
arr[23].Rating=9.3;

arr[24].Book_ID=25;
strcpy(arr[24].Book_Name,"TumbadcheKhot");
strcpy(arr[24].Author_Name,"S N Pendse");
arr[24].Price=360;
arr[24].Rating=9.2;
}
void displayAllBooks(Book* arr,int* cindex){
		
		if(*cindex==0){
			printf("Books Not Available");
		}
		else{
			
		printf("\n *ALL BOOKS FROM OUR COLLECTION*\n");
		
		for(int i=0;i<*cindex;i++){

		printf("Book id:%d\n",arr[i].Book_ID);
		
		printf("Book name:%s\n",arr[i].Book_Name);
		
		printf("Author name:%s\n",arr[i].Author_Name);
		
		printf("Prise:%.2f\n",arr[i].Price);
		
		printf("Rating(1-10):%.1f\n",arr[i].Rating);
		
		printf("\n");

		}
	}
}

void searchById(Book *arr,int cindex,int id){
	int status=0;
		for(int i=0;i<cindex;i++){
			if(arr[i].Book_ID==id){
				printf("*Found*\n");
				
				printf("Book id:%d\n",arr[i].Book_ID);
		
				printf("Book name:%s\n",arr[i].Book_Name);
				
				printf("Author name:%s\n",arr[i].Author_Name);
				
				printf("Prise:%.2f\n",arr[i].Price);
				
				printf("Rating(1-10):%.1f\n",arr[i].Rating);
				
				status=1;
				
				printf("\n");
			}

		}
		if(status==0){
			printf("\nBook not found!");
		}
}
void searchByName(Book *arr,int cindex,char *bname){
	
	int status=0;
	for(int i=0; i<cindex; i++){
		if(strcmp(arr[i].Book_Name,bname)==0){
				printf("*Found*\n");
				
				printf("Book id:%d\n",arr[i].Book_ID);
		
				printf("Book name:%s\n",arr[i].Book_Name);
				
				printf("Author name:%s\n",arr[i].Author_Name);
				
				printf("Prise:%.2f\n",arr[i].Price);
				
				printf("Rating(1-10):%.1f\n",arr[i].Rating);
				
				status=1;
				
				printf("\n");
		}
	}
	if(status==0){
		printf("Book Not Found!");
	}
}
void main(){
	
	//Book arr[100];
	
	int nBooks=100;
	Book *arr;
	arr=(Book*)malloc(sizeof(Book)*nBooks);
	storeHardcoded(arr);
	int cindex=25;
	int exit=0;
	while(exit==0){
		int choice;
		printf("\n1.Add new book:\n");
		printf("2.Remove Book::\n");
		printf("3.Search a book\n");
		printf("4.See Books by filtering\n");
		printf("5.Update Book data\n");
		printf("6.Display all books\n");
		printf("7.To exit\n");
		
		printf("\nEnter choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				addBook(arr,&nBooks,&cindex);
				break;
			}
			case 2:{
				int id;
				printf("Enter Book Id t delete:");
				scanf("%d",&id);
				removeBook(arr,&cindex,id);
				break;
			}
			case 3:{
				int choice,id;
				printf("1.Search book by id:\n");
				printf("2.Search book by name:\n");
				scanf("%d",&choice);
				
				if(choice==1){
					printf("Enter ID to search:");
					scanf("%d",&id);
					searchById(arr,cindex,id);
					break;
				}
				else if(choice ==2){
					char bname[20];
					printf("Enter Name to search:");
					scanf("%s",&bname);
					searchByName(arr,cindex,bname);
					break;
				}
			}
			case 4:{
				int choice1;
				printf("1.See Categeories\n");
				printf("2.See Books by authors name\n");
				printf("3.High-Priced Books\n");
				printf("4.Top-Rated Books\n");
				
				printf("\nEnter your choice:");
			
				scanf("%d",&choice1);
				
				if(choice1==1){
					int choice2;
					printf("*Available categeories*\n:");
					printf("1.Biography / Autobiography\n:");
					printf("2.Historical\n:");
					printf("3.Mythological / Epic\n:");
					printf("4.Novel (Social / Classic)\n:");
					printf("5.Dalit Literature\n:");
					printf("6.Drama / Natak\n:");
					printf("7.Humor / Satire\n:");
					printf("8.Romantic / Youth\n:");
					printf("9.Short Stories\n:");
					
					printf("\nEnter Choice:");
					scanf("%d",&choice2);
					
						switch(choice2){
							case 1:{
								categeory1(arr,cindex);
								break;
							}
							
							case 2:{
								categeory2(arr,cindex);
								break;
							}
							
							case 3:{
								categeory3(arr,cindex);
								break;
							}
							
							case 4:{
								categeory4(arr,cindex);
								break;
							}
							
							case 5:{
								categeory5(arr,cindex);
								break;
							}
							
							case 6:{
								categeory6(arr,cindex);
								break;
							}
							
							case 7:{
								categeory7(arr,cindex);
								break;
							}
							
							case 8:{
								categeory8(arr,cindex);
								break;
							}
							
							case 9:{
								categeory9(arr,cindex);
								break;
							}
							
							default:{
								printf("Invalid Categeory!");
								break;
							}
							
						}
				}
				
				else if(choice1 ==2){
					char aname[20];
					printf("Enter author name:");
					
					while(getchar() != '\n');
    				fgets(aname, sizeof(aname), stdin);
    				aname[strcspn(aname, "\n")] = '\0';
					searchByAname(arr,cindex,aname);
					break;
				}
				else if(choice1==3){
					highPrise(arr,cindex);
				}
				else if(choice1==4){
					highRating(arr,cindex);
				}
			break;
			}
			
			case 5:{
				int id;
				printf("Enter Book ID to update:");
				scanf("%d",&id);
				updateBook(arr,cindex,id);
				break;
			}
			case 6:{	
				displayAllBooks(arr,&cindex);
				break;
			}
		}
	}
	
	
	
}