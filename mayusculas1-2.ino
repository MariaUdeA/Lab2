// C++ code
//Maria del Mar Arbelaez
//27 de Enero, 2022

void setup()
{
  Serial.begin(9600);
}
  
String frase="loquesea";
void loop()                       
{
  Serial.println(F("Ingrese una frase:"));
  while (Serial.available() == 0){
  }
  frase=Serial.readString();
  for (int i=0;frase[i]!='\0';i++){
    	if (frase[i]>=97 && frase[i]<=122){
            frase[i]=frase[i]-32;
        }
        
   }
   Serial.println(frase);
}                              
