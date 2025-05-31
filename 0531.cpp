//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++) {
//		printf("■ ");
//	}
//	for (int i = my; i < MAXENERGY; i++) {
//		printf("□ ");
//	}
//	printf("\n");
//}
//int Gameover(int e, int ans) {
//	if (e == 0) {
//		printf("게임 오버...\n");
//		printf("정답 : %d", ans);
//		return 0;
//	}
//	return 1;
//}
//
//int Gamewin(int n, int ans) {
//	if (n == ans) {
//		printf("게임 승리!\n");
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
//		printf("정답 : %s\n", num);
//		if (Gamewin(atoi(num), answer) == 0) {
//			break;
//		}
//		printf("숫자를 맞춰보세요 :");
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
//	printf("내 목숨 : ");
//	for (int i = 0; i < my; i++) {
//		printf("■ ");
//	}
//	for (int i = my; i < MAXENERGY; i++) {
//		printf("□ ");
//	}
//	printf("\n");
//}
//int Gameover(int e, char *ans) {
//	if (e == 0) {
//		printf("게임 오버...\n");
//	
//		return 1;
//	}
//	return 0;
//}
//
//int Gamewin(char* n, char* ans) {
//	if (strcmp(n,ans)==0) {
//		printf("게임 승리!\n");
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
//		printf("문자를 맞추시오.");
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
//		printf("오답목록: %s\n", wrong);
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
//		printf("컴퓨터 : 가위\n\n");
//		if (me == 0) return 2;
//		else if (me == 1) return 1;
//		else if (me == 2) return 0;
//	}
//	else if (com == 1)
//	{
//		printf("검퓨터 : 바위\n\n");
//		if (me == 0) return 0;
//		else if (me == 1) return 2;
//		else if (me == 2) return 1;
//	}
//	else if (com == 2)
//	{
//		printf("컴퓨터 : 보\n\n");
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
//		printf("0:가위, 1:바위, 2:보\n당신이 낼 것은? : ");
//		scanf("%d", &me);
//		if (me == 0) printf("당신 : 가위 \n");
//		else if (me == 1) printf("당신 : 바위\n");
//		else if (me == 2) printf("당신 : 보\n");
//		else {
//			printf("\n반칙! 다시 내 주세요.\n\n");
//			continue;
//		}
//		tmp = compare_victory(com, me);
//		if (tmp == 0) {
//			printf("컴퓨터가이겼습니다.\n");
//			computer++;
//		}
//		else if (tmp == 1) {
//			printf("사람이이겼습니다.\n");
//			human++;
//		}
//		else if (tmp == 2) {
//			printf("비겼습니다.\n");
//			draw++;
//		}
//		printf("\n사람이이긴횟수 = %d, ", human);
//		printf("컴퓨터가이긴횟수 = %d, 동점 = %d\n\n", computer, draw);
//		printf("다시게임을하시겠습니까? (y/n) : ");
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
		printf("%s : 가위\n\n",who);
		return 0;
	}
	else if (what == 1)
	{
		printf("%s : 바위\n\n",who);
		return 0;
	}
	else if (what == 2)
	{
		printf("%s : 보\n\n", who);
		return 0;
	}
	else {
			return -1;
	}

}


int compare_victory(int com, int me)
{

	whowhat("컴퓨터", com);
	/*if (com == 0) 
		printf("컴퓨터 : 가위\n\n");
	else if (com == 1)
		printf("검퓨터 : 바위\n\n");
	else if (com == 2)
		printf("컴퓨터 : 보\n\n");*/


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
		printf("\n 새로운 게임 : s \t 이어하기 : o \n ");
		scanf(" %c", &ask_start);
		if (ask_start == 'o') {
			fscanf(fp, "%d %d %d", &human, &computer, &draw);
		}
		
		fclose(fp);
	}
	else {
		printf("이어할 데이터가 없습니다. 새로 시작합니다.");
	}

	
	
	
	while (true)
	{	
		
		com = rand() % 3;
		printf("0:가위, 1:바위, 2:보\n당신이 낼 것은? : ");
		scanf("%d", &me);
		/*if (me == 0) printf("당신 : 가위 \n");
		else if (me == 1) printf("당신 : 바위\n");
		else if (me == 2) printf("당신 : 보\n");
		else {*/
		if(whowhat("당신", me) == -1){
			printf("\n반칙! 다시 내 주세요.\n\n");
			continue;
		}
		tmp = compare_victory(com, me);
		if (tmp == 0) {
			printf("컴퓨터가이겼습니다.\n");
			computer++;
		}
		else if (tmp == 1) {
			printf("사람이이겼습니다.\n");
			human++;
		}
		else if (tmp == 2) {
			printf("비겼습니다.\n");
			draw++;
		}
		
		
		printf("\n사람이이긴횟수 = %d, ", human);
		printf("컴퓨터가이긴횟수 = %d, 동점 = %d\n\n", computer, draw);
		printf("다시게임을하시겠습니까? (y/n) : ");
		
		
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