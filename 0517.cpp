
//#include<stdio.h>//printf랑 scanf사용하겠다.
//#include<stdlib.h>//malloc srand rand free사용하겠다.
//#include<time.h>//time 사용하겠다.
//
//
//
//void func_sort(int* pNum, int N); //함수에 int*이랑 int을 입력받겠다.
////void func_swap(int& a, int& b); // 함수에 int, int을 입력받겠다.
//
//void main()
//{
//	int N, * pNum;
//	scanf("%d", &N); //int값을 입력받겠다.
//	pNum = (int*)malloc(sizeof(int) * N); // 배열의 크기가 4곱하기 N바이트를 확보하고 그 번지를 돌려준다.
//
//	srand((unsigned int)time(NULL));//시간에 따라서 seed값을 설정
//
//	printf("<랜덤으로 입력받을 수 출력>\n"); //출력
//	for (int i = 0; i < N; i++) {	// i = 0부터 N-1까지 1씩 증가한다.
//		*(pNum + i) = (rand() % N) + 1; // 1부터 N까지의 값을 랜덤으로 받고 pNum에 그 값을 넣는다.
//		printf("%2d", pNum[i]); // 2칸짜리 공간을 만들어 거기에 넣는다.
//	}
//
//	func_sort(pNum, N);	/// pNum를 오름차순 정렬한다.
//
//	printf("\n<오름차순 정렬된 수 출력\n"); //출력
//	for (int i = 0; i < N; i++) { //i = 0부터 N-1까지 1씩 증가한다.
//		printf("%2d ", pNum[i]); // 2칸짜리 공간을 만들어 거기에 넣는다.
//		if (i % 10 == 9) printf("\n"); // 한줄에 최대 10개의 수만 넣겠다.
//	}
//	free(pNum);// 동적할당한 것을 초기화 한다.
//}
//void func_swap(int& a, int& b)///pNum[i]과 a가 같은 변수가 되고, pNum[j]과 b가 같은 변수가 된다. int int를 받는다.
//{
//	int temp = a; // temp 에 a값을 대입하고.
//	a = b; //a에 b값을 대입하고
//	b = temp;//b에 a값을 대입한다.
//}
//
//void func_sort(int* pNum, int N) // int*과 int를 받겠다.
//{
//	for (int i = 0; i < N; ++i) {//i = 0부터 N-1까지 1씩 증가한다.
//			for (int j = i; j < N; ++j) {// j = i부터 N-1까지 1씩 증가한다 
//				if (pNum[i] > pNum[j]) // 앞에 있는 값이 뒤에 있는 값보다 크다면
//					func_swap(pNum[i], pNum[j]); // 배열의 값이 더 크면 뒤로 보낸다./// 앞에 있는 값과 뒤에 있는 값을 바꾼다. 
//			}
//		
//	}
//}

//#include<stdio.h>//printf랑 scanf사용하겠다.
//#include<stdlib.h>//malloc srand rand free사용하겠다.
//#include<time.h>//time 사용하겠다.
//
//struct DATA {
//
//	int N, * pNum;
//};
//void func_swap(int& a, int& b)///pNum[i]과 a가 같은 변수가 되고, pNum[j]과 b가 같은 변수가 된다. int int를 받는다.
//{
//	int temp = a; // temp 에 a값을 대입하고.
//	a = b; //a에 b값을 대입하고
//	b = temp;//b에 a값을 대입한다.
//}
//
//void func_sort(DATA *d) // int*과 int를 받겠다.
//{
//	for (int i = 0; i < (*d).N; ++i) {//i = 0부터 N-1까지 1씩 증가한다.
//		for (int j = i; j < d->N; ++j) {// j = i부터 N-1까지 1씩 증가한다 
//			if (d->pNum[i] > d->pNum[j]) // 앞에 있는 값이 뒤에 있는 값보다 크다면
//				func_swap(d->pNum[i], d->pNum[j]); // 배열의 값이 더 크면 뒤로 보낸다./// 앞에 있는 값과 뒤에 있는 값을 바꾼다. 
//		}
//
//	}
//}
////void func_sort(int DATA.pNum, int N); //함수에 int*이랑 int을 입력받겠다.
////void func_swap(int& a, int& b); // 함수에 int, int을 입력받겠다.
//
//void main()
//{
//	DATA data;
//
//	scanf("%d", &data.N); //int값을 입력받겠다.
//	data.pNum = (int*)malloc(sizeof(int) * data.N); // 배열의 크기가 4곱하기 N바이트를 확보하고 그 번지를 돌려준다.
//
//	srand((unsigned int)time(NULL));//시간에 따라서 seed값을 설정
//
//	printf("<랜덤으로 입력받을 수 출력>\n"); //출력
//	for (int i = 0; i < data.N; i++) {	// i = 0부터 N-1까지 1씩 증가한다.
//		*(data.pNum + i) = (rand() % data.N) + 1; // 1부터 N까지의 값을 랜덤으로 받고 pNum에 그 값을 넣는다.
//		printf("%2d", data.pNum[i]); // 2칸짜리 공간을 만들어 거기에 넣는다.
//	}
//
//	func_sort(&data);	/// pNum를 오름차순 정렬한다.
//
//	printf("\n<오름차순 정렬된 수 출력>\n"); //출력
//	for (int i = 0; i < data.N; i++) { //i = 0부터 N-1까지 1씩 증가한다.
//		printf("%2d ", data.pNum[i]); // 2칸짜리 공간을 만들어 거기에 넣는다.
//		if (i % 10 == 9) printf("\n"); // 한줄에 최대 10개의 수만 넣겠다.
//	}
//	free(data.pNum);// 동적할당한 것을 초기화 한다.
//}
//#include<stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요" );
//	fclose(pFile);
//}

//#include<stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}

//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "w");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//}

//#include<stdio.h>
//
//void main()
//{
//	FILE *pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		fprintf(pFile,"파일에 쓰고 싶은 말을 입력하세요 :");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용 )%-10s]\n", n, name);
//	}
//	fclose(pFile);
//}

//#include<stdio.h>
//void main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile1.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("파일을 찾지 못하였습니다.\n");
//		return;
//
//	}
//	while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//}

#include<stdio.h>
#include<stdlib.h>

#define BUFF_SIZE 30

int main() {
	char buff[BUFF_SIZE];
	int readLen = 0;
	FILE* src, * dst;
	char name1[100], name2[100], enter;

	printf("입력받을 파일의 이름을 입력하세요 :");
	scanf("%s%c", name1, &enter);
	printf("출력받을 파일의 이름을 입력하세요:");
	gets_s(name2);

	src = fopen(name1, "rb");
	dst = fopen(name2, "wb");

	if (src == NULL || dst == NULL) {
		puts("파일을 못 찾음");
		return -1;
	}
	while (true) {
		readLen = fread(buff, 1, BUFF_SIZE,src);
		if (readLen < BUFF_SIZE) {
			if (feof(src) != 0) {
				fwrite(buff, 1, readLen, dst);
				puts("파일 복사 완료");
				break;
			}
			else {
				printf("파일 복사 실패");
				return -1;
			}
		}
		fwrite(buff, 1, BUFF_SIZE, dst);
	}
	if (fclose(src) != 0 || fclose(dst) != 0) {
		puts("파일을 닫지 못했습니다.");
		return -1;
	}
	return 0;
}



