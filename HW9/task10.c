//упаковать строку
//строка не более 1000 маленьких латинских букв. в конке "."
//вывод упакованной строки <буква><кол-во повторений>

#include <stdio.h>
#include <inttypes.h>
#define BUF_SIZE 1000

void print_compress(int size, char arr[])
{
  int i = 0;
  for(int i = 0; i < size; i += 2)
    printf("%c%u", arr[i], (unsigned char)arr[i + 1]);
  printf("\n");
}

int compress(int size, char src[], char dst[])
{
  
  int j = 0;
  int i = 0;
  int cnt = 1;
  dst[0] = src[0];
  while(src[++i] != '.' && i < size -1){
    if(dst[j] == src[i])
      cnt++;
    else{
      dst[++j] = cnt;
      dst[++j] = src[i];
      cnt = 1;
    }
  }
  dst[++j] = cnt;

  return  j;
}



int main(void)
{
  char src[BUF_SIZE] = {0};
  char dst[BUF_SIZE] = {0};
  int size;
  
  scanf("%s", src);
  size = compress(size, src, dst);
  print_compress(size, dst);
  return 0;  
}
