//#include <stdio.h>
//int main()
//{
//    int a = 5;
//    int b = 3;
//    int c = 2;
//    printf("a = %d,b = %d,c = %d\n", a, b, c);
//    const int* pa = &a;
//    int* const pb = &b;
//    const int* const pc = &c;
//    pa = &c;
//    *pb = 10;
//    printf("a = %d,b = %d,c = %d\n", *pa, *pb, *pc);
//    return 0;
//}
#include <stdio.h>
int main()
{
	const int a = 5;
	int b = 3;
	int* pa = &a;
	*pa = 10;
	printf("%d", a);
	return 0;
}