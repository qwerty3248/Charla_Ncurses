#include <ncurses.h>
#include <iostream>
using namespace std;

int main (){

    //Inicializar Ncurses
    initscr();
    //para activar el teclado
    //keypad(stdscr,TRUE);
    
    //Para mover el cursor
    //move(5,8);//Filas,columnas
    
    //para obetener las filas y las columnas de la terminal
    //int max_row,max_col; 
    //getmaxyx(stdscr,max_row,max_col);

    //para desactivar el eco del teclado
    //noecho();

    //Con echo se vuelve a poner el teclado
    //echo();

    //Para imprimir un string, esta funcion espera a que presiones enter
    //getstr("Hola");

    //Para limpiar la pantalla
    //clear();

    //Para poner caracteristicas por ejemplo en los caracteres este caso es para ponerlo en negrita  
    //attron(A_BOLD);

    //Para desactivarlo y que vuelva a parpadear 
    //attroff(A_BLINK);

    //Estos atributos se pueden mezclar entre si, ademas se debe de poner un on el caracter y luego un off para que no afecte al resto de cosas si no 
    //quieres que afecte

    //Para los colores se debe declarar pares de colores enumerados, color de texto y color de fondo

    //init_pair(1,COLOR_RED,COLOR_BLACK);//Se inicializa el par uno con el texto en rojo y el fondo en negro, el 0 no funciona david no sabe por que 
    //attron(COLOR_PAIR(<indice del pair de color>))

    //redefine el color que ya existe por uno en RGB pero va hasta el 1000 desde 0 al 1000
    //init_color(<nombre_color_existente>,R,G,B);

    //Desactiva el delay de entrada
    //nodelay(stdscr,TRUE);

    //Añade un caracter
    //tambine se le puede poner el prefijo mv
    //addch('X');

    //para eliminar el cursor y que no parpadee con 0 y 1 esta activado
    curs_set(0);//valores 0,1,2

    //con el prefijo mv se puede poner en la funcion donde ponerse mvprintw(5,8,"hola");
    
    //Imprime cosas de Ncurses por la pantalla
    mvprintw(5,8,"Un saludo");
    refresh();//Para que sea compatible no cambia la ejecuccion

    //Para mover el cursor
    //move(5,8);//Filas,columnas


    //devuelve el caracter que se ha presionado
    getch();
    
    


    //para cerrar ncurses
    endwin();


    return 0;

}