# include <stdio.h>

int main(int argc, char *argv[]){
    if (argc != 3){
        fprintf(stderr, "Usage: %s old_name_ new_name\n", argv[0]);
        return 1;
    }

    if (rename(argv[1], argv[2]) == 0)
        printf("File renamed successfully.\n");
    else {
        perror("Error renaming file");
        return 1;
    }
    return 0;
}