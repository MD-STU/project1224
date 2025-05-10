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
//	printf("문장을 입력하시오 :");
//	gets_s(buff);
//	char input;
//	char* q;
//	
//	while (1) {
//		printf("찾을 문자를 입력하시오:");
//		scanf(" %c", &input); //문자열에는 공백도 있으니까 ㄱㅒ를 없애야 한다.
//		
//		q = strchr(buff, input);
//		
//		if (q != NULL) {
//			printf("%d번지에 있습니다.\n", q-buff+1);
//			
//		}
//		else if (q == NULL) {
//			printf("없습니다.\n");
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
//		printf("참입니다.");
//	}
//	else {
//		printf("%d %c %d = %d입니다.", data[0], oper, data[1], result);
//	}


	//if (oper == '-') {
	//	if (data[0] - data[1] == data[2]) {
	//		printf("참입니다.");
	//	}
	//	else {
	//		data[2] = data[0] + data[1];
	//		printf("%d - %d = %d입니다.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '+') {
	//	if (data[0] + data[1] == data[2]) {
	//		printf("참입니다.");
	//	}
	//	else {
	//		data[2] = data[0] + data[1];
	//		printf("%d + %d = %d입니다.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '*') {
	//	if (data[0] * data[1] == data[2]) {
	//		printf("참입니다.");
	//	}
	//	else {
	//		data[2] = data[0] * data[1];
	//		printf("%d * %d = %d입니다.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '/') {
	//	if (data[0] / data[1] == data[2]) {
	//		printf("참입니다.");
	//	}
	//	else {
	//		data[2] = data[0] / data[1];
	//		printf("%d / %d = %d입니다.", data[0], data[1], data[2]);
	//	}
	//}
	//if (oper == '%') {
	//	if (data[0] % data[1] == data[2]) {
	//		printf("참입니다.");
	//	}
	//	else {
	//		data[2] = data[0] % data[1];
	//		printf("%d % %d = %d입니다.", data[0], data[1], data[2]);
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
//	printf("값 : %hd\n", pt2.x);
//	printf("값 : %hd\n", pt2.y);
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
//	printf("이름을 입력해주세요 :");
//	scanf("%s", gameCo.gms[gameCo.gmCount].name);
//	printf("부서을 입력해주세요 :");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	printf("월급을 입력해주세요 :");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	gameCo.gmCount++;
//	return gameCo;
//}
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
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
//		{1500, 3, "신라면"},{1000,2, "진라면"},{2000,5,"안성탕면"},{400,2,"안성탕면"},{500,2,"면"}
//	};
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1),
//			ramen[i].name, ramen[i].price, ramen[i].stock);
//		
//	}
//	printf("\n\n");
//	int money;
//	int moneyplus;
//	printf("돈을 입력하시오 :");
//	scanf("%d", &money);
//	
//	while (1) {
//		
//		printf("\n<<라면 자판기!>>");
//		printf("\n\n(%d번 누르면 돈 추가 입금할 수 있음",N+1);
//		printf(" 0을 누르면 작동정지.)\n\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1),
//			ramen[i].name, ramen[i].price, ramen[i].stock);
//			
//		}
//		int choice;
//		printf("현재금액: %d원\n", money);
//		printf("번호를 입력하시오.");
//		scanf("%d", &choice);
//		choice--;
//		printf("\n");
//		if (choice > N+1 || choice < 0) {
//			printf("다시입력하시오.\n");
//			continue;
//		}
//		if (choice == N+1) {
//			printf("돈을 입력하시오 :");
//			scanf("%d", &moneyplus);
//			money = money + moneyplus;
//			continue;
//		}
//		if (choice == 0) {
//			printf("거스름돈 %d을 반환합니다.",money);
//			break;
//		}
//		
//		//여기까지가 입력.
//		if (money < ramen[choice].price) {
//			printf("구매하실 수 없습니다.\n\n");
//			continue;
//		}
//
//		if (ramen[choice].stock == 0) {
//			printf("재고가 떨어져서 구매하실 수 없습니다.\n\n");
//			continue;
//		}
//		
//		printf("%s가 나왔습니다.\n", ramen[choice].name);
//		
//		ramen[choice].stock -= 1;
//		if (ramen[choice ].stock == 0 ) {
//				printf("%s의 재고가 떨어졌습니다.\n", ramen[choice].name);
//			}
//		
//		
//		money -= ramen[choice].price;
//		printf("%d원 남았습니다.\n\n", money);
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
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
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