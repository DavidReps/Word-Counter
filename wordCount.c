# include <stdio.h>
// TODO optomize

int main(){
  int words = 0;
  int character = 0;
  int lines = 0;
  int prev = getchar();
  int c;
  while ((c = getchar()) != EOF){
    character += 1;
    if  (c == 10){
      lines +=1;
    }
  if (((c <= 32 ) || (c > 126)) && ((prev > 32) && (prev < 127))){
    words +=1;
  }
  prev = c;
  }
  printf("total words: %d\n:", words);
  printf("total character: %d\n:", character);
  printf("total lines: %d\n:", lines);

  return 0;

}
