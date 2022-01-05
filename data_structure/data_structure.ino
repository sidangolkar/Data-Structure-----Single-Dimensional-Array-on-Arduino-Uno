int ledArray[]={2,3,4,5,6,7,8,9};
int no_of_elements=sizeof(ledArray)/sizeof(ledArray[0]);
int val=0;
int inpin=10;
int t=0;
void setup()
{
  Serial.begin(9600);
  pinMode(inpin,INPUT);
  for(int i;i<=no_of_elements;i++)
  {
    pinMode(ledArray[i],OUTPUT);
  }
}

void loop()
{
  val = digitalRead(inpin);
  if(val==LOW)
  {
    t++;
    delay(100);
    Serial.print(t);
  }
  if(t==1)
  {
      pattern1();
  }
  delay(500);
  if(t==2)
  {
  pattern2();
  }
  delay(500);
  if(t==3)
  {
    pattern3();
  }
  if(t==4)
  {
    pattern4();
  }
  if(t==5)
  {
    pattern5();
  }
  if(t==6)
  {
    pattern6();
  }
  if(t==7)
  {
    t=1;
  }
}
void pattern1()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(100);
    digitalWrite(ledArray[i],LOW);
    delay(100);
  }
  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(100);
    digitalWrite(ledArray[i],LOW);
    delay(100);
  }
}
void pattern2()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(50);
  }
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],LOW);
    delay(50);
  }

  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(50);
  }
  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],LOW);
    delay(50);
  }
}
void pattern3()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    if(i%2==0)
      digitalWrite(ledArray[i],HIGH);
      delay(300);
      digitalWrite(ledArray[i],LOW);
  }
}
void pattern4()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    if(i%2==1)
      digitalWrite(ledArray[i],HIGH);
      delay(300);
      digitalWrite(ledArray[i],LOW);
  }
}

void pattern5()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(10);
  }
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],LOW);
    delay(10);
  }

  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(10);
  }
  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],LOW);
    delay(10);
  }  
}
void pattern6()
{
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],LOW);
    delay(40);
  }
  for(int i=0;i<=no_of_elements;i++)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(40);
  }

  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],HIGH);
    delay(40);
  }
  for(int i=no_of_elements;i>=0;i--)
  {
    digitalWrite(ledArray[i],LOW);
    delay(40);
  }
}
