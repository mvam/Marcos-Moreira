#include <stdio.h>
#include <stdlib.h>
void Ordena (int a, int b, int c){
	if (a > b)                                          
	  if (b > c) 
	  	printf("%4d%4d%4d\n", c, b, a);      
	  else if (a > c) 
		  printf("%4d%4d%4d\n", b, c, a);   
	  	else 
		  printf("%4d%4d%4d\n", b, a, c);        
		  else if (b > c)                                      
			if (a > c) 
				printf("%4d%4d%4d\n", c, a, b); 
	  		else 
			  printf("%4d%4d%4d\n", a, c, b);        
	  		else 
			  printf("%4d%4d%4d\n", b ,b, c); 
}

int main(void)
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); 
	Ordena(a,b,c);         
	return 0;
}