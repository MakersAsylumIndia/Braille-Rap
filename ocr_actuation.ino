#include <Servo.h>

// define servo positions
int s1 = 22.5;
int s2 = 67.5;
int s3 = 112.5;
int s4 = 157.5;

// declare servo objects
Servo myservo1;
Servo myservo2;
Servo myservo3;

void setup() {
  Serial.begin(115200);
  Serial.println("Nano ready to echo...");
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(9);
}

void loop() 
{
  if (Serial.available()) {
    String received = Serial.readStringUntil('\n');
    received.trim(); // remove whitespace / newlines

    // echo back
    Serial.print("Echo: ");
    Serial.println(received);

    // for each character in the received string, handle servo action
    for (unsigned int i = 0; i < received.length(); i++) {
      char input = received.charAt(i);
      handleCharacter(input);
    }
  }
}

// map characters to functions
void handleCharacter(char input)
{
  switch (input)
  {
    case 'a': a(); break;
    case 'b': b(); break;
    case 'c': c(); break;
    case 'd': d(); break;
    case 'A': A(); break;
    case 'B': B(); break;
    case 'C': C(); break;
    case 'D': D(); break;
    case 'E': E(); break;
    case 'F': MoveF(); break;
    case 'G': G(); break;
    case 'H': H(); break;
    case 'I': I(); break;
    case 'J': J(); break;
    case 'K': K(); break;
    case 'L': L(); break;
    case 'M': M(); break;
    case 'N': N(); break;
    case 'O': O(); break;
    case 'P': P(); break;
    case 'Q': Q(); break;
    case 'R': R(); break;
    case 'S': S(); break;
    case 'T': T(); break;
    case 'U': U(); break;
    case 'V': V(); break;
    case 'W': W(); break;
    case 'X': X(); break;
    case 'Y': Y(); break;
    case 'Z': Z(); break;
  }
}

// letter positions
void a() { myservo1.write(s1); myservo2.write(s1); myservo3.write(s1); }
void b() { myservo1.write(s2); myservo2.write(s2); myservo3.write(s2); }
void c() { myservo1.write(s3); myservo2.write(s3); myservo3.write(s3); }
void d() { myservo1.write(s4); myservo2.write(s4); myservo3.write(s4); }
void A() { myservo1.write(s2); myservo2.write(s1); myservo3.write(s1); }
void B() { myservo1.write(s2); myservo2.write(s2); myservo3.write(s1); }
void C() { myservo1.write(s3); myservo2.write(s1); myservo3.write(s1); }
void D() { myservo1.write(s3); myservo2.write(s4); myservo3.write(s1); }
void E() { myservo1.write(s2); myservo2.write(s4); myservo3.write(s1); }
void MoveF() { myservo1.write(s3); myservo2.write(s2); myservo3.write(s1); }
void G() { myservo1.write(s3); myservo2.write(s3); myservo3.write(s1); }
void H() { myservo1.write(s2); myservo2.write(s3); myservo3.write(s1); }
void I() { myservo1.write(s4); myservo2.write(s2); myservo3.write(s1); }
void J() { myservo1.write(s4); myservo2.write(s3); myservo3.write(s1); }
void K() { myservo1.write(s2); myservo2.write(s1); myservo3.write(s2); }
void L() { myservo1.write(s2); myservo2.write(s2); myservo3.write(s2); }
void M() { myservo1.write(s3); myservo2.write(s1); myservo3.write(s2); }
void N() { myservo1.write(s3); myservo2.write(s4); myservo3.write(s2); }
void O() { myservo1.write(s2); myservo2.write(s3); myservo3.write(s2); }
void P() { myservo1.write(s3); myservo2.write(s2); myservo3.write(s2); }
void Q() { myservo1.write(s3); myservo2.write(s3); myservo3.write(s2); }
void R() { myservo1.write(s2); myservo2.write(s3); myservo3.write(s2); }
void S() { myservo1.write(s4); myservo2.write(s2); myservo3.write(s2); }
void T() { myservo1.write(s4); myservo2.write(s3); myservo3.write(s2); }
void U() { myservo1.write(s2); myservo2.write(s1); myservo3.write(s3); }
void V() { myservo1.write(s2); myservo2.write(s2); myservo3.write(s3); }
void W() { myservo1.write(s4); myservo2.write(s3); myservo3.write(s4); }
void X() { myservo1.write(s3); myservo2.write(s1); myservo3.write(s3); }
void Y() { myservo1.write(s3); myservo2.write(s2); myservo3.write(s3); }
void Z() { myservo1.write(s2); myservo2.write(s4); myservo3.write(s3); }
