// C++ code
//María del Mar Arbelaez
int tradliteral(char a){
    int b;
    b = (a=='M') ? 1000 : (a=='D') ? 500 : (a=='C') ? 100 : (a=='L') ? 50 : (a=='X') ? 10 : (a=='V') ? 5 : (a=='I') ? 1 :0;
    return b;
}
void setup()
{
  Serial.begin(9600);
    
}

String roman="nananan";
void loop()
{
  int dec=0;
    int arraydec[20]={0};
    int primero=0;
    int segundo=0;
    Serial.println(F("Ingrese un numero romano: "));
   while (Serial.available() == 0){
    
  }
    roman=Serial.readString();
  for (int i=0;roman[i]!='\0';i++){
        arraydec[i]=tradliteral(roman[i]);
    }
    for (int i=0;arraydec[i]!=0;i++){
       primero=arraydec[i];
       segundo=arraydec[i+1];
       if (primero>=segundo){
           dec=dec+primero;
       }
       else {
           dec=dec-primero;
       }
    }
    Serial.println(dec);
  
}