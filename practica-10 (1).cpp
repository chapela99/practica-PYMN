#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu ();
void fun1 (void);
void fun2 (void);
void fun3 (void);
void fun4 (void);
int main(void)
{
	int b;
	
	printf("escoja una opcion \n1.- h=0.05 \n2.- h=0.2 \n3.- h=0.1\n4.- h=0.01\n");
	scanf("%d",&b);


	
	switch(b)
	do{
	
	case 1:
		
		
		 fun1();
		 
	break;
	
	case 2:
	
		
		 fun2();
		 
	
	break;
	case 3: 
	
		
		 fun3();
	break;
		case 4: 
	
		
		  fun4();
	break;
	
}while(b<=4);

}
void fun1 ()
 {
		
	float r1,r2,r3,x,fx,fx1,fx2,fx3,fx4,fx5,h,fprim,f1,f2,f3;
	h=0.5;
	fprim=5*(exp((-5*0.6)));
	x=0.6+h;
	fx1=1-(exp(-5*x));
	fx2=1-(exp(-5*x+h));
	fx3=1-(exp(-5*x+(h*2)));
	fx4=1-(exp(-5*x-(h)));
	fx5=1-(exp(-5*x-(h*2)));
	fx=1-(exp(-5*x));
	f1=(-fx3+4*fx2-3*fx1)/(2*h);
	f2=(3*fx1-4*fx4+fx5)/(2*h);
	f3=(-fx3+8*fx2-8*fx4+fx5)/(12*h);
printf("diferenciacion\t resultado\t error relativo\n");
	if(fx1>0)
	{
	r1=(fprim-f1)*100;
	printf("adelante\t %f\t %f\n", f1,r1);
	}
	else
	{
		r1=(fprim+f1)*100;
		printf("adelante\t %f\t %f\n", f1,r1);
	}
	
	if(fx2>0)
	{
	r2=(fprim-f2)*100;
	printf("atras\t %f \t%f\n", f2,r2);
	}
	else
	{
		r2=(fprim+f2)*100;
		printf("atras\t %f \t%f\n", f2,r2);
	}
		if(fx3>0)
	{
	r3=(fprim-f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	else
	{r3=(fprim+f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	

	}

void fun2 ()
{	
	
	float r1,r2,r3,x,fx,fx1,fx2,fx3,fx4,fx5,h,fprim,f1,f2,f3;
h=0.2;
fprim=5*(exp((-5*0.6)));
	x=0.6+h;
	fx1=1-(exp(-5*x));
	fx2=1-(exp(-5*x+h));
	fx3=1-(exp(-5*x+(h*2)));
	fx4=1-(exp(-5*x-(h)));
	fx5=1-(exp(-5*x-(h*2)));
	fx=1-(exp(-5*x));
	f1=(-fx3+4*fx2-3*fx1)/(2*h);
	f2=(3*fx1-4*fx4+fx5)/(2*h);
	f3=(-fx3+8*fx2-8*fx4+fx5)/(12*h);
	if(fx1>0)
	{
	r1=(fprim-f1)*100;
	printf("adelante\t %f\t %f\n", f1,r1);
	}
	else
	{
		r1=(fprim+f1)*100;
		printf("adelante\t %f\t %f\n", f1,r1);
	}
	
	if(fx2>0)
	{
	r2=(fprim-f2)*100;
	printf("atras\t %f \t%f\n", f2,r2);
	}
	else
	{
		r2=(fprim+f2)*100;
		printf("atras\t %f \t%f\n", f2,r2);
	}
		if(fx3>0)
	{
	r3=(fprim-f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	else
	{r3=(fprim+f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	
		
	}

void fun3 ()
 {	

 	
	float r1,r2,r3,x,fx,fx1,fx2,fx3,fx4,fx5,h,fprim,f1,f2,f3;
    h=0.1;
 	x=0.6+h;
	fprim=5*(exp((-5*0.6)));
	fx1=1-(exp(-5*x));
	fx2=1-(exp(-5*x+h));
	fx3=1-(exp(-5*x+(h*2)));
	fx4=1-(exp(-5*x-(h)));
	fx5=1-(exp(-5*x-(h*2)));
	fx=1-(exp(-5*x));
	f1=(-fx3+4*fx2-3*fx1)/(2*h);
	f2=(3*fx1-4*fx4+fx5)/(2*h);
	f3=(-fx3+8*fx2-8*fx4+fx5)/(12*h);
	if(fx1>0)
	{
	r1=(fprim-f1)*100;
	printf("adelante\t %f\t %f\n", f1,r1);
	}
	else
	{
		r1=(fprim+f1)*100;
		printf("adelante\t %f\t %f\n", f1,r1);
	}
	
	if(fx2>0)
	{
	r2=(fprim-f2)*100;
	printf("atras\t %f \t%f\n", f2,r2);
	}
	else
	{
		r2=(fprim+f2)*100;
		printf("atras\t %f \t%f\n", f2,r2);
	}
		if(fx3>0)
	{
	r3=(fprim-f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	else
	{r3=(fprim+f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	
	
	}
	void fun4 ()
 {	

 	
	float r1,r2,r3,x,fx,fx1,fx2,fx3,fx4,fx5,h,fprim,f1,f2,f3;
    h=0.01;
 	x=0.6+h;
	fprim=5*(exp((-5*0.6)));
	fx1=1-(exp(-5*x));
	fx2=1-(exp(-5*x+h));
	fx3=1-(exp(-5*x+(h*2)));
	fx4=1-(exp(-5*x-(h)));
	fx5=1-(exp(-5*x-(h*2)));
	fx=1-(exp(-5*x));
	f1=(-fx3+4*fx2-3*fx1)/(2*h);
	f2=(3*fx1-4*fx4+fx5)/(2*h);
	f3=(-fx3+8*fx2-8*fx4+fx5)/(12*h);
	if(fx1>0)
	{
	r1=(fprim-f1)*100;
	printf("adelante\t %f\t %f\n", f1,r1);
	}
	else
	{
		r1=(fprim+f1)*100;
		printf("adelante\t %f\t %f\n", f1,r1);
	}
	
	if(fx2>0)
	{
	r2=(fprim-f2)*100;
	printf("atras\t %f \t%f\n", f2,r2);
	}
	else
	{
		r2=(fprim+f2)*100;
		printf("atras\t %f \t%f\n", f2,r2);
	}
		if(fx3>0)
	{
	r3=(fprim-f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	else
	{r3=(fprim+f3)*100;
	printf("centrada\t %f \t%f\n", f3,r3);
		
	}
	
	
	}
	
