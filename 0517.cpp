
//#include<stdio.h>//printf�� scanf����ϰڴ�.
//#include<stdlib.h>//malloc srand rand free����ϰڴ�.
//#include<time.h>//time ����ϰڴ�.
//
//
//
//void func_sort(int* pNum, int N); //�Լ��� int*�̶� int�� �Է¹ްڴ�.
////void func_swap(int& a, int& b); // �Լ��� int, int�� �Է¹ްڴ�.
//
//void main()
//{
//	int N, * pNum;
//	scanf("%d", &N); //int���� �Է¹ްڴ�.
//	pNum = (int*)malloc(sizeof(int) * N); // �迭�� ũ�Ⱑ 4���ϱ� N����Ʈ�� Ȯ���ϰ� �� ������ �����ش�.
//
//	srand((unsigned int)time(NULL));//�ð��� ���� seed���� ����
//
//	printf("<�������� �Է¹��� �� ���>\n"); //���
//	for (int i = 0; i < N; i++) {	// i = 0���� N-1���� 1�� �����Ѵ�.
//		*(pNum + i) = (rand() % N) + 1; // 1���� N������ ���� �������� �ް� pNum�� �� ���� �ִ´�.
//		printf("%2d", pNum[i]); // 2ĭ¥�� ������ ����� �ű⿡ �ִ´�.
//	}
//
//	func_sort(pNum, N);	/// pNum�� �������� �����Ѵ�.
//
//	printf("\n<�������� ���ĵ� �� ���\n"); //���
//	for (int i = 0; i < N; i++) { //i = 0���� N-1���� 1�� �����Ѵ�.
//		printf("%2d ", pNum[i]); // 2ĭ¥�� ������ ����� �ű⿡ �ִ´�.
//		if (i % 10 == 9) printf("\n"); // ���ٿ� �ִ� 10���� ���� �ְڴ�.
//	}
//	free(pNum);// �����Ҵ��� ���� �ʱ�ȭ �Ѵ�.
//}
//void func_swap(int& a, int& b)///pNum[i]�� a�� ���� ������ �ǰ�, pNum[j]�� b�� ���� ������ �ȴ�. int int�� �޴´�.
//{
//	int temp = a; // temp �� a���� �����ϰ�.
//	a = b; //a�� b���� �����ϰ�
//	b = temp;//b�� a���� �����Ѵ�.
//}
//
//void func_sort(int* pNum, int N) // int*�� int�� �ްڴ�.
//{
//	for (int i = 0; i < N; ++i) {//i = 0���� N-1���� 1�� �����Ѵ�.
//			for (int j = i; j < N; ++j) {// j = i���� N-1���� 1�� �����Ѵ� 
//				if (pNum[i] > pNum[j]) // �տ� �ִ� ���� �ڿ� �ִ� ������ ũ�ٸ�
//					func_swap(pNum[i], pNum[j]); // �迭�� ���� �� ũ�� �ڷ� ������./// �տ� �ִ� ���� �ڿ� �ִ� ���� �ٲ۴�. 
//			}
//		
//	}
//}

//#include<stdio.h>//printf�� scanf����ϰڴ�.
//#include<stdlib.h>//malloc srand rand free����ϰڴ�.
//#include<time.h>//time ����ϰڴ�.
//
//struct DATA {
//
//	int N, * pNum;
//};
//void func_swap(int& a, int& b)///pNum[i]�� a�� ���� ������ �ǰ�, pNum[j]�� b�� ���� ������ �ȴ�. int int�� �޴´�.
//{
//	int temp = a; // temp �� a���� �����ϰ�.
//	a = b; //a�� b���� �����ϰ�
//	b = temp;//b�� a���� �����Ѵ�.
//}
//
//void func_sort(DATA *d) // int*�� int�� �ްڴ�.
//{
//	for (int i = 0; i < (*d).N; ++i) {//i = 0���� N-1���� 1�� �����Ѵ�.
//		for (int j = i; j < d->N; ++j) {// j = i���� N-1���� 1�� �����Ѵ� 
//			if (d->pNum[i] > d->pNum[j]) // �տ� �ִ� ���� �ڿ� �ִ� ������ ũ�ٸ�
//				func_swap(d->pNum[i], d->pNum[j]); // �迭�� ���� �� ũ�� �ڷ� ������./// �տ� �ִ� ���� �ڿ� �ִ� ���� �ٲ۴�. 
//		}
//
//	}
//}
////void func_sort(int DATA.pNum, int N); //�Լ��� int*�̶� int�� �Է¹ްڴ�.
////void func_swap(int& a, int& b); // �Լ��� int, int�� �Է¹ްڴ�.
//
//void main()
//{
//	DATA data;
//
//	scanf("%d", &data.N); //int���� �Է¹ްڴ�.
//	data.pNum = (int*)malloc(sizeof(int) * data.N); // �迭�� ũ�Ⱑ 4���ϱ� N����Ʈ�� Ȯ���ϰ� �� ������ �����ش�.
//
//	srand((unsigned int)time(NULL));//�ð��� ���� seed���� ����
//
//	printf("<�������� �Է¹��� �� ���>\n"); //���
//	for (int i = 0; i < data.N; i++) {	// i = 0���� N-1���� 1�� �����Ѵ�.
//		*(data.pNum + i) = (rand() % data.N) + 1; // 1���� N������ ���� �������� �ް� pNum�� �� ���� �ִ´�.
//		printf("%2d", data.pNum[i]); // 2ĭ¥�� ������ ����� �ű⿡ �ִ´�.
//	}
//
//	func_sort(&data);	/// pNum�� �������� �����Ѵ�.
//
//	printf("\n<�������� ���ĵ� �� ���>\n"); //���
//	for (int i = 0; i < data.N; i++) { //i = 0���� N-1���� 1�� �����Ѵ�.
//		printf("%2d ", data.pNum[i]); // 2ĭ¥�� ������ ����� �ű⿡ �ִ´�.
//		if (i % 10 == 9) printf("\n"); // ���ٿ� �ִ� 10���� ���� �ְڴ�.
//	}
//	free(data.pNum);// �����Ҵ��� ���� �ʱ�ȭ �Ѵ�.
//}
//#include<stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("�ȳ��ϼ���" );
//	fclose(pFile);
//}

//#include<stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "�ȳ��ϼ���");
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
//		fprintf(pFile,"���Ͽ� ���� ���� ���� �Է��ϼ��� :");
//		scanf("%s", name);
//		fprintf(pFile, "%d��° ���� )%-10s]\n", n, name);
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
//		printf("������ ã�� ���Ͽ����ϴ�.\n");
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

	printf("�Է¹��� ������ �̸��� �Է��ϼ��� :");
	scanf("%s%c", name1, &enter);
	printf("��¹��� ������ �̸��� �Է��ϼ���:");
	gets_s(name2);

	src = fopen(name1, "rb");
	dst = fopen(name2, "wb");

	if (src == NULL || dst == NULL) {
		puts("������ �� ã��");
		return -1;
	}
	while (true) {
		readLen = fread(buff, 1, BUFF_SIZE,src);
		if (readLen < BUFF_SIZE) {
			if (feof(src) != 0) {
				fwrite(buff, 1, readLen, dst);
				puts("���� ���� �Ϸ�");
				break;
			}
			else {
				printf("���� ���� ����");
				return -1;
			}
		}
		fwrite(buff, 1, BUFF_SIZE, dst);
	}
	if (fclose(src) != 0 || fclose(dst) != 0) {
		puts("������ ���� ���߽��ϴ�.");
		return -1;
	}
	return 0;
}



