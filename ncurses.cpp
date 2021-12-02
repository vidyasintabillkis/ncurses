#include <ncurses/ncurses.h>
using namespace std; 

int main (){
	initscr();
	
	mvprintw(5,5,"Vidya Sinta Billkis");
	
//	refresh();
	getch();
	endwin();
}
