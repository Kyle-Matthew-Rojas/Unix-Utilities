#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc < 2)
    {
        printf("my_grep: searchterm [file ...]\n");
        exit(1);
    }

    FILE *fpoint;
    int counter;
    for(counter =2; counter < argc; counter++){
        fpoint = fopen(argv[counter], "r");
        char values = fgetc(fpoint);
        if(fpoint != NULL){
            while(values != EOF)
            {
                printf("%c",values);
                values = fgetc(fpoint);
            }
        }else{
            printf("my_grep: cannot open file\n");
            exit(1);
        }
        fclose(fpoint);
    }

}
