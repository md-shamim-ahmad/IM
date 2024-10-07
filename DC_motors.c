void main() {
     TrisB = 0x00;
     TrisD = 0xff;
     portb = 0x00;
     while(1){
              portb.f0 = 0xff;
              portb.f1 = 0x00;
     }
}