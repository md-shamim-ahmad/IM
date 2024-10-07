sbit LCD_RS at RC2_bit;
sbit LCD_EN at RC3_bit;
sbit LCD_D4 at RC4_bit;
sbit LCD_D5 at RC5_bit;
sbit LCD_D6 at RC6_bit;
sbit LCD_D7 at RC7_bit;
sbit LCD_RS_Direction at TRISC2_bit;
sbit LCD_EN_Direction at TRISC3_bit;
sbit LCD_D4_Direction at TRISC4_bit;
sbit LCD_D5_Direction at TRISC5_bit;
sbit LCD_D6_Direction at TRISC5_bit;
sbit LCD_D7_Direction at TRISC7_bit;
char display[16]="";
void main() {
    int result;
    float volt,temp;
    trisc=0x00;
    trisa=0xff;
    adcon1=0x80;
    lcd_init();
    lcd_cmd(_lcd_clear);
    lcd_cmd(_LCD_CURSOR_OFF);
    while(1) {
        result=adc_read(0);
        volt=result*4.88;
        temp=volt/10;
        lcd_out(1,1,"Temp = ");
        floattostr(temp,display);
        lcd_out_cp(display);
        lcd_chr(1,16,223);
        lcd_out_cp("  C");
    }
}