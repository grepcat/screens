#include <unistd.h>
#include <curses.h>

int main() {
  /* initialises the screen */
  initscr();

  /* moves the cursor to the specified location */
  move (5,15);

  /* prints the string into the window */
  printw("%s", "Hello World");

  /* refreshes the screen to match what's in memory */
  refresh();

  sleep (5);

  /* deallocates memory and ends ncurses */
  endwin();
  
  return(0);
  
}