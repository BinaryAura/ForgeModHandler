/*
 * Author: BinaryAura
 * Version: 1I0-0
 */

#include <ncurses.h>
#include <string.h>

int main()
{
  initscr();
  printw("Hello World!");
  getch();
  endwin();

  return 0;
}
