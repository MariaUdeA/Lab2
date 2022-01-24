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
//Ej4
/*int convert(char* aa){
    int num=0;
    for (int i=0;aa[i]!='\0';i++){
        int num=0;}
    return num;
}*/

int main()
{
    char charnum[5]="John";
    cout<<sizeof(charnum)<<endl;
    //int sizee=convert(charnum);
return 0;
}
