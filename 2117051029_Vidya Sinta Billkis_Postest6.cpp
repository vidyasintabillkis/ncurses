#include <ncurses/ncurses.h>
#include <windows.h>

using namespace std; 
int main (){
	initscr();
	
	while (true){
//		clear();
				
		mvprintw(5,5,"V");
		refresh();
		Sleep (1000);
		
		mvprintw(6,7,"I");
		refresh();
		Sleep (1000);
		
		mvprintw(7,9,"D");
		refresh();
		Sleep (1000);
		
		mvprintw(6,11,"Y");
		refresh();
		Sleep (1000);
		
		mvprintw(5,13,"A");
		refresh();
		Sleep (1000);
		
		mvprintw(7,16,"S");
		refresh();
		Sleep (1000);
		
		mvprintw(6,18,"I");
		refresh();
		Sleep (1000);
	
		mvprintw(5,20,"N");
		refresh();
		Sleep (1000);	
		
		mvprintw(6,22,"T");
		refresh();
		Sleep (1000);
		
		mvprintw(7,24,"A");
		refresh();
		Sleep (1000);
	}
	
	getch();
	endwin();
}
