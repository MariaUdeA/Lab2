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
/*//Ej 6 minus a mayus, lo otro =
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
//Ej 8
