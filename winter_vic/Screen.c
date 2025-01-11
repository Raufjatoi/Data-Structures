#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>

void MainScreen();//for showing the main screen interface
void Login();//login using name and password             
void show();//to show the data queries
void title();//to show the name of hospital
void Add_Rec();//function for adding Record
void List_Rec();//fuction of list of recorded patient
void Search_Rec();//function for searching the record
void Update_Rec();//function for finding the record of patient
void Exit_Rec();//function for exiting the whole program
void gotoxy(short x, short y)
{
	COORD pos = {x, y};//set co ordinate (x,y)
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

char add_anymore;
int loop,valid = 0;
int ok;

struct patient
{
	int age;
	char first_Name[15];
	char last_Name[15];
	char gender;
	char Contact[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Disease[20];
	
};
struct patient p,temp_c;



int main(){
	 MainScreen();
	 Login();
     getch();
     return 0;	 
}

void MainScreen(){
	printf("\t\t\t\t*********************************************************\n");
	printf("\t\t\t\t*********************************************************\n");
	printf("\t\t\t\t*\t\t\t\t\t\t\t*\n");
	printf("\t\t\t\t*\t\tHospital Management System\t\t*\n");
	printf("\t\t\t\t*\t\t\t\t\t\t\t*\n");
	printf("\t\t\t\t*********************************************************\n");
	printf("\t\t\t\t*********************************************************\n\n\n");
	printf("Enter Any Key To Continue........!!");
	getch();
	system("cls");
	
}
void title(){
	printf("\t\t\t\t*********************************************************\n");
	printf("\t\t\t\t#########################################################\n");
	printf("\t\t\t\t*\t\t\t\t\t\t\t*\n");
	printf("\t\t\t\t*\t\tPEOPLE MEDICAL HOSPITAL\t\t\t*\n");
	printf("\t\t\t\t*\t\t\t\t\t\t\t*\n");
	printf("\t\t\t\t#########################################################\n");
	printf("\t\t\t\t*********************************************************\n\n\n");
}

void Login(){
	char username[15];
	int password ;
	
	title();
	printf("\n\t\t\t\t\tPlease Enter the username ::\n\t\t\t\t\t");
	scanf("%s",&username);
	S:
	printf("\n\t\t\t\t\tEnter the Password to Login ::\n\t\t\t\t\t");
	scanf("%d",&password);
	
	if(password == 1234){
		printf("\n\t\t\t\t\t------Login Successfully------\n\n");
		
		getch();
		show();
		
	}else{
		printf("\n\t\t\t\t\t------Invalid Password------\n\n");
		goto S;
		
	}
}

void show(){
	system("cls");
	title();
	int select;
	
	printf("\t\t\t\t\t1. Add the Record of Patient\n\n");
	printf("\t\t\t\t\t2. List of Patients Record\n\n");
	printf("\t\t\t\t\t3. Search the Record of Patient\n\n");
	printf("\t\t\t\t\t4. Update the Record of Patient\n\n");
	printf("\t\t\t\t\t5. Exit\n\n");
	
	printf("\n\t\t\t\tSelect From  (1  -  5) :  ");
	scanf("%d", &select);
	
	switch(select)
	{
		case 1:
			Add_Rec();
			break;
		
		case 2:
			List_Rec();
			break;
		
		case 3:
			Search_Rec();
			break;		
		
		case 4:
			Update_Rec();
			break;
		
		case 5:
			Exit_Rec();
			break;	
		
		default:
			printf("\n\t\t\t\tInvalid Entry!! Please Enter the correct Number : ");
			getch();
		
			 	
	}
	
	
	
}


void Add_Rec(){
	system("cls");//for clearing previous screen
	title();//show title on the screen
	int n;
	char Ans;
	FILE*pointr;//File pointer 
	pointr=fopen("Record2.dat","a");
	printf("\n\t\t\t\t\t\t\t------ADD PATIENT RECORD------\n");
	
	//-----------------------First Name----------------------------
	A:
	
	printf("\n\t\t\t\t\tFIRST NAME : ");
	scanf("%s",p.first_Name);
	
	p.first_Name[0] = toupper(p.first_Name[0]);
	
	
	if(strlen(p.first_Name)>20 || strlen(p.first_Name)<2){
		
		printf("\n\t\t\t\t\tInvalid Name (max: range of name is 20 and min: range is 2)");
		goto A;
		
		}
	
	else{
			for(loop = 0; loop<strlen(p.first_Name); loop++){
				
				if(isalpha(p.first_Name[loop]))
				{
					valid = 1;
				}
				else
				{
					valid=0;
					break;
					
				}
			
			}
			
			if(!valid)
			{
				printf("\n\t\t\t\t\tInvalid Input");
				goto A;
			}
		}
	//-----------------Last Name---------------------------
		
	B:
	
	printf("\n\t\t\t\t\tLAST NAME : ");
	scanf("%s",p.last_Name);
	
	p.last_Name[0] = toupper(p.last_Name[0]);
	
	
	if(strlen(p.last_Name)>20 || strlen(p.last_Name)<2){
		
		printf("\n\t\t\t\t\tInvalid Name (max: range of name is 20 and min: range is 2)");
		goto B;
		
		}
	
	else{
			for(loop = 0; loop<strlen(p.last_Name); loop++){
				
				if(isalpha(p.last_Name[loop]))
				{
					valid = 1;
				}
				else
				{
					valid=0;
					break;
					
				}
			
			}
			
			if(!valid)
			{
				printf("\n\t\t\t\t\tInvalid Input");
				goto B;
			}
		}
	
	
	//---------------Gender--------------	
do{

	C:
	printf("\n\t\t\t\t\tGENDER [F/M] : ");
	scanf(" %c",&p.gender);
	
	if(toupper(p.gender) == 'M' || toupper(p.gender) == 'F'){
		ok = 1;
	}
	else{
		ok = 0;
	}
	if(!ok){
		printf("\nInvalid Input");
		goto C;
	}
}while(!ok);
//--------------------------age-------------------
		
	printf("\n\t\t\t\t\tAGE : ");
	scanf(" %d",&p.age);	
	
	//---------Address------------------------
do{
	D:
	printf("\n\t\t\t\t\tADDRESS [City]: ");
	scanf("%s",p.Address);
	
	p.Address[0] = toupper(p.Address[0]);	
	if(strlen(p.last_Name)>20 || strlen(p.last_Name)<2){
		
		printf("\n\t\t\t\t\tInvalid Address (max: range of Address is 20 and min: range is 2)");
		goto D;
		
		}
	
}
while(!valid);
//--------------contact number------------------
do{
	E:
		printf("\n\t\t\t\t\tCONTACT NO : ");
		scanf("%s",p.Contact);
		
		if(strlen(p.Contact) > 11 || strlen(p.Contact) < 11){
			printf("\n\t\t\t\t\tInvalid Contact Number (Cont: no must contain 11 numbers)");
			goto E;
			
		}
		else{
			for(loop = 0; loop<strlen(p.Contact); loop++){
				
				if(!isalpha(p.Contact[loop]))
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					break;
				}
			}
			if(!valid)
			{
				printf("\n\t\t\t\t\tInvalid Contact Number :( It may contain aphabetic character ):");
				goto E;
			}
		}
}while(!valid);
//-------------ENTER EMAIL---------------------

	F:
		printf("\n\t\t\t\t\tEMAIL ADDRESS : ");
		scanf("%s",p.Email);
		
		if(strlen(p.Email)>30 || strlen(p.Email)<8)
		{
			printf("\n\t\t\t\t\tInvalid Email :( Enter again ):");
			goto F;
		}
		
//--------------Enter Problem or disease----------------
		
	G:
	printf("\n\t\t\t\t\tDISEASE : ");
	scanf("%s",p.Disease);
	
	p.Disease[0] = toupper(p.Disease[0]);	
	
	if(strlen(p.Disease)>30 || strlen(p.Disease)<3){
		
		printf("\n\t\t\t\t\tInvalid Disease (max: range of Disease is 30 and min: range is 3)");
		goto G;
		
		}
		else{
			for(loop = 0; loop<strlen(p.Disease); loop++){
				
				if(isalpha(p.Disease[loop]))
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					break;
				}
			}
			if(!valid)
			{
				printf("\n\t\t\t\t\tInvalid Disease :( It may contain Numeric character ):");
				goto G;
			}	

        }
        
//--------------------Add name of doctor-----------------------
    H:
	
	printf("\n\t\t\t\t\tDOCTOR NAME : ");
	scanf("%s",p.Doctor);
	
	p.Doctor[0] = toupper(p.Doctor[0]);
	
	
	if(strlen(p.Doctor)>20 || strlen(p.Doctor)<2){
		
		printf("\n\t\t\t\t\tInvalid Name (max: range of name is 20 and min: range is 2)");
		goto H;
		
		}
	
	else{
			for(loop = 0; loop<strlen(p.Doctor); loop++){
				
				if(isalpha(p.Doctor[loop]))
				{
					valid = 1;
				}
				else
				{
					valid=0;
					break;
					
				}
			
			}
			
			if(!valid)
			{
				printf("\n\t\t\t\t\tInvalid Input");
				goto H;
			}
		}
		
	
	fprintf(pointr,"%s %s %c %d %s %s %s %s %s ",p.first_Name, p.last_Name, p.gender, p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor);
	printf("\n\t\t\t\t\t--------Information Added Successfully--------");
	fclose(pointr);//for closing pointer file
	I:
	getch();
		
	printf("\n\t\t\t\t\t Do You Want to Add any more Patients Data [Y/N] : ");
	scanf("%c",&add_anymore);
	
	if(add_anymore == 'Y' || add_anymore == 'y')
	{
		Add_Rec();
	}
	else if(add_anymore == 'N' || add_anymore == 'n')
	{
		printf("\n\t\t\t\t\t:(---------Thank You---------):");
		getch();
		show();
	}
	else{
		printf("\n\t\t\t\t\tInvalid Input [Enter Again]");
		goto I;
	}	
}
//-------------------------------For Viewing the record-----------------------------------
void List_Rec(){
	int row;
	system("cls");
	title();
	FILE *pointr;
	pointr=fopen("Record2.dat","r");
	printf("\n\t\t\t\t\t:(---------LIST OF RECORDED PATIENTS---------):");
	
	gotoxy(1,15);
	printf("Full Name");
	gotoxy(20,15);
	printf("Gender");
	gotoxy(32,15);
	printf("Age");
	gotoxy(37,15);
	printf("Address");
	gotoxy(49,15);
	printf("Contact No");
	gotoxy(64,15);
	printf("Email");
	gotoxy(90,15);
	printf("Problem");
	gotoxy(104,15);
	printf("Doctor\n");
	printf("******************************************************************************************************************");
	row=17;
	
	while(fscanf(pointr,"%s %s %c %d %s %s %s %s %s\n",p.first_Name, p.last_Name, &p.gender, &p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor)!=EOF)
	{
		gotoxy(1,row);
		printf("%s %s",p.first_Name, p.last_Name);
		gotoxy(20,row);
		printf("%c",p.gender);
		gotoxy(32,row);
		printf("%d",p.age);
		gotoxy(37,row);
		printf("%s",p.Address);
		gotoxy(49,row);
		printf("%s",p.Contact);
		gotoxy(64,row);
		printf("%s",p.Email);
		gotoxy(90,row);
		printf("%s",p.Disease);
		gotoxy(104,row);
		printf("%s",p.Doctor);
		row++;
	}
}		
	
//-------------------For Sorting the data of patient---------------------

void Search_Rec(){
	
	char name[20];
	system("cls");
	title();
	FILE *pointr;
	pointr=fopen("Record2.dat","r");
	printf("\n\t\t\t\t\t:(---------SEARCH PATIENTS RECORD---------):");
	
	gotoxy(12,8);
	printf("\n\n\n\n\t\tEnter The Name of Patient to find data : ");
	scanf("%s",&name);
	fflush(stdin);
	name[0] = toupper(name[0]);
	
	while(fscanf(pointr,"%s %s %c %d %s %s %s %s %s\n",p.first_Name, p.last_Name, &p.gender, &p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor)!=EOF)
	{
		if(strcmp(p.first_Name,name) == 0)
		{
			gotoxy(1,15);
	        printf("Full Name");
	        gotoxy(25,15);
	        printf("Gender");
	        gotoxy(32,15);
	        printf("Age");
	        gotoxy(37,15);
	        printf("Address");
	        gotoxy(52,15);
	        printf("Contact No");
	        gotoxy(64,15);
	        printf("Email");
	        gotoxy(90,15);
	        printf("Problem");
	        gotoxy(104,15);
	        printf("Doctor\n");
	        printf("******************************************************************************************************************");	
	        gotoxy(1,18);
	       	printf("%s %s",p.first_Name, p.last_Name);
	    	gotoxy(25,18);
	    	printf("%c",p.gender);
	      	gotoxy(32,18);
		    printf("%d",p.age);
		    gotoxy(37,18);
		    printf("%s",p.Address);
		    gotoxy(52,18);
		    printf("%s",p.Contact);
		    gotoxy(64,18);
		    printf("%s",p.Email);
		    gotoxy(90,18);
		    printf("%s",p.Disease);
		    gotoxy(104,18);
		    printf("%s",p.Doctor);
		    printf("\n");
		    break;
		}
	}
	if(strcmp(p.first_Name,name)!=0)
	{
		gotoxy(5,10);
		printf("\n\n\n\n\t\tRecord Not Found--------!!");
		getch();
		
	}
	fclose(pointr);
	J:
	getch();
	printf("\n\t\t\t\t\t Do You Want to Find any more Patients Data [Y/N] : ");
	scanf("%c",&add_anymore);
	
	if(add_anymore == 'Y' || add_anymore == 'y')
	{
		Search_Rec();
	}
	else if(add_anymore == 'N' || add_anymore == 'n')
	{
		printf("\n\t\t\t\t\t:(---------Thank You---------):");
		getch();
		show();
	}
	else{
		printf("\n\t\t\t\t\tInvalid Input [Enter Again]");
		goto J;
	}		
}
//---------------for updating the record----------
void Update_Rec(){
	FILE *pointr, *tmp;
	int i,b;
	char ch;
	char name[20];
	system("cls");
	title();
	tmp=fopen("temp2.dat","w+");
	pointr=fopen("Record2.dat","r");
	
	if(pointr == NULL)
	{
		printf("Can not Open the File ...!!");
		getch();
		show();
	}
	printf("\n\t\t\t\t\t:(---------UPDATE PATIENT RECORD---------):");
	gotoxy(12,13);
	printf("Enter the First Name Of Patient : ");
	scanf("%s",&name);
	fflush(stdin);
	name[0] = toupper(name[0]);
	gotoxy(12,15);
	if(tmp == NULL){
		printf("Can not Open the File ...!!");
		getch();
		show();
	}
	while(fscanf(pointr,"%s %s %c %d %s %s %s %s %s\n",p.first_Name, p.last_Name, &p.gender, &p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor)!=EOF)
	{
		if(strcmp(p.first_Name, name) == 0)
		{
			valid = 1;
			gotoxy(25,17);
			printf("\t\t\t  ***Existing Record****");
			gotoxy(10,19);
			printf("%s \t%s \t%c \t%d \t%s \t%s \t%s \t%s \t%s\n",p.first_Name, p.last_Name, p.gender, p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor);
			gotoxy(12,22);
		    printf("Enter the First Name [NEW]: ");
			scanf("%s",p.first_Name);
			gotoxy(12,24);
			printf("Enter Last Name : ");
			scanf("%s",p.last_Name);
			gotoxy(12,26);
			printf("Enter Genter[M/F] : ");	
			scanf(" %c",&p.gender);
			p.gender=toupper(p.gender);
			gotoxy(12,28);
			printf("Enter AGE : ");
			scanf("%d",&p.age);
			gotoxy(12,30);
			printf("Enter Address [City] : ");
			scanf("%s",p.Address);
			p.Address[0] = toupper(p.Address[0]);
			gotoxy(12,32);
			printf("Enter Contact No : ");
			scanf("%s",p.Contact);
			gotoxy(12,34);
			printf("Enter Email [NEW] : ");
			scanf("%s",p.Email);
			gotoxy(12,36);
			printf("Enter DISEASE : ");
			scanf("%s",p.Disease);
			p.Disease[0]=toupper(p.Disease[0]);
			gotoxy(12,38);
			printf("Enter DOCTOR [NEW] : ");
			scanf("%s",p.Doctor);
			p.Doctor[0]=toupper(p.Doctor[0]);
			printf("\nPress(U) Character for Updating the Operation : ");
			ch=getche();
			if(ch=='u' || ch=='U')
			{
				fprintf(tmp,"%s %s %c %d %s %s %s %s %s\n",p.first_Name, p.last_Name, &p.gender, &p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor);
				printf("\n\t\t\t\t\t:(---------UPDATED PATIENT RECORD SUCCESSFULLY---------):");
			}
			
		}
		else
		{
			fprintf(tmp,"%s %s %c %d %s %s %s %s %s\n",p.first_Name, p.last_Name, &p.gender, &p.age, p.Address, p.Contact, p.Email, p.Disease, p.Doctor);
		}
	   	
	}
	if(!valid)
	{
		printf("NO Record Found....!!");
		
	}
	fclose(tmp);
	fclose(pointr);
	remove("Record2.dat");
	rename("temp2.dat","Record2.dat");
	getch();
	show();	
}
	
void Exit_Rec()
{
	system("cls");
	title();
	printf("\n\t\t\t\t\t:(---------THANK YOU FOR USING---------):");
	getch();
}

