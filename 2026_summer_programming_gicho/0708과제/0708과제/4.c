# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
	FILE* f;
	f = fopen("f4.txt", "r");
	char a[20][20];
	char b[20][20];

	for (int i = 0; i < 20; i++) {
		fscanf(f, "%s", a[i]);
	} // �씪�떒 �엯�젰諛쏆쓬

	//�븣�븘�꽌 �옒 �삤由꾩감�닚 �젙�젹�빐�꽌 異쒕젰�빐�씪
	//留⑥븵湲��옄鍮꾧탳�땲源� a[i][0]�쓣 �떦 �떎 鍮꾧탳瑜� �빐�꽌 以꾩꽭�슦湲�?? 洹쇰뜲�뼱耳��븿


	//for (int i = 0; i < 20; i++) {
	//	printf("%s ", a[i]);
	//}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19 - i; j++) {
			if (strcmp(a[j], a[j + 1]) > 0) { //2媛� 鍮꾧탳�빐�꽌 strcmp 寃곌낵媛� �뼇�닔硫� �븵(a[j])媛� �겮 -> �븵�뮘 諛붽씀湲�
				char t[20];
				strcpy(t, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], t); // 2媛� 諛붽퓞
			}
		}
	}

	for (int i = 0; i < 20; i++) { // 異쒕젰�븯湲� 
		printf("%s ", a[i]);		
	}
		fclose(f);
		return 0;
}