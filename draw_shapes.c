#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow using attributes from print_triangle method
// and print_square method modified so its at the middle of triangle
void print_arrow(int leftCol, int size)
{
  int endCol = (leftCol * 2) + size;
  int test = leftCol * 2- 1;
  print_triangle(leftCol,size);
  // for loop for printing the square correcly below the triangle
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col <  size; col++) putchar(' ');
    for (       ; col <  endCol + 1;  col++) putchar('*');
    //for (col = 0; col < test; col++) putchar(' ');
    //for (col = 0; col < size; col++) putchar('*');

    putchar('\n');
  }
}
