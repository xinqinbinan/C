//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = {"siz_strl"};
//	char arr2[] = { 'c','h','k' };
//	size_t num1 = sizeof(arr);
//	size_t num2 = strlen(arr);
//	int num3 = sizeof(arr2);
//	int num4 = strlen(arr2);
//	printf("sizeof = %d strlen = %d", num1, num2);
//	printf("sizeof = %d strlen = %d", num3, num4);
//	return 0;
//}
//int main()
//{
//	char arr[20] = { "helo word" };
//	char* ps;
//	ps = &arr;
//}
//#include <stdio.h>
//
//int main(void) {
//    printf("char        : %zu\n", sizeof(char));
//    printf("short       : %zu\n", sizeof(short));
//    printf("int         : %zu\n", sizeof(int));
//    printf("long        : %zu\n", sizeof(long));
//    printf("long long   : %zu\n", sizeof(long long));
//    printf("float       : %zu\n", sizeof(float));
//    printf("double      : %zu\n", sizeof(double));
//    printf("long double : %zu\n", sizeof(long double));
//    printf("void*       : %zu\n", sizeof(void*));
//    printf("int*        : %zu\n", sizeof(int*));
//    return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'h','e','l','l','o' };
	size_t num1 = sizeof(arr);
	size_t num2 = strlen(arr);
	printf("sizeof = %zu strlen = %zu", num1, num2);
	return 0;
}
