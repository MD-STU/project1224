//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("�� ��� : ");
//	for (int i = 0; i < my; i++) {
//		printf("�� ");
//	}
//	for (int i = my; i < MAXENERGY; i++) {
//		printf("�� ");
//	}
//	printf("\n");
//}
//int Gameover(int e, int ans) {
//	if (e == 0) {
//		printf("���� ����...\n");
//		printf("���� : %d", ans);
//		return 0;
//	}
//	return 1;
//}
//
//int Gamewin(int n, int ans) {
//	if (n == ans) {
//		printf("���� �¸�!\n");
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char num[4] = "___", tmp[4];
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	int k = 1;
//	while (1) {
//		printenergy(energy);
//		if (Gameover(energy, answer)==0) {
//			break;
//		}
//		printf("���� : %s\n", num);
//		if (Gamewin(atoi(num), answer) == 0) {
//			break;
//		}
//		printf("���ڸ� ���纸���� :");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < 3; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check) energy--;
//	}
//	return 0;
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("�� ��� : ");
//	for (int i = 0; i < my; i++) {
//		printf("�� ");
//	}
//	for (int i = my; i < MAXENERGY; i++) {
//		printf("�� ");
//	}
//	printf("\n");
//}
//int Gameover(int e, char *ans) {
//	if (e == 0) {
//		printf("���� ����...\n");
//	
//		return 1;
//	}
//	return 0;
//}
//
//int Gamewin(char* n, char* ans) {
//	if (strcmp(n,ans)==0) {
//		printf("���� �¸�!\n");
//		return 1;
//	}
//	return 0;
//}
//
//char* getAnswer()
//{
//	srand((unsigned int)time(NULL));
//	int a,tmp;
//	int len;
//	char arr[20];
//	char* p;
//	FILE* fp;
//	fp = fopen("answer.txt", "r");
//	fscanf(fp, "%d",&a);
//	tmp = rand() % a + 1;
//	
//	for (int i = 0; i < tmp;i++) {
//		fscanf(fp, "%s", arr);
//	}
//	
//	len = strlen(arr);
//	p = (char*)malloc(len+1);
//	memcpy(p, arr, len+1);
//	
//	
//	fclose(fp);
//	
//	return p;
//	
//}
//
//int main()
//{
//	char* Answer = getAnswer();
//	
//	char* blank,len,*wrong;
//	len = strlen(Answer);
//
//	blank = (char*)malloc(len + 1);
//	memset(blank, '_', len);
//	blank[len] = NULL;
//
//	wrong = (char*)malloc(MAXENERGY +1);
//	memset(wrong, '.', MAXENERGY);
//	wrong[MAXENERGY] = NULL;
//	int count = 0;
//	
//
//	int energy = MAXENERGY;
//	while (1) {
//		printenergy(energy);
//		char tmp, input;
//		printf("%s\n", blank);
//		if (Gameover(energy, Answer) == 1) {
//			
//			break;
//		}
//		if (Gamewin(Answer,blank)==1) {
//			break;
//		}
//
//		printf("���ڸ� ���߽ÿ�.");
//		scanf(" %c", &input);
//		bool check = true;
//		for (int i = 0; i < len; i++) {
//			if (Answer[i] == input) {
//				blank[i] = input;
//				check = false;
//			}
//			
//		}
//		if (check) {
//			wrong[count] = input;
//			count++;
//			energy--;
//		}
//		
//		printf("������: %s\n", wrong);
//	}
//
//	free(blank);
//	free(Answer);
//	free(wrong);
//	return 0;
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int compare_victory(int com, int me)
//{
//	if (com == 0) {
//		printf("��ǻ�� : ����\n\n");
//		if (me == 0) return 2;
//		else if (me == 1) return 1;
//		else if (me == 2) return 0;
//	}
//	else if (com == 1)
//	{
//		printf("��ǻ�� : ����\n\n");
//		if (me == 0) return 0;
//		else if (me == 1) return 2;
//		else if (me == 2) return 1;
//	}
//	else if (com == 2)
//	{
//		printf("��ǻ�� : ��\n\n");
//		if (me == 0) return 1;
//		else if (me == 1) return 0;
//		else if (me == 1) return 2;
//	}
//
//}
//void main()
//{
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//	srand(time(NULL));
//	while (true)
//	{
//		com = rand() % 3;
//		printf("0:����, 1:����, 2:��\n����� �� ����? : ");
//		scanf("%d", &me);
//		if (me == 0) printf("��� : ���� \n");
//		else if (me == 1) printf("��� : ����\n");
//		else if (me == 2) printf("��� : ��\n");
//		else {
//			printf("\n��Ģ! �ٽ� �� �ּ���.\n\n");
//			continue;
//		}
//		tmp = compare_victory(com, me);
//		if (tmp == 0) {
//			printf("��ǻ�Ͱ��̰���ϴ�.\n");
//			computer++;
//		}
//		else if (tmp == 1) {
//			printf("������̰���ϴ�.\n");
//			human++;
//		}
//		else if (tmp == 2) {
//			printf("�����ϴ�.\n");
//			draw++;
//		}
//		printf("\n������̱�Ƚ�� = %d, ", human);
//		printf("��ǻ�Ͱ��̱�Ƚ�� = %d, ���� = %d\n\n", computer, draw);
//		printf("�ٽð������Ͻðڽ��ϱ�? (y/n) : ");
//
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//
//		if (ask_finish == 'n')
//			break;
//		printf("\n");
//
//	}
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int whowhat(const char* who, int what)
{
	printf("%s : %d\n", who, what);
	if (what == 0) {
		printf("%s : ����\n\n",who);
		return 0;
	}
	else if (what == 1)
	{
		printf("%s : ����\n\n",who);
		return 0;
	}
	else if (what == 2)
	{
		printf("%s : ��\n\n", who);
		return 0;
	}
	else {
			return -1;
	}

}


int compare_victory(int com, int me)
{

	whowhat("��ǻ��", com);
	/*if (com == 0) 
		printf("��ǻ�� : ����\n\n");
	else if (com == 1)
		printf("��ǻ�� : ����\n\n");
	else if (com == 2)
		printf("��ǻ�� : ��\n\n");*/


	if (com == 0) {
		if (me == 0) return 2;
		else if (me == 1) return 1;
		else if (me == 2) return 0;
	}
	else if (com == 1)
	{
		if (me == 0) return 0;
		else if (me == 1) return 2;
		else if (me == 2) return 1;
	}
	else if (com == 2)
	{
		if (me == 0) return 1;
		else if (me == 1) return 0;
		else if (me == 2) return 2;
	}

}
void main()
{
	FILE* fp;
	int com = 0;
	int me = 0;
	char ask_finish = 0;
	char ask_start = 0;
	int human = 0, computer = 0, draw = 0;
	int tmp = 0;
	srand(time(NULL));
	
	
	fp = fopen("rcp.txt", "r");
	if (fp != NULL) {
		printf("\n ���ο� ���� : s \t �̾��ϱ� : o \n ");
		scanf(" %c", &ask_start);
		if (ask_start == 'o') {
			fscanf(fp, "%d %d %d", &human, &computer, &draw);
		}
		
		fclose(fp);
	}
	else {
		printf("�̾��� �����Ͱ� �����ϴ�. ���� �����մϴ�.");
	}

	
	
	
	while (true)
	{	
		
		com = rand() % 3;
		printf("0:����, 1:����, 2:��\n����� �� ����? : ");
		scanf("%d", &me);
		/*if (me == 0) printf("��� : ���� \n");
		else if (me == 1) printf("��� : ����\n");
		else if (me == 2) printf("��� : ��\n");
		else {*/
		if(whowhat("���", me) == -1){
			printf("\n��Ģ! �ٽ� �� �ּ���.\n\n");
			continue;
		}
		tmp = compare_victory(com, me);
		if (tmp == 0) {
			printf("��ǻ�Ͱ��̰���ϴ�.\n");
			computer++;
		}
		else if (tmp == 1) {
			printf("������̰���ϴ�.\n");
			human++;
		}
		else if (tmp == 2) {
			printf("�����ϴ�.\n");
			draw++;
		}
		
		
		printf("\n������̱�Ƚ�� = %d, ", human);
		printf("��ǻ�Ͱ��̱�Ƚ�� = %d, ���� = %d\n\n", computer, draw);
		printf("�ٽð������Ͻðڽ��ϱ�? (y/n) : ");
		
		
		do {
			ask_finish = (char)getchar();
		} while (ask_finish == '\n');

		if (ask_finish == 'n') {
			break;
		}
		printf("\n");


	}
	

	
	fp = fopen("rcp.txt", "w");
	fprintf(fp, "%d %d %d", human, computer, draw);
	fclose(fp);
}