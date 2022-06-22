#include <stdio.h>
main(){
    
    
    int num1,num2;
    num1=3;
    num2=2;
    printf("Adição = %d\n",adicao(num1,num2));
    printf("Subtração = %d\n",subtracao(num1,num2));
    printf("Multiplicação = %d\n",multipilacacao(num1,num2));
    printf("Divisão = %d\n",divisao(num1,num2));
}
    adicao(int num1,int num2){
        int res;
        res = num1+num2;
        return res;
    }
    subtracao(int num1,int num2){
        int res;
        res =  num1-num2;
        return res;
    }
    multipilacacao(int num1,int num2){
        int res;
        res = num1*num2;
        return res;
    }
    divisao(int num1, int num2){
        int res;
        res = num1/num2;
        return res;
    }