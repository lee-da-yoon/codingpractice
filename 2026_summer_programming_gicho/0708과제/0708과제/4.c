// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
// 	FILE* f;
// 	f = fopen("f4.txt", "r");
// 	char a[20][20];
// 	char b[20][20];

// 	for (int i = 0; i < 20; i++) {
// 		fscanf(f, "%s", a[i]);
// 	} // ï¿½ì”ªï¿½ë–’ ï¿½ì—¯ï¿½ì °è«›ì†?“¬

// 	//ï¿½ë¸£ï¿½ë¸˜ï¿½ê½Œ ï¿½ì˜’ ï¿½ì‚¤?”±ê¾©ê°ï¿½ë‹š ï¿½ì ™ï¿½ì ¹ï¿½ë¹ï¿½ê½Œ ?•°?’•? °ï¿½ë¹ï¿½ì”ª
// 	//ï§â‘¥ë¸µæ¹²ï¿½ï¿½?˜„?®ê¾§íƒ³ï¿½ë•²æºï¿½ a[i][0]ï¿½ì“£ ï¿½ë–¦ ï¿½ë–Ž ?®ê¾§íƒ³?‘œï¿? ï¿½ë¹ï¿½ê½Œ ä»¥ê¾©ê½?ï¿½ìŠ¦æ¹²ï¿½?? æ´¹ì‡°?œ²ï¿½ë¼±??³ï¿½ï¿½ë¸¿


// 	//for (int i = 0; i < 20; i++) {
// 	//	printf("%s ", a[i]);
// 	//}

// 	for (int i = 0; i < 19; i++) {
// 		for (int j = 0; j < 19 - i; j++) {
// 			if (strcmp(a[j], a[j + 1]) > 0) { //2åª›ï¿½ ?®ê¾§íƒ³ï¿½ë¹ï¿½ê½Œ strcmp å¯ƒê³Œ?‚µåª›ï¿½ ï¿½ë¼‡ï¿½ë‹”ï§Žï¿½ ï¿½ë¸µ(a[j])åª›ï¿½ ï¿½ê²® -> ï¿½ë¸µï¿½ë®˜ è«›ë¶½???æ¹²ï¿½
// 				char t[20];
// 				strcpy(t, a[j]);
// 				strcpy(a[j], a[j + 1]);
// 				strcpy(a[j + 1], t); // 2åª›ï¿½ è«›ë¶½?“ž
// 			}
// 		}
// 	}

// 	for (int i = 0; i < 20; i++) { // ?•°?’•? °ï¿½ë¸¯æ¹²ï¿½ 
// 		printf("%s ", a[i]);		
// 	}
// 		fclose(f);
// 		return 0;
// }


