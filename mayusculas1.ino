// C++ code
//Maria del Mar Arbelaez
//27 de Enero, 2022

void setup()
{
  Serial.begin(9600);
  Serial.print(F("Ingrese una frase de menos de 120 char:"));
  String frase="poder"; //Serial.readString(); No se porque no funciona el read
  for (int i=0;frase[i]!='\0';i++){
    	if (frase[i]>=97 && frase[i]<=122){
            frase[i]=frase[i]-32;
        }
        
   }
   Serial.println(frase);
}

void loop()                       
{
                                  
}