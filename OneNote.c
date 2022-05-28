#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

void menu();

struct data
{
	int roll,p;   //for password
	char name[20];
	char write[100];
	char pass[10];
	int q; //search by choice;
}add,chek,del,ser,upd;

void t()
{
	time_t t;
	time(&t);
	printf("Date and time: %s\n",ctime(&t));
}
int close()
{
	system("cls");
		printf("\n\n\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		printf("\t\t\t\t\xB2\xB2  \t\t\t  \xB2\xB2\n");
		printf("\t\t\t\t\xB2\xB2   Thankyou for Using.  \xB2\xB2\n");
		printf("\t\t\t\t\xB2\xB2  \t\t\t  \xB2\xB2");
		printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		printf("\n\n\n\n\n\n");
		exit(0);
}

void loading(int j)
{   int i,a;
    for(i=0;i<j;i++)
         a++;
}

void credit()
{
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t\t\tCredits\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\t***************************************\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1\t\tOneNote is a Group Project.\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1  -> Made in accordance to the requirements \n");
	printf("\t\t\t\xDB\xDB\xDB\xB1 of Course-CS118, Approved by Assistant Professor:\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\t\t Mohammad Shahzad.\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1  -> A collaborative work of:\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\t  Darpan Kumar - 19K-1309\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\t  Vinay  Kumar - 19K-1320\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	printf("\n\n\n________________________\n");
	printf("Enter 1 for Menu and 0 for exit.");
	int i;
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else
	{
		close();
		;
	}


}

void About()
{
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t\t\tAbout\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	printf("\t\t\t***************************************************\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1OneNote is a program for free-form information.\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1In OneNote, users can create textual notes.\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1It gathers user's notes and important \n");
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1information.\n");
	
	printf("\t\t\t\xDB\xDB\xDB\xB1\n");
	printf("\t\t\t\xDB\xDB\xDB\xB1It reminds us our daily life activities.\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	printf("\n\n\n________________________\n");
	printf("Enter 1 for Menu and 0 for exit.");
	int i;
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else
	{ 
		close();
	}

}

void delet()
{
	system("cls");
	FILE *fold, *fnewr;
	int c=0,f;
	
	fold=fopen("new.dat","r");
	fnewr=fopen("new1.dat","w");
	
	if(fold==NULL)
	{
		printf("not find");
		getch();
		menu();
	}
	
	printf("\n\n\n\n");
	printf("\t\t\t\t Delete\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t  Roll.No:");
	scanf("%d",&del.roll);
	
	while(fread(&add,sizeof(struct data),1,fold)>0)
	{
		if(add.roll!=del.roll)
		{
			fwrite(&add,sizeof(struct data),1,fnewr);
		}
		else
		{
			if(add.p==1)
			{
				
				printf("Enter password:");
				fflush(stdin);
				gets(ser.pass);
				if(strcmp(add.pass,ser.pass)==0)
				{
					c=1;
					printf("Record deleted successfully!");
				}
				else
				{
					c=1;
					fwrite(&add,sizeof(struct data),1,fnewr);
					printf("wrong password!\a\a\a");
				}
			}
			
			else if(add.p==0)
			{
				c=1;
				printf("Record deleted successfully!");
			}
			
		}
	
	}
	if(c==0)
	{
		printf("Record not found!!\a\a\a");
	}
					
		printf("\n");
	fclose(fold);
	fclose(fnewr);
	remove("new.dat");
	rename("new1.dat","new.dat");
	
	printf("\n\n\n_________________________________________\n");
	printf("Enter 2 for retry 1 for Menu and 0 for exit.");
	int l;
	fflush(stdin);
	scanf("%d",&l);
	
		if(l==1)
		{
			menu();
		}
		else if(l==2)
		{
			delet();
		}
		else
		{
			close();
		}
}

void Search()
{
	system("cls");
	FILE *fs;
	int c=0,q;
	
	fs=fopen("new.dat","r");
	if(fs==NULL)
	{
		printf("not find");
		getch();
		menu();
	}	
	fflush(stdin);
	printf("\n\n\n\n");
	printf("\t\t\t\t Search\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1 \t\t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1  1-> Name: \t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1  2-> Roll no:     \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1 \t\t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\n\n\t\t\t_______________________\n");
	printf("\t\t\tEnter your choice:");
	scanf("%d",&q);
	
	switch(q)
	{
		case 1:
			printf("\t\t\tEnter Your Name:");
			fflush(stdin);
			gets(ser.name);
			fflush(stdin);
			
			while(fread(&add,sizeof(struct data),1,fs)!=0)
			{
			if(strcmp(ser.name,add.name)==0)
			{
				c=1;
				if(add.p==1)
				{
					printf("\n\t\t\tEnter your password:");
					fflush(stdin);
					gets(ser.pass);
					fflush(stdin);
					if(strcmp(ser.pass,add.pass)==0)
					{
						int i;
						printf("\t\t\tLoading.");
						for(i=0;i<=8;i++)
        				{
          					loading(100000000);
          					printf(".");
        				}
						system("cls");
						printf("Roll no:%d\t\tName:%s\n\nNote\n%s",add.roll,add.name,add.write);
						break;
					}
					else
					{
						printf("Wrong password.\a\a\a");
					}
				}
			else if(add.p==0)
			{
				system("cls");
				printf("Roll no:%d\t\tName:%s\n\nNote\n%s",add.roll,add.name,add.write);
				break;
			}
			
			}
			}
			if(c==0)
			{
				printf("Not data found.");
			}
			break;
		
		case 2:
			printf("\t\t\tEnter Roll No:");
			scanf("%d",&ser.roll);
			while(fread(&add,sizeof(struct data),1,fs)!=0)
			{
			if(add.roll==ser.roll)
			{
				c=1;
				if(add.p==1)
				{
					printf("\n\t\t\tEnter your password:");
					fflush(stdin);
					gets(ser.pass);
					fflush(stdin);
					if(strcmp(ser.pass,add.pass)==0)
					{
						int i;
						printf("\t\t\tLoading.");
						for(i=0;i<=8;i++)
        				{
          					loading(100000000);
          					printf(".");
        				}
						system("cls");
						printf("Roll no:%d\t\tName:%s\n\nNote\n%s",add.roll,add.name,add.write);
						break;
					}
					else
					{
						printf("Wrong password.\a\a\a");
					}
				}
				else if(add.p==0)
				{
					system("cls");
					printf("Roll no:%d\t\tName:%s\n\nNote\n%s",add.roll,add.name,add.write);
					break;
				}
			}
			}
			if(c==0)
			{
				printf("Not data found.");
			}
			break;
		default:
		{
			printf("input error!\a\a\a");
			getch();
			Search();
			break;
		}
	}
	fclose(fs);
	printf("\n\n\n_________________________________________\n");
	printf("Enter 2 for retry 1 for Menu and 0 for exit.");
	int i;
	fflush(stdin);
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else if(i==2)
	{
		Search();
	}
	else
	{
		close();
	}
}

void edit()
{
	system("cls");
	
	int c=0,k,f=0;
	
	printf("\n\n\n\n");
	printf("\t\t\t\t Edit\n");

	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1 \t\t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1  1-> Data: \t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1  2-> Password:    \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1 \t\t      \xB1\xB1\xB2\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\n\n\t\t\t_______________________\n");
	printf("\t\t\tEnter your choice:");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			{
				FILE *fold, *fnewr;
				fold=fopen("new.dat","r");
				fnewr=fopen("new1.dat","w");
	
				if(fold==NULL)
				{
					printf("not find");
					getch();
				menu();
				}
			
			printf("\t\t\tEnter Roll No:");
			scanf("%d",&upd.roll);
			
			while(fread(&add,sizeof(struct data),1,fold)!=0)
			{
			if(add.roll!=upd.roll)
			{
				fwrite(&add,sizeof(struct data),1,fnewr);
			}
			
			else
			{
				c=1;
				if(add.p==1)
				{
					printf("\n\t\t\tEnter your password:");
					fflush(stdin);
					gets(upd.pass);
					fflush(stdin);
					if(strcmp(upd.pass,add.pass)==0)
					{
						int i;
						printf("\t\t\tLoading.");
						for(i=0;i<=8;i++)
        				{
          					loading(100000000);
          					printf(".");
        				}
						system("cls");
						printf("\n\t\t\tOld Data:");
						printf("%s",add.write);
						printf("\n\n\t\t\tEnter the new Data:");
						fflush(stdin);
						
                		gets(add.write);
						//strcpy(add.write,upd.write);
						fwrite(&add,sizeof(struct data),1,fnewr);
						system("cls");
						printf("\n\n\t\t\tEdit successfully:");
					}
					else
					{
						printf("Wrong password.\a\a\a");
						fwrite(&add,sizeof(struct data),1,fnewr);
					}
				}
			else if(add.p==0)
			{
				system("cls");
				printf("\n\t\t\tOld Data:");
				printf("%s",add.write);
				printf("\n\n\t\t\tEnter the new Data:");
				fflush(stdin);
          		gets(upd.write);
				strcpy(add.write,upd.write);
				fwrite(&add,sizeof(struct data),1,fnewr);
				system("cls");
				printf("\n\n\t\t\tEdit successfully:");
			}
			
			}
			}
			if(c==0)
			{
				printf("Not data found.");
			}
			
			printf("\n");
			fclose(fold);
			fclose(fnewr);
			remove("new.dat");
			rename("new1.dat","new.dat");
		
			break;	
		}
		case 2:
		{
			int k;
			FILE *fold, *fnewr;
				fold=fopen("new.dat","r");
				fnewr=fopen("new1.dat","w");
	
				if(fold==NULL)
				{
					printf("not find");
					getch();
				menu();
				}
		
			printf("\t\t\tEnter Roll No:");
			scanf("%d",&upd.roll);
			while(fread(&add,sizeof(struct data),1,fold)!=0)
			{
				
			if(add.roll!=upd.roll)
			{
				fwrite(&add,sizeof(struct data),1,fnewr);
			}
			else
			{
				k=1;
				if(add.p==1)
				{
					printf("Enter your current password:");
					fflush(stdin);
					gets(ser.pass);
					if(strcmp(ser.pass,add.pass)==0)
					{
						int i;
						printf("\t\t\tLoading.");
						for(i=0;i<=8;i++)
        				{
          					loading(100000000);
          					printf(".");
        				}
						system("cls");
						printf("Enter your new password:");
						fflush(stdin);
						gets(add.pass);
						
						printf("\n\n\tchanged");
						fwrite(&add,sizeof(struct data),1,fnewr);
					}
					else
					{
						printf("wrong password!\a\a\a");
						fwrite(&add,sizeof(struct data),1,fnewr);
						getch();
						edit();
					}
				}
				else if(add.p==0)
				{
					system("cls");
					add.p=1;
					printf("Enter your password:");
					fflush(stdin);
					gets(add.pass);
					
					printf("\n\n\tchanged");
					fwrite(&add,sizeof(struct data),1,fnewr);
				}
			}
		}
		if(k!=1)
		{
			printf("No data found!\a\a");
		}
		printf("\n");
		fclose(fold);
		fclose(fnewr);
		remove("new.dat");
		rename("new1.dat","new.dat");
		
		break;
	}
	default:
		{
			f=1;
			printf("Input error!\a\a\a");
			
			getch();
			edit();			
		}
}
	
	printf("\n\n\n_________________________________________\n");
	printf("Enter 2 for retry 1 for Menu and 0 for exit.");
	int i;
	fflush(stdin);
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else if(i==2)
	{
		edit();
	}
	else
	{
		close();
	}


}
void list()
{
	system("cls");
	FILE *fl;
	int c=1,i;
	fl=fopen("new.dat","r");
	if(fl==NULL)
	{
		printf("not find");
		getch();
		menu();
	}
	
	fflush(stdin);
	printf("\n\n\n\n");
	printf("\t\t\t\t\tList\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t\xB2\xB1\xB1 Sn.o:\tRoll.no:\tName:\n");
	while(fread(&add,sizeof(struct data),1,fl)!=0)
	{
		printf("\t\t\t\xB2\xB1\xB1 %d\t\t%d\t\t%s\t\t%d\t%s\n",c,add.roll,add.name,add.p,add.pass);
		c++;
	}
		printf("\t\t\t\xB2\xB1\xB1\n");
		printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

	fclose(fl);
	printf("\n\n\n_________________________\n");
	printf("Enter 1 for Menu and 0 for exit.");
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else
	{
		close();
	}
}

void input()
{
	system("cls");
	FILE *fn;
	
	fn=fopen("new.dat","a+");
	if(fn==NULL)
	{
		printf("not find");
		getch();
		menu();
	}
	printf("\n\n\n\n");
	printf("\n\t\t\t\t     Input\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\t\t\t\tRoll No:");
	scanf("%d",&chek.roll);
	while(fread(&add,sizeof(struct data),1,fn)!=0)
	{
		if(chek.roll==add.roll)
		{
			printf("Already a file.");
			getch();
			input();
			break;
		}
		
	}
	add.roll=chek.roll;
	printf("\t\t\t\tName:");
	fflush(stdin);
	gets(add.name);
	printf("\t\t\t\tFor password press 1 else 0:");
	fflush(stdin);
	scanf("%d",&add.p);
	if(add.p==1)
	{
		printf("\t\t\tEnter your password:");
		fflush(stdin);
		gets(add.pass);
	
		fflush(stdin);
		system("cls");	
		printf("\n\n\n\n");
		printf("\t\t\t\tEnter you Data:\n");
		printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

		fflush(stdin);
		gets(add.write);
		fwrite(&add,sizeof(struct data),1,fn);
	}
	else if(add.p==0)
	{
		
		fflush(stdin);
		system("cls");	
		printf("\n\n\n\n");
		printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

		printf("\t\t\tEnter you Data:\n");
		fflush(stdin);
		gets(add.write);
	
		fwrite(&add,sizeof(struct data),1,fn);
	}
	else
	{
		printf("\t\t\tInput error!!\a\a\a");
		getch();
		input();
	}
	
	
	fclose(fn);
	printf("\n\n\n_________________________\n");
	printf("Enter 1 for Menu and 0 for exit.");
	int i;
	
	scanf("%d",&i);
	if(i==1)
	{
		menu();
	}
	else
	{
		close();
	}
}

void menu()
{
	system("color f"); 
	system("cls");
	int x;
	printf("\n\n\n\n");
	printf("\t\t\t\t   Welcome TO OneNote\n");
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	printf("\t\t\t***************************************\n");	
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1\t     ************* \n");
	printf("\t\t\t\xB2\xB2\xB1\xB1\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 1-> Create NEW FILE   \n");	
	printf("\t\t\t\xB2\xB2\xB1\xB1 2-> Search FILE\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 3-> View FILE list\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 4-> Edit FILE\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 5-> Delete FILE\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 6-> About\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 7-> Credit\n");
	printf("\t\t\t\xB2\xB2\xB1\xB1 8-> Exit\n");
	
	printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\t\t\t");
	t();
	
	printf("\n__________________________\n");
	printf("Enter Your choice:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			input();
			break;
			
		case 2:
			Search();
			break;
		
		case 3:
			list();
			break;
		
		case 4:
			edit();
			break;
		
		case 5:
			delet();
			break;
				
		case 6:
			About();
			break;
			
		case 7:
			credit();
			break;
			
		case 8:
			close();
			break;
			
		default:
			printf("Input Error");
			getch();
			menu();
			break;
	}
}
void main()
{
	menu();
}
