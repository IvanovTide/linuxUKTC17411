#include <stdio.h>
#include <math.h>


	int main()
	{
	
		double a, b, c, S, p, P;
			printf("a=");
			scanf("%lf", &a);
			printf("b=");
			scanf("%lf", &b);
			printf("c=");
			scanf("%lf", &c);
		
		int isValid = a > 0 && b > 0 && c > 0 && a + b > c 
		&& a + c > b && b + c > a && b + a > c;
		
		if(isValid) {
		
		P = a + b + c;
		p = P / 2.0;
		S = sqrt(p*(p-a)*(p-b)*(p - c));
		printf("P = %.2f\n", P); 
		printf("S = %.2f\n", S);
		
		}else{
			printf("invalid triangle\n");
		}
		return 0;
		}
		 
