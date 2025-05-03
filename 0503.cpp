//#include<stdio.h>
//int main() {
//	int arr[100];
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//		printf("%d\n", arr[i]);
//	}
//	for (int i = 0; i < 100; i++) {
//		printf("%d\n", arr[99-i]);
//	}
//}

//#include<stdio.h>
//int main() {
//	int arr[100];
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//		printf("%d\n", arr[i]);
//	}
//	for (int i = 0; i < 100; i++) {
//		printf("%d\n", arr[99 - i]);
//	}
//}

//#include<stdio.h>
//int main() {
//	int arr[100];
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//
//	}
//	int* p = &arr[99];
//
//	for (int i = 0; i < 100; i++) {
//		printf("%d\n",*p-i);
//	}
//}
//
//#include<stdio.h>
//int main() {
//	const int N = 100;
//	int arr[N];
//	for (int i = 0; i < N; i++) {
//		arr[i] = i + 1;
//
//	}
//	int* p = &arr[N/2];
//
//	for (; *p != 50; p += 1) {
//		printf("%d ", *p);
//
//		if (*p == N) {
//			p -= 100;
//		}
//	}
//}

//#include<stdio.h>
//#include<string.h>
//int main() {
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//
//int main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char* ptr1 = (char*)"coding";
//	char* ptr2 = (char*)"coding";
//	char* ptr3 = (char*)"coding.ne.kr";
//	char* ptr4 = (char*)"ne.kr";
//	char* ptr5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", ptr1, ptr2,
//		memcmp(ptr1, ptr2, strlen(ptr1)));
//
//	printf("%s with %s(ptr1 size) = %d\n", ptr1, ptr3,
//		memcmp(ptr1, ptr3, strlen(ptr3)));
//
//	printf("%s with %s (ptr3 size) = %d\n", ptr1, ptr4,
//		memcmp(ptr1, ptr4, strlen(ptr1)));
//
//	printf("%s with %s = %d\n", ptr1, ptr4,
//		memcmp(ptr1, ptr4, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr5,
//		memcmp(ptr1, ptr5, strlen(ptr1)));
//	printf("%s with %s (ptr5 size) = %d\n", ptr1, ptr5,
//		memcmp(ptr1, ptr5,strlen(ptr5)));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = {10, 20, 30, 40, 50};
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n",
//		src_data[0], src_data[1], src_data[2]
//		,src_data[3],src_data[4]);
//	printf("%d %d %d %d %d\n",
//		dst_data[0], dst_data[1], dst_data[2],
//		dst_data[3], dst_data[4]);
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in  \"%s\"...\n", str);
//
//	pch = strchr(str, 's');
//
//	while (pch != NULL) {
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s],s2[%-7s] => ret = [%2d]\n",
//		str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n",
//		str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s],s1[%-7s] => ret = [%2d]\n",
//		str3, str1, strcmp(str3, str1));
//	return 0;
//}
//
#include<stdio.h>
//#include<string.h>

int mystrlen(char buf2[])
{
	int N = 0;
	int a = 1;
	while (a) {
		if (buf2[N] != NULL) {
			N++;
		}
		else {
			a--;
		}
	}
	return N;
}

int main()
{
	char buf[25]; 
	scanf("%s", buf);
	int len = mystrlen(buf);
	
	printf("%d\n", len);

}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char buff[10];
//	gets_s(buff);
//	char* input;
//	char* pch;
//	while (pch != NULL) {
//		scanf("%s", input);
//		pch = strchr(buff, *input);
//		if (*input == '0') {
//			break;
//		}
//	}
//}


