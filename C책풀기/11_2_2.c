# include<stdio.h>
# include <string.h>

int main(){
    char word [50];
    scanf("%s", word);
   int n = strlen(word);

    for (int i = 0 , j = n-1;i < j ; i++, j--){
        char c;
        c = word[i];
        word [i] = word[j];
        word[j] = c;
    }

    printf("%s", word);
    return 0;
}