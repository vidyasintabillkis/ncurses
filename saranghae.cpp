#include <ncurses/ncurses.h>
#include <windows.h>

using namespace std; 
int main (){
	initscr();
	
	while (true){
//		clear();
				
		mvprintw(5,9,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(4,7,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(5,5,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(6,6,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(7,7,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(8,9,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(7,11,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(6,12,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(5,13,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(4,11,"*");
		refresh();
		Sleep (1000);
		
		mvprintw(6,15,"Saranghae");
		refresh();
		Sleep (1000);
	}
	
	getch();
	endwin();
}
