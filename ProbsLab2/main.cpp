#include <iostream>
using namespace std;

/*//Ej2 Letras mayúsculas
#include <cstdlib>
#include <ctime>
int main(){
    int num=200;
    char abra[num+1]; //65-90 25 letras
    int veces[25]={0};
    srand(time(0));
    for (int i=0;i<num;i++) {
        char letra=rand()%25+66;
        abra[i]=letra;
        veces[letra-65]=veces[letra-65]+1;
    }
    abra[num]='\0'; //Para que no salgan chars extra raros al final
    cout.flush();
    cout<<abra<<endl;
    cout<<endl;
    for (int i=0;i<25;i++){
        if (veces[i]>0){
            cout<<char(i+65)<<':'<<veces[i]<<endl;
        }
    }
return 0;
}*/
/*//Ej4 char array to int
#include <math.h>
int convert(char* aa){
    int size=0;
    for (int i=0;aa[i]!='\0';i++){
        size++;
    }
    int num=0;
    for (int i=0;i<size;i++){
        num=num+((aa[i]-48)*pow(10,(size-i-1)));
    }
    return num;
}

int main(){
    char charnum[100];
    cout<<"Ingrese un numero (char[]): ";
    cin>>charnum;
    int numchar=convert(charnum);
    cout<<numchar<<" es en int"<<endl;
return 0;
}*/
/*//Ej 6 minus a mayus, lo otro = FALTA LO DE TINKERCAD
int main(){
    char *frase;
    cout<<"Ingrese una frase de menos de 120 char: "<<endl;;
    cin>>frase;
    for (int i=0;*(frase+i)!='\0';i++){
        if (*(frase+i)>=97 && *(frase+i)<=122){
            *(frase+i)=(*(frase+i))-32;
        }
        else {
           *(frase+i)=*(frase+i);
        }
    }
    cout<<frase<<endl;
    return 0;
}*/
/*//Ej 8 separar nums de lo demas
int main(){
   char frase[120];
   cout<<"Ingrese una frase: "<<endl;
   cin>>frase;
   char nums[120];
   char otros[120];
   int cnums=0;
   int cotros=0;
   for (int i=0;*(frase+i)!='\0';i++){
       if (*(frase+i)>=48 && *(frase+i)<=57){
            nums[cnums]=frase[i];
            cnums++;
       }
       else {
           otros[cotros]=frase[i];
           cotros++;
       }
   }
   nums[cnums]='\0';
   otros[cotros]='\0';
   cout<<"Original: "<<frase<<endl;
   cout<<"Numeros: "<<nums<<endl;
   cout<<"Texto y otros: "<<otros<<endl;
return 0;
}*/
/*//Ej 10 Romano a Decimal TINKERCAD
int tradliteral(char a){
    int b;
    b = (a=='M') ? 1000 : (a=='D') ? 500 : (a=='C') ? 100 : (a=='L') ? 50 : (a=='X') ? 10 : (a=='V') ? 5 : (a=='I') ? 1 :0;
    return b;
}

int main(){
    char roman[20];
    int dec=0;
    int arraydec[20]={0};
    int primero=0;
    int segundo=0;
    cout<<"Ingrese un numero romano: ";
    cin>>roman;
    for (int i=0;*(roman+i)!='\0';i++){
        *(arraydec+i)=tradliteral(*(roman+i));
    }
    for (int i=0;*(arraydec+i)!=0;i++){
       primero=*(arraydec+i);
       segundo=*(arraydec+i+1);
       if (primero>=segundo){
           dec=dec+primero;
       }
       else {
           dec=dec-primero;
       }
    }
    cout<<dec<<endl;
    return 0;
}*/
/*//Ej 12 print de una matriz cuadrada revision de cuadro mágico SIN TERMINAR

int main(){
   int size;
   bool verificando=true;
   int suma=0;
   cout<<"Ingrese el tamaño de lado del cuadrado(matriz): ";
   cin>>size;
   int matrix[size*size];
   cout<<"Ingrese los numeros de izquierda a derecha, arriba a abajo: "<<endl;
   for (int i=0;i<size*size;i++){ //Crear la matriz (array)
       cin>>*(matrix+i);
   }
   for (int i=0;i<size;i++){ //Imprimir
       for (int j=0;j<size;j++){
           cout<<matrix[j+i*size]<<' ';
       }
       cout<<'\n';
   }
   //Revisar si es o no magico
   for (int i=0;i<size*size && verificando==true;i++){ //Revisar si hay nums repetidos
           for (int j=i;j<size*size && verificando==true ;j++){
               if (matrix[i]==matrix[j]){
                   verificando=false;
                   cout<<"No es un cuadrado magico"<<endl;
               }
           }
   }
   if (verificando){


   }
   return 0;
}*/
//Ej 14 Rotaciones
int main(){
   int size=5;
   int matrix[size*size];
   cout<<"Ingrese los numeros de izquierda a derecha, arriba a abajo: "<<endl;
   for (int i=0;i<size*size;i++){ //Crear la matriz (array)
       *(matrix+i)=i+1;
   }
   cout<<"Original: "<<endl;
   for (int i=0;i<size;i++){ //Imprimir
       for (int j=0;j<size;j++){
           cout<<matrix[j+i*size]<<' ';
       }
       cout<<'\n';
   }
   cout<<"\n90 grados: "<<endl;
   for (int i=0;i<size;i++){
       for (int j=size-1;j>=0;j--){
           cout<<matrix[i+j*size]<<' ';
       }
       cout<<'\n';
   }
   cout<<"\n180 grados: "<<endl;
   for (int i=size-1;i>=0;i--){
       for (int j=size-1;j>=0;j--){
           cout<<matrix[i*size+j]<<' ';
       }
       cout<<'\n';
   }
   cout<<"\n270 grados: "<<endl;
   for (int i=size-1;i>=0;i--){
       for (int j=0;j<size;j++){
           cout<<matrix[j*size+i]<<' ';
       }
       cout<<'\n';
   }
   return 0;
}
