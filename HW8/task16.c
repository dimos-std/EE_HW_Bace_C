
#include <stdio.h>

#define BUF_SIZE 10

int input_arr(int *arr, int len)
{
  int i;
  for (i = 0; i < len; i++){
    if (!(scanf("%d", &arr[i])))
      return -1;
  }
  return i;
}
void print_arr(int *arr, int len)
{
  for(int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int often_repeated(int *src, int len)
{
  int num = src[0];
  int cnt_tmp, cnt = 0;

  for(int i = 0; i < len; i++){
    cnt_tmp = 0;
    for(int j = i + 1; j < len; j++){
      if(src[i] == src[j])
        cnt_tmp++;
    }
    if(cnt < cnt_tmp){
      cnt = cnt_tmp;
      num = src[i];
    }
  }

  return num;
} 

int main (void)
{
  int src[BUF_SIZE] = {0};
  int num;
  input_arr(src, BUF_SIZE);
  num = often_repeated(src, BUF_SIZE);
  printf("%d\n", num);

  return 0;
}
