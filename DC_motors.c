void main() {
     trisb = 0x00;
     trisd = 0x00;
     portb = 0x00;
     while(1) {
              if (portd.f0 == 0xff) {
                 Delay_ms(200);
                 portd.f0 = 0x00;
                 portb.f2 = 0xff;
              } else if(portd.f0 == 0x00){
                 Delay_ms(200);
                 portb.f2 = 0x00;
              }
              portb.f0 = 0xff;
              portb.f1 = 0x00;
     }
}
