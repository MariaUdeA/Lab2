// C++ code
//Maria del Mar Arbelaez
//27 de Enero, 2022

void setup()
{
  Serial.begin(9600);
  Serial.print(F("Ingrese una frase:"));
  String frase=Serial.readString();
  for (int i=0;frase[i]!='\n';i++){
    	if (frase[i]>=97 && frase[i]<=122){
            frase[i]=frase[i]-32;
        }
        
   }
   Serial.println(frase);
}

void loop()                       
{
                                  
}