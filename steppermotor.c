void main() {
    TRISC = 0b0000000;
    PORTC = 0b1111111;
    while(1) {
        PORTC = 0b00000011;
        Delay_ms(500);
        PORTC = 0b00000110;
        Delay_ms(500);
        PORTC = 0b00001100;
        Delay_ms(500);
        PORTC = 0b00001001;
        Delay_ms(500);
    }
}