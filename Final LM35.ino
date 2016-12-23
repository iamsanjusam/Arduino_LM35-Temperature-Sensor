int tempc;
int tempx;
int temppin = 0;

void setup()
{
Serial.begin(9600);     //Defines all output pins. Here, I use 2-13 digitalpins and 3 analog pin as output.
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(A3, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);

}

void loop()
{
  tempc = analogRead(temppin);
  tempc = ((5.0 * tempc * 100.0)) / 1024.0; 
  tempx = (int)tempc;
  Serial.println(tempx);  // To convert into farenheat Serial.print(tempx * 9)/5 + 32)
  
  delay(4000);          //Temperature measures in every 4 seconds.
  
  digitalWrite(A3, HIGH);
  
  if(tempx == 0)
    {
    Azero();
    Bzero();
    }
  if(tempx == 1)
    {
    Azero();
    Bone();
    }
  if(tempx == 2)
    {
    Azero();
    Btwo();
    }
  if(tempx == 3)
    {
    Azero();
    Bthree();
    }
  if(tempx == 4)
    {
    Azero();
    Bfour();
    }
  if(tempx == 5)
    {
    Azero();
    Bfive();
    }
  if(tempx == 6)
    {
    Azero();
    Bsix();
    }
  if(tempx == 7)
    {
    Azero();
    Bseven();
    }
  if(tempx == 8)
    {
    Azero();
    Beight();
    }
  if(tempx == 9)
    {
    Azero();
    Bnine();
    }
  if(tempx == 10)
    {
    Aone();
    Bzero();
    }
  if(tempx == 11)
    {
    Aone();
    Bone();
    }
  if(tempx == 12)
    {
    Aone();
    Btwo();
    }
  if(tempx == 13)
    {
    Aone();
    Bthree();
    }
  if(tempx == 14)
    {
    Aone();
    Bfour();
    }
  if(tempx == 15)
    {
    Aone();
    Bfive();
    }
  if(tempx == 16)
    {
    Aone();
    Bsix();
    }
  if(tempx == 17)
    {
    Aone();
    Bseven();
    }
  if(tempx == 18)
    {
    Aone();
    Beight();
    }
  if(tempx == 19)
    {
    Aone();
    Bnine();
    }
  if(tempx == 20)
    {
    Atwo();
    Bzero();
    }
  if(tempx == 21)
    {
    Atwo();
    Bone();
    }
  if(tempx == 22)
    {
    Atwo();
    Btwo();
    }
  if(tempx == 23)
    {
    Atwo();
    Bthree();
    }
  if(tempx == 24)
    {
    Atwo();
    Bfour();
    }
  if(tempx == 25)
    {
    Atwo();
    Bfive();
    }
  if(tempx == 26)
    {
    Atwo();
    Bsix();
    }
  if(tempx == 27)
    {
    Atwo();
    Bseven();
    }
  if(tempx == 28)
    {
    Atwo();
    Beight();
    }
  if(tempx == 29)
    {
    Atwo();
    Bnine();
    }
  if(tempx == 30)
    {
    Athree();
    Bzero();
    }
  if(tempx == 31)
    {
    Athree();
    Bone();
    }
  if(tempx == 32)
    {
    Athree();
    Btwo();
    }
  if(tempx == 33)
    {
    Athree();
    Bthree();
    }
  if(tempx == 34)
    {
    Athree();
    Bfour();
    }
  if(tempx == 35)
    {
    Athree();
    Bfive();
    }
  if(tempx == 36)
    {
    Athree();
    Bsix();
    }
  if(tempx == 37)
    {
    Athree();
    Bseven();
    }
  if(tempx == 38)
    {
    Athree();
    Beight();
    }
  if(tempx == 39)
    {
    Athree();
    Bnine();
    }
  if(tempx == 40)
    {
    Afour();
    Bzero();
    }
  if(tempx == 41)
    {
    Afour();
    Bone();
    }
  if(tempx == 42)
    {
    Afour();
    Btwo();
    }
  if(tempx == 43)
    {
    Afour();
    Bthree();
    }
  if(tempx == 44)
    {
    Afour();
    Bfour();
    }
  if(tempx == 45)
    {
    Afour();
    Bfive();
    }
  if(tempx == 46)
    {
    Afour();
    Bsix();
    }
  if(tempx == 47)
    {
    Afour();
    Bseven();
    }
  if(tempx == 48)
    {
    Afour();
    Beight();
    }
  if(tempx == 49)
    {
    Afour();
    Bnine();
    }
  if(tempx == 50)
    {
    Afive();
    Bzero();
  }
  if(tempx == 51)
    {
    Afive();
    Bone();
    }
  if(tempx == 52)
    {
    Afive();
    Btwo();
    }
  if(tempx == 53)
    {
    Afive();
    Bthree();
    }
  if(tempx == 54)
    {
    Afive();
    Bfour();
    }
  if(tempx == 55)
    {
    Afive();
    Bfive();
    }
  if(tempx == 56)
    {
    Afive();
    Bsix();
    }
  if(tempx == 57)
    {
    Afive();
    Bseven();
    }
  if(tempx == 58)
    {
    Afive();
    Beight();
    }
  if(tempx == 59)
    {
    Afive();
    Bnine();
    }
  if(tempx == 60)
    {
    Asix();
    Bzero();
  }
  if(tempx == 61)
    {
    Asix();
    Bone();
    }
  if(tempx == 62)
    {
    Asix();
    Btwo();
    }
  if(tempx == 63)
    {
    Asix();
    Bthree();
    }
  if(tempx == 64)
    {
    Asix();
    Bfour();
    }
  if(tempx == 65)
    {
    Asix();
    Bfive();
    }
  if(tempx == 66)
    {
    Asix();
    Bsix();
    }
  if(tempx == 67)
    {
    Asix();
    Bseven();
    }
  if(tempx == 68)
    {
    Asix();
    Beight();
    }
  if(tempx == 69)
    {
    Asix();
    Bnine();
    }
  if(tempx == 70)
    {
    Aseven();
    Bzero();
  }
  if(tempx == 71)
    {
    Aseven();
    Bone();
    }
  if(tempx == 72)
    {
    Aseven();
    Btwo();
    }
  if(tempx == 73)
    {
    Aseven();
    Bthree();
    }
  if(tempx == 74)
    {
    Aseven();
    Bfour();
    }
  if(tempx == 75)
    {
    Aseven();
    Bfive();
    }
  if(tempx == 76)
    {
    Aseven();
    Bsix();
    }
  if(tempx == 77)
    {
    Aseven();
    Bseven();
    }
  if(tempx == 78)
    {
    Aseven();
    Beight();
    }
  if(tempx == 79)
    {
    Aseven();
    Bnine();
    }
  if(tempx == 80)
    {
    Aeight();
    Bzero();
  }
  if(tempx == 81)
    {
    Aeight();
    Bone();
    }
  if(tempx == 82)
    {
    Aeight();
    Btwo();
    }
  if(tempx == 83)
    {
    Aeight();
    Bthree();
    }
  if(tempx == 84)
    {
    Aeight();
    Bfour();
    }
  if(tempx == 85)
    {
    Aeight();
    Bfive();
    }
  if(tempx == 86)
    {
    Aeight();
    Bsix();
    }
  if(tempx == 87)
    {
    Aeight();
    Bseven();
    }
  if(tempx == 88)
    {
    Aeight();
    Beight();
    }
  if(tempx == 89)
    {
    Aeight();
    Bnine();
    }
  if(tempx == 90)
    {
    Anine();
    Bzero();
  }
  if(tempx == 91)
    {
    Anine();
    Bone();
    }
  if(tempx == 92)
    {
    Anine();
    Btwo();
    }
  if(tempx == 93)
    {
    Anine();
    Bthree();
    }
  if(tempx == 94)
    {
    Anine();
    Bfour();
    }
  if(tempx == 95)
    {
    Anine();
    Bfive();
    }
  if(tempx == 96)
    {
    Anine();
    Bsix();
    }
  if(tempx == 97)
    {
    Anine();
    Bseven();
    }
  if(tempx == 98)
    {
    Anine();
    Beight();
    }
  if(tempx == 99)
    {
    Anine();
    Bnine();
    }
  } 

                       //To display first digit on seven display segment display.

void Azero()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 
 digitalWrite(5, LOW);
  
}

void Aone()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 
}

void Atwo()
{
 digitalWrite(2, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(8, HIGH);
 
 digitalWrite(3, LOW);
 digitalWrite(7, LOW);
 }

void Athree()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
}

void Afour()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(7, HIGH);
 
 digitalWrite(4,LOW);
 digitalWrite(6,LOW);
 digitalWrite(8,LOW);
}

void Afive()
{
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);

 digitalWrite(2,LOW);
 digitalWrite(8,LOW);
}

void Asix()
{
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);

 digitalWrite(2,LOW);
}

void Aseven()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);

 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
}

void Aeight()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
}

void Anine()
{
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);

 digitalWrite(8, LOW);
}


                        //To display second digit on seven display segment display.

void Bzero()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A4, HIGH);
 digitalWrite(A5, HIGH);

 digitalWrite(12, LOW);
}

void Bone()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);

 digitalWrite(11, LOW);
 digitalWrite(12, LOW);
 digitalWrite(13, LOW);
 digitalWrite(A4, LOW);
 digitalWrite(A5, LOW);
}

void Btwo()
{
 digitalWrite(9, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A5, HIGH);

 digitalWrite(10, LOW);
 digitalWrite(A4, LOW);
}

void Bthree()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);

 digitalWrite(A4, LOW);
 digitalWrite(A5, LOW);
}

void Bfour()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(A4, HIGH);

 digitalWrite(11, LOW);
 digitalWrite(13, LOW);
 digitalWrite(A5, LOW);
}
 
void Bfive()
{
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A4, HIGH);

 digitalWrite(9, LOW);
 digitalWrite(A5, LOW);
 
}

void Bsix()
{
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A4, HIGH);
 digitalWrite(A5, HIGH);
  
 digitalWrite(9, LOW);
}

void Bseven()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);

 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 digitalWrite(A4,LOW);
 digitalWrite(A5,LOW);
}

void Beight()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A4, HIGH);
 digitalWrite(A5, HIGH);
}

void Bnine()
{
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(13, HIGH);
 digitalWrite(A4, HIGH);
 digitalWrite(A5, HIGH);

 digitalWrite(12,LOW);
}


