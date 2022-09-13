#include<stdio.h>
#include<math.h>
void main()
{

	int s1,s2,s3;
	float s,a,area;
	printf("Enter three sides of triangle:\n");
	scanf("%d %d %d",&s1,&s2,&s3);

	if((s1+s2)>s3&&(s2+s3)>s1&&(s3+s1)>s2)
	{

	if(s1==s2&&s2==s3)
	printf("Equilateral triangle\n");
	else if(s1==s2||s2==s3||s3==s1)
	printf("Isosceles Triangle\n");
	else printf("Scalene Triangle\n");

	s=(s1+s2+s3)/2.0;
	printf("Semiperimeter :%f\n",s);
	a=s*(s-s1)*(s-s2)*(s-s3);
	area=pow(a,0.5);
	printf("Area of Triangle :%f\n",area);
	}
	else
	printf("Triangle does not exist!!!");
}

