//определить цвет шахматной клетки
//Формат входных данных
//  В единственной строке входного файла записана координата клетки на шахматной доске:
//  всего два символа – буква и цифра (без пробелов). 
//Формат результата
//  В выходной файл нужно вывести «WHITE», если указанная клетка имеет белый цвет и «BLACK», если она черная. 

#include <stdio.h>

int get_color(char col, int row)
{
  int board[8][8] = {0};
  for(int i = 0; i < 8; i++)
    for(int j = 0; j < 8 ; j++)
      board[i][j] = (i + j) & 1;
   
  return board[col - 'A'][row -1]; 
}


int main(void)
{
  int row, res;
  char col;
    
  scanf("%c%d", &col, &row);
  res = get_color(col, row);
  printf("%s\n", res ? "WHITE" : "BLACK");
  return 0;  
}
