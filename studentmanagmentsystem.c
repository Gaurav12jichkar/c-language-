#include<stdio.h>
#include<string.h>
int id[10],mb[10],cho,n,i,type,id1[10],cg,id2[10],mb2;
char name[20][10],add[30][10],name2[20][32],add2[34][12];
char city[24][24],mail[40][34],city2[12][12],mail2[12][12];

int main()
{
	//printf("ADD DETAILS");
   printf("HOW MANY STUDENT YOU WANT TO ADD");
   scanf("%d",&n);
	go:
printf("\n1.ADD DETAILS");
printf("\n2.SHOW STUDENT DETAILS");
printf("\n3.EDIT STUDENT DETAILS");
printf("\n4.DELETE STUDENT");
printf("\n5.EXIT");
printf("\nEnter your choice");
scanf("%d",&cho);

switch(cho)
{
  case 1:  
   
          
          for(i=0;i<n;++i)
          {
          	fflush(stdin);
          	printf("\nenter the name");
          	gets(name[i]);
            printf("\n enter the address");
          	gets(add[i]);
          	printf("\nenter you city");
          	gets(city[i]);
          	printf("enter email");
          	gets(mail[i]);
          	printf("\nenter id");
          	scanf("%d",&id[i]);
          	printf("\nenter mobile no");
          	scanf("%d",&mb[i]);
      }
    
 	goto go;
 	break;
 	case 2:
 		{
		 
 		printf("\nSHOW STUDENT DETAILS");
 		
 		
 		  for(i=0;i<n;++i)
 			{
 				printf("\n student name:-%s",name[i]);
 				printf("\n student address:-%s",add[i]);
 				printf("\n student city:-%s",city[i]);
 				printf("\n student email:-%s",mail[i]);
 				printf("\n student id:-%d",id[i]);
 				printf("\n student mobile no:-%d",mb[i]);
 				printf("\n");

 			
 		}
 		
 	}
 	goto go;
 	break;
 	
 	case 3:
 		
 		printf("EDIT STUDENT DETAILS");
 		printf("\n Renter your id=");
 		scanf("%d",&id1);
 		for(i=0;i<n;++i)
		 {
		 	if(id1[i]==id[i])
		 	{
		 		printf("\n student records are:");
		 		printf("\n-----------------------------------------------------------------------");
		 		printf("\n1.name:  %s\n2.student address:%s\n3.student city:%s\n4.student email:%s\n5.student id:%d\n6.student mobileno:%d",name[i],add[i],city[i],mail[i],id[i],mb[i]);
		 		printf("put option");
		 		scanf("%d",&cg);
		 		switch(cg)
		 		{
		 			case 1:
					 	printf("\n enter the name");
					gets(name2[i]);
					name[20][10]=name2[20][32];
				 
					 break;
		 		
		 	
		 		case 2:
				 printf("\n enter the adress");
				 	gets(add2[i]);
				 	add[30][10]=add2[32][12];
				 	
				
				
				 break;
				 case 3:
				 	printf("\n enter the city");
				 		gets(city2[i]);
				 		city[24][24]=city2[12][12];
				 	
				 	
				
				 	break;
				 	case 4:
				 			printf("\n enter email");
				   	gets(mail2[i]);
				   	mail[40][34]=mail2[12][12];
				   	
				 		
				 		
				 		break;
				   case 5:
				   	printf("\nenter the id");
		 			scanf("%d",&id2);
		 			id[i]=id2[i];
		 			
				   
				   	break;
				   	case 6:
				   		printf("\n enter mobile no");
				   		scanf("%d",&mb2);
				   		mb[i]=mb2;
				   		
				 }
			 }
 			
		 }
 	goto go;
 	break;
 	case 4:
 		{
 		printf("DELETE Student DETAILS");
 		
		 
		 	
		 }
		 goto go;
		 break;
		 
		
 		
 }
 
  	
	
}



	

  
 
 
