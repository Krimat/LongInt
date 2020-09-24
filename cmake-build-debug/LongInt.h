//
// Created by arthu on 9/24/2020.
//

#ifndef LONGINT_LONGINT_H
#define LONGINT_LONGINT_H
class LongInt{
public:
    LongInt(int number_length):m_digits{new(int[number_length])},m_number_length{number_length}{

    }
    LongInt(LongInt &first_numb,LongInt &second_numb){}
    friend LongInt operator+(LongInt &l_value,LongInt &r_value);
private:
    void setToZero(){
        for (int i = 0;i<m_number_length;i++){
            m_digits[i] = 0;
        }
    }
    int* m_digits;
    int m_number_length;
};

LongInt operator+ (LongInt &l_value,LongInt &r_value){

}



#endif //LONGINT_LONGINT_H
