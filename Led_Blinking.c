void main() {
     TRISB = 0x00;
     while(1) {
         PORTB.B0 = 0xff;
         Delay_ms(100);
         PORTB.B0 = 0x00;
         Delay_ms(100);
     }
}