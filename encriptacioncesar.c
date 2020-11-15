#include <stdio.h>
#include <string.h>

//Encriptacion Cesar tomando en cuenta el alfabeto ingles (26 caracteres) 
int main()
{
    //Ingresamos los espacios a recorrer usualmente son 3 
    printf("Ingrese la longitud para la encriptacion \n");
    int n;
    scanf("%d", &n);
    //Ingresamos el nombre a encriptar 
    printf("Ingrese su nombre \n");
    char nombre[100];
    scanf("%s", nombre);
    char resp;
    int i=0;
    //Encriptamos usando los valores ASCII de los caracteres
    while(nombre[i])
    {
        if(nombre[i]>=65 && nombre[i]<=90)
        {
            while(n>26){n=n-26;}
            resp=nombre[i]+n;
            if(resp>=65 && resp<=90){}
            else{resp=resp-26;}
            nombre[i]=resp;
        }
        if(nombre[i]>=97 && nombre[i]<=122)
        {
            while(n>26){n=n-26;}
            resp=nombre[i]+n;
            if(resp>=97 && resp<=122)
            {}
            else{resp=resp-26;}
            nombre[i]=resp;
        }
        i++;
    }
    printf("Resultado encriptacion= %s \n",nombre);
    return 0;
}
