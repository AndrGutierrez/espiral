#include <stdio.h>
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define MAX 8

void recorrer(int direccion, int alto, int ancho)
{

    int n = alto , secuencia = 1;

    // r = row
    // c = column
    int r ,c , matriz[alto][ancho];
    int row_right  = 0 , column_down = ancho-1 , row_left = alto-1 , column_up = 0 ;

    // poner 0 en todos los valores de la matriz
    for(r = 0 ; r < alto ; r++)
    {
        for(c = 0 ; c < ancho ; c++)
        matriz[r][c] = 0 ;
    }
    //generar matriz
    while(secuencia != ancho*alto+1)
    {
          if(direccion == UP)
          {
            //Move RIGHT
            r = row_right++ ;
            for(c = 0 ; c < ancho ; c++)
            {
                if(matriz[r][c] == 0)
                matriz[r][c] = secuencia++;
            }

            direccion = RIGHT ;
          }
          else if(direccion == RIGHT)
          {
            //Hacia abajo
            c = column_down-- ;
            for(r = 0 ; r < alto ; r++)
            {
                if(matriz[r][c] == 0)
                matriz[r][c] = secuencia++;
            }
            direccion = DOWN ;

          }
          else if(direccion == DOWN)
          {
            //Hacia la izquierda
            r = row_left-- ;
            for(c = ancho-1 ; c >= 0 ; c--)
            {
                if(matriz[r][c] == 0)
                matriz[r][c] = secuencia++;

            }
            direccion = LEFT ;
          }
          else if(direccion == LEFT)
          {
            //Hacia arriba
            c = column_up++;
            for(r = alto-1 ; r >= 0 ; r--)
            {
                if(matriz[r][c] == 0)
                matriz[r][c] = secuencia++;
            }
            direccion = UP ;
          }

    }


    // Imprimir la matriz
}
int validar(){
    int num = 0;
    int h = 0;
    do {
        printf("\n ingresa un numero: ");
        scanf("%d",&num);
        h=num%2;
        printf("%d, %d", num, h);

        if(h==0){
	    printf("\n es un numero par, no puede ingresar a la matriz");
        }
        else{
            printf("\n es un numero impar, puede ingresar a la matriz");
            /* printf("\n %d, %d", num, h); */
        }
    } while (h==0);
    return num;

}

int main(){
    int x = validar();
    int y = validar();

    recorrer(4, x, y);
}
