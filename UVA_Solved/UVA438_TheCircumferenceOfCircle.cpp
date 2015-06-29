//#include<stdio.h>
//#include<math.h>
//#define pi 3.141592653589793
//
//int main()
//{
//	double x1, x2, x3, y1, y2, y3, a, b, c, halfPerimeter, triangleArea, radius, circumference;
//	while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3) == 6)
//	{
//		a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//		b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
//		c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
//
//		halfPerimeter = (a + b + c) / 2;
//		triangleArea = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
//		radius = (a * b * c) / (4 * triangleArea);
//		circumference = 2 * pi * radius;
//		printf("%.2lf\n", circumference);
//	}
//	return 0;
//}