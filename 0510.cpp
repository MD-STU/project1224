//#include<stdio.h>
////#include<string.h>
//
//int mystrlen(char *buf2)
//{
//	int N = 0;
//	while (*buf2) {
//		N++;
//	}
//	return N;
//}
//
//int main()
//{
//	char buf[25];
//	scanf("%s", buf);
//	int len = mystrlen(buf);
//
//	printf("%d\n", len);
//
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char buff[100];
//	printf("������ �Է��Ͻÿ� :");
//	gets_s(buff);
//	char input;
//	char* q;
//	
//	while (1) {
//		printf("ã�� ���ڸ� �Է��Ͻÿ�:");
//		scanf(" %c", &input); //���ڿ����� ���鵵 �����ϱ� ���¸� ���־� �Ѵ�.
//		
//		q = strchr(buff, input);
//		
//		if (q != NULL) {
//			printf("%d������ �ֽ��ϴ�.\n", q-buff+1);
//			
//		}
//		else if (q == NULL) {
//			printf("�����ϴ�.\n");
//		}
//		
//		if (input == '0') {
//			break;
//		}
//		
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	p = strtok(String, "_");
//	while (p) {
//		data[cnt++] = atoi(p);
//		p = strtok(NULL, "_");
//	}
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer :(decimal) %d (octal) %o \n",
//		integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "character : %c \n", character);
//	printf("%s \n", buf);
//	
//	sprintf(buf, "string: %s \n", string);
//	printf("%s \n", buf);
//	
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e // %f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %%\n");
//	printf("%s \n", buf);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//char parsing(char* String, int* data)
//{
//	char oper;
//	char* p;
//	p = strtok(String, " ");
//	data[0] = atoi(p);
//	p = strtok(NULL, " ");
//	oper = *p;
//	p = strtok(NULL, " ");
//	data[1] = atoi(p);
//	p = strtok(NULL, " ");
//	p = strtok(NULL, " ");
//	data[2] = atoi(p);
//	return oper;
//}
//
//int main()
//{
//	
//	char String[100];
//	gets_s(String);
//	int data[3];
//	char oper = parsing(String, data);
//
//	int result;
//	switch (oper)
//	{
//	case '+': result = data[0] + data[1]; break;
//	case '-': result = data[0] - data[1]; break;
//	case '*': result = data[0] * data[1]; break;
//	case '/': result = data[0] / data[1]; break;
//	case '%': result = data[0] % data[1]; break;
//	}
//
//
//	if (result == data[2]) {
//		printf("���Դϴ�.");
//	}
//	else {
//		printf("%d %c %d = %d�Դϴ�.", data[0], oper, data[1], result);
//	}


	//if (oper == '-') {
	//	if (data[0] - data[1] == data[2]) {
	//		printf("���Դϴ�.");
	//	}
	//	else {
	//		data[2] = data[0] + data[1];
	//		printf("%d - %d = %d�Դϴ�.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '+') {
	//	if (data[0] + data[1] == data[2]) {
	//		printf("���Դϴ�.");
	//	}
	//	else {
	//		data[2] = data[0] + data[1];
	//		printf("%d + %d = %d�Դϴ�.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '*') {
	//	if (data[0] * data[1] == data[2]) {
	//		printf("���Դϴ�.");
	//	}
	//	else {
	//		data[2] = data[0] * data[1];
	//		printf("%d * %d = %d�Դϴ�.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '/') {
	//	if (data[0] / data[1] == data[2]) {
	//		printf("���Դϴ�.");
	//	}
	//	else {
	//		data[2] = data[0] / data[1];
	//		printf("%d / %d = %d�Դϴ�.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '%') {
	//	if (data[0] % data[1] == data[2]) {
	//		printf("���Դϴ�.");
	//	}
	//	else {
	//		data[2] = data[0] % data[1];
	//		printf("%d % %d = %d�Դϴ�.", data[0], data[1], data[2]);
	//	}
	//}
//}




//#include<stdio.h>
//
//struct POINT{ short x, y; };
//POINT getDefaultData();
//POINT plus(POINT pt3);
//void printData(POINT pt2);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus(pt);
//	printData(pt);
//}
//
//POINT getDefaultData( )
//{
//	POINT pt1;
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//POINT plus(POINT pt3)
//{	
//	 pt3.x += 5;
//	 pt3.y += 5;
//	return pt3;
//
//}
//
//void printData(POINT pt2)
//{	
//	printf("�� : %hd\n", pt2.x);
//	printf("�� : %hd\n", pt2.y);
//}
//
 
// 
//#include<stdio.h>
//
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//
//};
//COMPANY HireGM_once(COMPANY gameCo) {
//	gameCo.gms[gameCo.gmCount].no = gameCo.gmCount + 1;
//	printf("�̸��� �Է����ּ��� :");
//	scanf("%s", gameCo.gms[gameCo.gmCount].name);
//	printf("�μ��� �Է����ּ��� :");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	printf("������ �Է����ּ��� :");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	gameCo.gmCount++;
//	return gameCo;
//}
//void main()
//{
//	printf("������ ����غ���!\n");
//	COMPANY gameCo;
//
//	printf("���� GM���� ����ұ�?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("�� ����ұ�?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d���� �̾Ҵ�!\n", gameCo.gmCount);
//}

//#include<stdio.h>
//
//struct RAMEN {
//	int price;
//	int stock;
//	char name[20];
//};
//
//void main()
//{
//	const int N = 5;
//	RAMEN ramen[N] = {
//		{1500, 3, "�Ŷ��"},{1000,2, "�����"},{2000,5,"�ȼ�����"},{400,2,"�ȼ�����"},{500,2,"��"}
//	};
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d�� (%d������)\n", (i + 1),
//			ramen[i].name, ramen[i].price, ramen[i].stock);
//		
//	}
//	printf("\n\n");
//	int money;
//	int moneyplus;
//	printf("���� �Է��Ͻÿ� :");
//	scanf("%d", &money);
//	
//	while (1) {
//		
//		printf("\n<<��� ���Ǳ�!>>");
//		printf("\n\n(%d�� ������ �� �߰� �Ա��� �� ����",N+1);
//		printf(" 0�� ������ �۵�����.)\n\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d.[%6s] %4d�� (%d������)\n", (i + 1),
//			ramen[i].name, ramen[i].price, ramen[i].stock);
//			
//		}
//		int choice;
//		printf("����ݾ�: %d��\n", money);
//		printf("��ȣ�� �Է��Ͻÿ�.");
//		scanf("%d", &choice);
//		choice--;
//		printf("\n");
//		if (choice > N+1 || choice < 0) {
//			printf("�ٽ��Է��Ͻÿ�.\n");
//			continue;
//		}
//		if (choice == N+1) {
//			printf("���� �Է��Ͻÿ� :");
//			scanf("%d", &moneyplus);
//			money = money + moneyplus;
//			continue;
//		}
//		if (choice == 0) {
//			printf("�Ž����� %d�� ��ȯ�մϴ�.",money);
//			break;
//		}
//		
//		//��������� �Է�.
//		if (money < ramen[choice].price) {
//			printf("�����Ͻ� �� �����ϴ�.\n\n");
//			continue;
//		}
//
//		if (ramen[choice].stock == 0) {
//			printf("��� �������� �����Ͻ� �� �����ϴ�.\n\n");
//			continue;
//		}
//		
//		printf("%s�� ���Խ��ϴ�.\n", ramen[choice].name);
//		
//		ramen[choice].stock -= 1;
//		if (ramen[choice ].stock == 0 ) {
//				printf("%s�� ��� ���������ϴ�.\n", ramen[choice].name);
//			}
//		
//		
//		money -= ramen[choice].price;
//		printf("%d�� ���ҽ��ϴ�.\n\n", money);
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//void main(void) {
//	int* iptr = (int*)malloc(sizeof(int));
//	char* cptr = (char*)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//
//	printf("%d, %c, %;f", *iptr, *cptr, *dptr);
//
//	free(iptr);
//	free(cptr);
//	free(dptr);
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int arr_1[5];
//	int* arr_2;
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		arr_1[i] = i+1;
//	}
//	arr_2 = (int*)malloc(sizeof(int) * 5);
//
//	for (i = 0; i < 5; i++) {
//		arr_2[i] = arr_1[i];
//		printf("%d ", arr_2[i]);
//	}
//
//	free(arr_2);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//void main()
//{
//	int i, j;
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = (int**)malloc(nRow * sizeof(int*));
//	for (i = 0; i < nRow; ++i)
//	{
//		aNum[i] = (int*)malloc(nCol * sizeof(int));
//		for (j = 0; j < nCol; ++j) aNum[i][j] = i * 10 + j;
//	}
//
//	for (i = 0; i < nRow; ++i)
//	{
//		for (i = 0; j < nCol; ++j)printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//
//	for (i = 0; i < nRow; ++i)free(aNum[i]);
//	free(aNum);
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//void main()
//{
//	int i, j;
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = new int*[nRow];
//	for (i = 0; i < nRow; ++i)
//	{
//		aNum[i] = new int[nCol];
//		for (j = 0; j < nCol; ++j) aNum[i][j] = i * 10 + j;
//	}
//
//	for (i = 0; i < nRow; ++i)
//	{
//		for (i = 0; j < nCol; ++j)printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//
//	for (i = 0; i < nRow; ++i)delete(aNum[i]);
//	delete(aNum);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//	int* p1;
//	p1 = (int*)malloc(sizeof(int)*10);
//	
//	for (int i = 0; i < 10; i++) {
//		p1[i] = rand() % 10+1;
//		printf("%d\n", p1[i]);
//	}
//	free(p1);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void func_sort(int* pNum, int N);
//void func_swap(int& a, int& b);
//
//void main()
//{
//	int N, * pNum;
//	scanf("%d", &N);
//}