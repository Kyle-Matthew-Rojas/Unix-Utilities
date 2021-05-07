#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   if(argc < 1){
    printf("my_cat: cannot open file\n");
    exit(0);
  }


   FILE * fpoint;
   int counter;
   for(counter = 1; counter < argc; counter++){
        fpoint = fopen(argv[counter],"r");
        if(fpoint == NULL){
          printf("my_cat: cannot open file\n");
          exit(1);
        }else{
        char values = fgetc(fpoint);
        while(values != EOF){
         printf("%c",values);
         values = fgetc(fpoint);
        }
      }
      fclose(fpoint);
   }
}
