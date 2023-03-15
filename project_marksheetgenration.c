#include<stdio.h>
#include<string.h>
void ask();

void calculation();
void show();
	char studentn[30],mother[30],clg[50],medium[20],examc[20],date[20];
	int rollno,en,med,cg,cg1,cc,cc1,se,se1,php,php1,dcn,dcn1,v,v1,s1,s2,s3,s4,s5,s6,total;
	float per;
	char grade,p,q,r,s,t,u,z;
int main()
{
 
 

	ask();
	calculation();
	show();

	
}


void ask()

{
	

	printf("\n\nstudent name:",studentn);
	gets(studentn);
	
	printf("\nmother name:",mother);
	gets(mother);
	
	printf("\ncollege name:",clg);
	gets(clg);
	
	printf("\nexam category:",examc);
	gets(examc);
	
	printf("\nmedium:",medium);
	gets(medium);
	
	printf("\nroll no:",rollno);
	scanf("%d",&rollno);
	
	printf("\nenrolment no:",en);
	scanf("%d",&en);
	
	printf("\ndate: ",date);
	scanf("%s",&date);
	
	
	
	//marks of student
	a:
	   printf("\ncomputer graphics-1:");
	  scanf("%d",&cg);
	  if(cg>80)
	  {
	  	printf("plese enter correct marsk");
	  	goto a;
	  }
	  a1:
	  	printf("\ncomputer graphics-1 practical:");
	    scanf("%d",&cg1);
	    if(cg1>20)
	    {
	    	printf("plese enter correct marks");
	    	goto a1;
		}
	  b:	
        printf("\ncompiler construction:");
		scanf("%d",&cc);
		if(cc>80)
		{
			printf("plese enter correct marks");
			goto b;
		}
	b1:	
	printf("\ncompiler construction practical");
	scanf("%d",&cc1);
	if(cc1>20)
	{
		printf("plese enter correct marks");
		goto b1;
	}
	c:
	printf("\nv.b.net");
	scanf("%d",&v);
	if(v>80)
	{
		printf("plese enter correct marks");
		goto c;
	}
	c1:
	printf("\nv.b.net practical");
	scanf("%d",&v1);
	if(v1>20)
	{
		printf("plese enter correct marks");
		goto c1;
	}
	d:
		printf("\nsoftware eng-2:");
		scanf("%d",&se);
		if(se>80)
		{
			printf("plese enter correct marks");
			goto d;
		}
    d1:
    	printf("\n software eng-2 practical");
    	scanf("%d",&se1);
    	if(se1>20)
    	{
    		printf("plese enter correct marks");
    		goto d1;
		}
	e:
		printf("\nphp");
		scanf("%d",&php);
		if(php>80)
		{
			printf("plese enter correct marks");
			goto e;
		}
	e1:
	printf("\n php practical");
	scanf("%d",&php1);
	if(php1>20)
	{
		printf("plese enter correct marks");
		goto e1;
		}
	f:
	printf("\n data communication and network");
	scanf("%d",&dcn);
	if(dcn>80)
	{
		printf("plese enter correct marks");
		goto f;
		}
		f1:	
		printf("\n data communication and network practical"); 
	scanf("%d",&dcn1);
	if(dcn1>20)
	{
	printf("plese enter correct marks");
		goto f1;	
	}
}
void show()
{
	printf("\t\t\t\t\t\t\t\tRASHTSANT TUKADOJI MAHARAJ NAGPUR UNVERSITY\t\t\t");
	printf("\n\t\t\t\t\t\t\t\t\tstatements of marks\t\t\t\t\n");
	printf("\n\t\t\t\t\t\t\t\t(Faculty of science & technology)\t\t");
	printf("\n\n\t\t\t\t\t\t\tBACHELOR OF COMPUTER APPLICATION,SECOND SEMESTER SUMMER 2020\t\t");
	printf("\n\n\nstudent name=%s",studentn);
	printf("\t\t\tRollno=%d",rollno);
	printf("\nmother name=%s",mother);
	printf("\t\t\tEarol no=%d",en);
	printf("\ncollege name=%s",clg);
	printf("\t\t\tdate=%s",date);
	printf("\nExam category%s",examc);
	printf("\n\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n|sr|  SUBJECT                       |                     MARKS SCHEME                   |      MARKS AWARDED                                          |");
	printf("\n|No|                                |---MAX----  |---MAX---   |          MAX  |   MIN    |    TU     |  IA    |   PU     | PI     |      TOTAL MARKS   |");  
	printf("\n                                    |  TU | IA   |PU |PI      |        MARKS  |  MARKS   |           |        |          |        |                    |");
    printf("\n------------------------------------|------------|---|--------|---------------|----------|-----------|--------|----------|--------|--------------------|");
    printf("\n|1 | computer graphics-1            |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c        |",cg,p,cg1,s1,p);
    printf("\n|2 | compiler construction          |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c      |",cc,q,cc1,s2,q);
    printf("\n|3 | v.b.net                        |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c          |",v,r,v1,s3,r);
    printf("\n|4 | software eng-2                 |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c         |",se,s,se1,s4,s);
    printf("\n|5 | php                            |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c        |",php,t,php1,s5,t);
    printf("\n|6 | data communication             |  80 | 20   |-- |  --    |      100      |   35     |     %d  %c| %d     |  --      |--      |      %d    %c        |",dcn,u,dcn1,s6,u);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t GRAND TOTAL      OUT OF    percentage   result     ");
    printf("\n\n\t\t %d               600         %2f         %c   "   ,total,per,z);
    printf("\t\t\t\nGRADE");
    printf("\t\t\t\n%c",grade);
   
}

    
void calculation()
{
s1=cg+cg1;
s2=cc+cc1;
s3=v+v1;
s4=se+se1;
s5=php+php1;
s6=dcn+dcn1;
total=s1+s2+s3+s4+s5+s6;
per=total/6;
if(per>75)
{
	grade='A';
}
if((per>60) &&(per<75))
{
	grade='B';
	}	
	if((per>45)&&(per<60))
	{
		grade='C';
	}
	if(per<40)
	{
		grade='D';
	}
	

if(s1<40)
{

	z='f';
	p='#';
}

else  
{
	p='-';
}
if(s2<40)
{
	
	z='f';
	q='#';
}

else
{
	q='-';
}
if(s3<40)
{

	z='f';
	r='#';
}

else
{
	r='-';
}
if(s4<40)
{
	
	z='f';
	s='#';
}

else{
	s='-';
}
if(s5<40)
{
	
	z='f';
	t='#';
}

else
{
	t='-';
}
if(s6<40)
{

z='f';
u='#';
}

else
{
	u='-';
}

if(per<40)
{
	z='f';
}
 if(per>40)
{
	z='p';
}
} 
