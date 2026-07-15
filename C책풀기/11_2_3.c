# include <stdio.h>
# include <string.h>

int main(){
    char word[40];
    scanf("%s", word);
    int n = strlen(word);

    char max = word[0];
    for (int i = 0 ; i < n ; i++){
        if (word[i] > max){
            max = word[i];
        }
    }
    printf("%c", max);
    return 0;
}