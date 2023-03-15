#include<stdio.h>
#include<string.h>
int menu,t,rvt,mvt,sit,cb,st,mt,bvg,cnv,gvt,bnvt,pvt,invt,ap,i,u,p,de,m,t1;
int total,cgst=9,sgst=9,num,bill,ch;

int main()
{
	

	printf("____________________**welcome to paradise restaurant**________________");
	printf(" \nthe option for food");
	go:
	printf("\n1.LUNCH");
	printf("\n||pure veg thalis                   ||   non veg thalis        ||                     ");                            
	printf("\n1.->Rajastani veg tahli==180        || 4.->  chicken biryani==100                      ");
	printf("\n2.->maharashtrin veg thali==150     || 5.->  soaji thali==240                          ");
	printf("\n3.->south indian thali ==140        || 6.->  meat thali==250                           ");
	printf("\n-----------------------------------------------------------------------------------------------");
		
	printf("\n2.DINNER");
	printf("\n1.->bengali veg thali==200          || 4->chicken non-vegthali ==300                    ");
	printf("\n2.->Gujrathi veg thali==220         || 5->bengali non-veg thali ==270                    ");
	printf("\n3.->panjabi veg thali==230          || 6->indian non-veg thali==200                    ");
	printf("\n------------------------------------------------------------------------------------------------");
	printf("\n3.BREAKFAST");
	printf("\nA->aalu paratha==30                 || D-> poha==40                                     ");
	printf("\nB->idli==40                         || E-> dosa==70                                     ");
	printf("\nC->upma==50                         || F-> maggi==50                                    ");
	printf("\nenter your choice");
	scanf("%d",&menu);
		
	switch(menu)
	{
		case 1:
			printf("\n##LUNCH##");
			printf("\n  choice your thali");
			scanf("%d",&t);
			switch(t)
			{
			case 1:
				printf("Rajstani veg thali==180" );
				scanf("%d",&rvt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				
				printf("\nBILL=TOTAL+CGST+SGST");
				total=rvt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
			case 2:
				printf("\nmahrashtrian veg thali==150" );
				scanf("%d",&mvt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=mvt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
				
		    case 3:
		    	printf("south indian thali==140" );
				scanf("%d",&sit);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=sit+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
			case 4:
				printf("chiken biryani==100" );
				scanf("%d",&cb);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=cb+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
			case 5:
				printf("soaji thali==240" );
				scanf("%d",&st);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=st+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
			case 6:
				printf("meat thali==250" );
				scanf("%d",&mt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=mt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
			}
			goto go;
			case 2:
			printf("||DINNER||");
				printf("\n  choice your thali");
			scanf("%d",&t1);
			switch(t1)
			{
				case 1:
				printf("begali veg thali==200" );
				scanf("%d",&bvg);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=bvg+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
				case 2:
				printf("Gujrati veg thali==220" );
				scanf("%d",&mt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=gvt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 3:
				printf("panjabi veg thali==230" );
				scanf("%d",&pvt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=pvt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 4:
				printf("chiken nonveg thali==300" );
				scanf("%d",&cnv);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=cnv+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 5:
				printf("benali non veg thali==270" );
				scanf("%d",&mt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=bnvt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 6:
				printf("indian non veg thali==200" );
				scanf("%d",&mt);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=invt+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
			}
			goto go;
			break;
			case 3:
				printf("\n||BREAKFAST||");
				printf("\nchoose the option for breakfast");
				scanf("%d",&ch);
				switch(ch)
				{
				
				case 1:
				printf("\naalu paratha==30" );
				scanf("%d",&ap);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=ap+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 2:
				printf("\nidli==40" );
				scanf("%d",&i);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=i+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
				case 3:
				printf("upma==50  " );
				scanf("%d",&u);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=u+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 4:
				printf("poha==40  " );
				scanf("%d",&p);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=p+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
					goto go;
				break;
				case 5:
				printf(" dosa==70 " );
				scanf("%d",&de);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=de+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
				case 6:
				printf(" maggi==50 " );
				scanf("%d",&m);
				printf("\nnumber of plate");
				scanf("%d",&num);
				printf("\nBILL=TOTAL+CGST+SGST");
				total=m+cgst+sgst;
				bill=num*total;
				printf("\nthe total bill is:%d",bill);
				printf("\nTHANK U !!!");
				goto go;
				break;
		}
					
					
				
				
			
		
			
		

			
		
	}
}
