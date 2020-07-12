#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void delay(unsigned int milliseconds) {
    clock_t start = clock();
    while ((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds);
}
// main program starts here
int main()
{
int m,c, d, first[10][10], second[10][10], sum[10][10],sub[10][10];
int i,ch,ach,isum=0,n,ivalue,fch,is1,is2,isub,im1,im2,imul,mch,id1,id2,idiv,dch,m1,m2,mod,mx;
float fsum=0,fvalue,fs1,fs2,fsub,fm1,fm2,fmul,fd1,fd2,fdiv;
char cname[]={'V','E','L','M','A','N','I',' ','T','E','C','H','N','O','L','O','G','I','E','S','\0'};
char nname[]={'P','R','E','S','E','N','T','S','\0'};
char sname[]={'S','C','I','E','N','T','I','F','I','C',' ','C','A','L','C','U','L','A','T','O','R','\0'};
//this is the clear screen function
clrscr();
printf("\t\t\t");
for(i=0;cname[i]!='\0';i++)
{
printf("\033[1;34m");
printf("%c",cname[i]);
printf("\033[0m");
delay(100);
}
printf(" \n");
printf("\033[0;32m");
for(i=0;nname[i]!='\0';i++)
{
printf("\033[0;32m");
printf("%c",nname[i]);
delay(100);
printf("\033[0m");
}
printf("\n");
for(i=0;sname[i]!='\0';i++)
{
printf("\033[0;31m");
printf("%c",sname[i]);
delay(100);
printf("\033[0m");
}
printf("\nENTER THE CHOICE");
printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULPLICATION\n4.DIVISION\n5.MODULO\n6.MATRIX\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n\t\tADDITION");
       printf("\nCHOOSE 1.INTEGER OR 2.FLOAT");
       scanf("%d",&ach);
       switch(ach)
       {
       case 1:printf("\n\t\tINTEGER REPRESENTATION");
	    printf("\nHow many numbers you want to add in int representation?\n");
	    scanf("%d", &n);
	    printf("Enter %d int integers\n", n);
	    for(c=1;c<=n;c++)
	   {
	   scanf("%d",&ivalue);
	   isum =isum+ivalue;
	   }
	   printf("Sum of the int integers = %d\n",isum);
	   break;
       case 2:printf("\nFLOAT REPRESENTATION");
	    printf("\nHow many numbers you want to add in float representation?\n");
	    scanf("%d", &n);
	    printf("Enter%d float integers\n", n);
	    for(c=1;c<=n;c++)
	   {
	   scanf("%f",&fvalue);
	   fsum =fsum+fvalue;
	   }
	   printf("Sum of the flaot integers = %f\n",fsum);
	   break;
	   default :
		    printf("INVALID ");

	   }
	  break;
 case 2: printf("\n\t\tSUBTRACTION");
	 printf("\nENTER THE TWO NUMBERS");
	  printf("\nCHOOSE 1.INTEGER OR 2.FLOAT");
	 scanf("%d",&fch);
       switch(fch)
       {
	   case 1 :printf("\n\t\tINTEGER REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%d%d",&is1,&is2);
		    isub=is1-is2;
		    printf("Subtraction of two int integers is %d",isub);
		    break;
	  case 2 :printf("\n\t\tFLOAT REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%f%f",&fs1,&	fs2);
		    fsub=fs1-fs2;
		    printf("Subtraction of two int integers is %f",fsub);
		    break;
	  default :
			   printf("INVALID ");

	    }
	    break;
  case 3 :  printf("\n\t\tMULTIPLICATION");
	    printf("\nENTER THE TWO NUMBERS");
	    printf("\nCHOOSE 1.INTEGER OR 2.FLOAT");
	   scanf("%d",&mch);
	 switch(mch)
	 {
	   case 1 :printf("\n\t\tINTEGER REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%d%d",&im1,&im2);
		    imul=im1*im2;
		    printf("Multiplication of two integers is %d",imul);
		    break;
	  case 2 : printf("\n\t\tFLOAT REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%f%f",&fm1,&	fm2);
		    fmul=fm1*fm2;
		    printf("Multiplication of two flaot integers is %f",fmul);
		    break;
	  default :
		      printf("INVALID ");

	    }
	    break;
case 4:
	   printf("\n\t\tDIVISION");
	 printf("\nENTER THE TWO NUMBERS");
	printf("\nCHOOSE 1.INTEGER OR 2.FLOAT");
	scanf("%d",&dch);
       switch(dch)
       {
	   case 1 :printf("\n\t\tINTEGER REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%d%d",&id1,&id2);
		    idiv=id1/id2;
		    printf("Division of two intintegers is %d",idiv);
		    break;
	  case 2 :printf("\n\t\tFLOAT REPRESENTATION");
		    printf("\nENTER THE TWO NUMBERS\n");
		    scanf("%f%f",&fd1,&	fd2);
		    fdiv=fd1/fd2;
		    printf("Division of two float integers is %f",fdiv);
		    break;
	  default :
			  printf("INVALID ");

	    }
	    break;
case 5 :
	 printf("\n\t\tMODULO\n");
	 printf("\nENTER THE TWO NUMBERS\n");
	 scanf("%d%d",&m1,&m2);
	 mod=m1/m2;
	 printf("Modulo of two integers is %d",mod);
	 break;

case 6 :
	printf("\n\t\tMATRIX\n");
	printf("\nENTER THE CHOICE\n");
	printf("\n1.ADDITION FOR MATRIX\n2.SUBTRACTION FOR MATRIX");
	scanf("%d",&mx);
	switch(mx)
	{
	case 1:printf("\n\t\tADDITION MATRIX\n");
	       printf("Enter the number of rows and columns of matrix\n");
	       scanf("%d%d", &m, &n);
	     printf("Enter the elements of first matrix\n");

	 for(c=0;c<m;c++)
      {
	 for(d=0;d<n;d++)
      {
	 scanf("%d",&first[c][d]);
	}
      }

      printf("Enter the elements of second matrix\n");

     for(c=0;c<m;c++)
     {
      for(d=0;d<n;d++)
      {
	 scanf("%d", &second[c][d]);
	 }
      }
     printf("Sum of entered matrices:-\n");

      for (c=0; c<m;c++) {
	for (d=0;d<n;d++) {
	 sum[c][d]=first[c][d]+second[c][d];
	 printf("%d\t",sum[c][d]);
       }
       printf("\n");
       }
       break;
      case 2:printf("\n\tSUBTRACTION MATRIX\n");
		 printf("Enter the number of rows and columns of matrix\n");
	       scanf("%d%d", &m, &n);
	     printf("Enter the elements of first matrix\n");

	 for(c=0;c<m;c++)
      {
	 for(d=0;d<n;d++)
      {
	 scanf("%d",&first[c][d]);
	}
      }

      printf("Enter the elements of second matrix\n");

     for(c=0;c<m;c++)
     {
      for(d=0;d<n;d++)
      {
	 scanf("%d", &second[c][d]);
	 }
      }

     printf("Sub of entered matrices:-\n");

      for (c=0; c<m;c++) {
	for (d=0;d<n;d++) {
	 sub[c][d]=first[c][d]-second[c][d];
	 printf("%d\t",sub[c][d]);
       }
       printf("\n");
       }
       break;
       }
       break;
default :
	printf("INVALID ");


}
getch();
return 0;
}
