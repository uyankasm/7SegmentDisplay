
  //1. DÝSPLAY
int E= 2;
int D= 3;
int C= 4;
int P= 5;
int B= 6;
int A= 7;
int F= 8;
int G= 9;
 //2. DÝSPLAY
int EE= A2;
int DD= A3;
int CC= A4;
int PP= A5;
int BB= 11;
int AA= 10;
int FF= 12;
int GG= 13; 

void setup(){ 
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
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  Serial.begin(9600);
}

void loop(){
////////////////////////////////////////////////////////////////////////////
//ÝLK VE SON RAKAMI GÝRÝYORUZ
    int dec=12;//ÝLK ÝKÝ RAKAM(DECIMAL) 
    int dec1=18;//SON ÝKÝ RAKAM(DECÄ°MAL)
  //ÝLK ÝKÝ RAKAMI ÇEVÝRÝYOR
    char hex[100]; 
    int i=0; 
    while(dec!=0){     
       int temp=0;           
       temp = dec % 16;  
       if(temp < 10){ 
       hex[i] = temp + 48; 
       i++; 
        } 
        else{ 
        hex[i] = temp + 55; 
        i++; 
        }          
        dec = dec/16; 
    } 
  //SON ÝKÝ RAKAMI ÇEVÝRÝYOR
    char hex1[100]; 
    int z = 0; 
    while(dec1!=0){     
        int temp1  = 0; 
        temp1 = dec1 % 16;  
        if(temp1 < 10){ 
        hex1[z] = temp1 + 48; 
        z++; 
        } 
        else{ 
        hex1[z] = temp1 + 55; 
        z++; 
        }          
        dec1 = dec1/16; 
    }
////////////////////////////////////////////////////////////////////////////
    //ÝLK ÝKÝ RAKAM
    //1.RAKAM 1. DÝSPLAY
  switch(hex[1]){
    case '1':
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
  break;
    case '2':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    break;
    case '3':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(G,HIGH);
    break;
    case '4':
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '5':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    break;
    case '6':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '7':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '8':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
    case '9':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    break;
    case 'A':
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(C,HIGH);
    break;
    case 'B':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
    case 'C':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    break;
    case 'D':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;    
    case 'E':
    digitalWrite(A,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);;
    digitalWrite(F,HIGH);
    break;
    case 'F':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(G,HIGH);
    break;
    default:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
  }
    //2.RAKAM 2. DISPLAY
  switch(hex[0]){
    case '1':
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    
  break;
    case '2':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(CC,LOW);
    digitalWrite(DD,HIGH);
    digitalWrite(FF,LOW);
    break;
    case '3':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(GG,HIGH);
    break;
    case '4':
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '5':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(DD,HIGH);
    break;
    case '6':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '7':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '8':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
    case '9':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    
    break;
    case 'A':
    digitalWrite(EE,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(DD,LOW);
    break;
    case 'B':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
    case 'C':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    break;
    case 'D':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;    
    case 'E':
    digitalWrite(AA,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);;
    digitalWrite(FF,HIGH);
    break;
    case 'F':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(GG,HIGH);
    break;
    default://SIFIR RAKAMI YANAR
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
  }
    delay(1000);
    
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(G,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(F,LOW);
    digitalWrite(AA,LOW);
    digitalWrite(BB,LOW);
    digitalWrite(EE,LOW);
    digitalWrite(DD,LOW);
    digitalWrite(CC,LOW);
    digitalWrite(GG,LOW);
    digitalWrite(FF,LOW);
  delay(300);
 
    //SON ÝKÝ RAKAM
    //1.RAKAM 1. DISPLAY
  switch(hex1[1]){
    case '1':
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
  break;
    case '2':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    break;
    case '3':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(G,HIGH);
    break;
    case '4':
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '5':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    break;
    case '6':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '7':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    break;
    case '8':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
    case '9':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    break;
    case 'A':
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(C,HIGH);
    break;
    case 'B':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
    case 'C':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    break;
    case 'D':
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;    
    case 'E':
    digitalWrite(A,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);;
    digitalWrite(F,HIGH);
    break;
    case 'F':
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(G,HIGH);
    break;
    default:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(F,HIGH);
    break;
  }
  //2. RAKAM 2. DISPLAY
  switch(hex1[0]){
    case '1':
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
  break;
    case '2':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    break;
    case '3':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(EE,LOW);
    digitalWrite(FF,LOW);
    digitalWrite(GG,HIGH);
    
    break;
    case '4':
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '5':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(DD,HIGH);
    break;
    case '6':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '7':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case '8':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
    case '9':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case 'A':
    digitalWrite(EE,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(CC,HIGH);
    break;
    case 'B':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
    case 'C':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    break;
    case 'D':
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;    
    case 'E':
    digitalWrite(AA,HIGH);
    digitalWrite(GG,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);;
    digitalWrite(FF,HIGH);
    break;
    case 'F':
    digitalWrite(AA,HIGH);
    digitalWrite(FF,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(GG,HIGH);
    break;
    default:
    digitalWrite(AA,HIGH);
    digitalWrite(BB,HIGH);
    digitalWrite(EE,HIGH);
    digitalWrite(DD,HIGH);
    digitalWrite(CC,HIGH);
    digitalWrite(FF,HIGH);
    break;
  }
  delay(500);
    
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(G,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(F,LOW);
    digitalWrite(AA,LOW);
    digitalWrite(BB,LOW);
    digitalWrite(EE,LOW);
    digitalWrite(DD,LOW);
    digitalWrite(CC,LOW);
    digitalWrite(GG,LOW);
    digitalWrite(FF,LOW);
  delay(300);
  }
  
