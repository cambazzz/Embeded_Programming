// C++ code
//
void setup()
{
  for(int i=7;i>0;i--)
  {
	pinMode(i,OUTPUT);  
  }
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
 digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,HIGH);//e
    digitalWrite(6,HIGH);//f
    digitalWrite(7,LOW);//g
    

delay(1000);



    digitalWrite(1,LOW); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,HIGH);//c
    digitalWrite(4,LOW);//d
    digitalWrite(5,LOW);//e
    digitalWrite(6,LOW);//f
    digitalWrite(7,LOW);//g

    delay(1000);


    digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,LOW);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,HIGH);//e
    digitalWrite(6,LOW);//f
    digitalWrite(7,HIGH);//g

    delay(1000); 



    digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,LOW);//e
    digitalWrite(6,LOW);//f
    digitalWrite(7,HIGH);//g

   delay(1000);




    digitalWrite(1,LOW); //a
    digitalWrite(2,HIGH);//b.
    digitalWrite(3,HIGH);//c.
    digitalWrite(4,LOW);//d
    digitalWrite(5,LOW);//e
    digitalWrite(6,HIGH);//f.
    digitalWrite(7,HIGH);//g.

   delay(1000); 




    digitalWrite(1,HIGH); //a
    digitalWrite(2,LOW);//b.
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,LOW);//e.
    digitalWrite(6,HIGH);//f
    digitalWrite(7,HIGH);//g

    delay(1000); 




    digitalWrite(1,HIGH); //a
    digitalWrite(2,LOW);//b.
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,HIGH);//e.
    digitalWrite(6,HIGH);//f
    digitalWrite(7,HIGH);//g

    delay(1000); //1 saniye bekletiyoruz




    digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b.
    digitalWrite(3,HIGH);//c
    digitalWrite(4,LOW);//d
    digitalWrite(5,LOW);//e.
    digitalWrite(6,LOW);//f
    digitalWrite(7,LOW);//g

    delay(1000); 




    digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,HIGH);//e
    digitalWrite(6,HIGH);//f
    digitalWrite(7,HIGH);//g

    delay(1000); 




    digitalWrite(1,HIGH); //a
    digitalWrite(2,HIGH);//b
    digitalWrite(3,HIGH);//c
    digitalWrite(4,HIGH);//d
    digitalWrite(5,LOW);//e
    digitalWrite(6,HIGH);//f
    digitalWrite(7,HIGH);//g

    delay(1000); 
  
}