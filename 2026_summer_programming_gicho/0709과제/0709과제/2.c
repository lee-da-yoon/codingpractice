# include <stdio.h>
# include <stdlib.h>

struct MovieData {
	char title[50];
	char director[30];
	int year;
	int runningtime;
};

void print(struct MovieData* m);

int main() {
	struct MovieData movie1;
	fgets(movie1.title, sizeof(movie1.title), stdin); // ? œëª©ê³¼ ê°ë… ?´ë¦„ì— ê³µë°±?´ ?¬?•¨?˜ë¯?ë¡? 
	fgets(movie1.director, sizeof(movie1.director), stdin); // scanf ?‚¬?š© ?‹œ ?›?•˜?Š” ê²°ê³¼ê°? ?‚˜?˜¤ì§? ?•Š?Œ. fgets() ?‚¬?š©?•˜ê¸?
	scanf("%d", &movie1.year);
	scanf("%d", &movie1.runningtime);

	struct MovieData * p = &movie1;

	print(p);
	return 0;
}

void print(struct MovieData *m) {
	printf("Title : %s", m->title); // ê·¸ë¦¬ê³? fgetsë¡? ?ž…? ¥ ?‹œ ë§ˆì??ë§‰ì— ê°œí–‰ë¬¸ìž?„ ????ž¥?¨
	printf("Director : %s", m->director); // ê·¸ëž˜?„œ fgetsë¡? ?ž…? ¥ë°›ì?? ?‘ ?•­ëª? ?’¤?—?Š” \n ?‚¬?š©?•˜ì§? ?•Š?Œ
	printf("Year : %d\n", m->year);
	printf("RunningTime : %d\n", m->runningtime);
}

