#include<iostream>
#include<algorithm>
class Fraction {
private:
    int numerator, denominator;
    
public:
    Fraction() {
        this->numerator = 0;
        this->denominator = 0;
    }
    
    Fraction(int numerator, int denominator) {
         this->numerator=numerator;
         this->denominator=denominator;
         
    }
   
    Fraction(const Fraction& other) {
        this->other.numerator;
        this->other.denominator;
    }
     int getNumerator(){
        return this->numerator;
    }
    void setNumerator{
        this->numerator=numerator;
    }
    int getDenominator(){
        return this->denominator;
    }
    void setDenominator(){
        this->denominator=denominator;
    Fraction getReciprocal(){
        int gcd = std::__gcd(this->numerator,this->denominator);
        int num = this->denominator / rgcd;
        int den = this->numerator / rgcd;
        
        return Fraction(num,den);
    }
    Fraction operator+ (const Fraction& rhs){
        int den = this->denominator * rhs.denominator;
        int num = this->numerator * rhs.denominator * this->denominator*rhs.denominator;
        int rgcd = __gcd(num,den);
        num = den/ rgcd;
        den = num/ rgcd;
        return Fraction(den,num);
    }
    void print() { 
        cout << this->numerator << "/" << this->denominator << endl; 
    }
};
int main ()
{
    Fraction a(13,2);
    Fraction b(4,6);
    Fraction c = a + b;
    c.print();

}