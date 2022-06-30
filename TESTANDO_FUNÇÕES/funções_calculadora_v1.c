#include <stdio.h>
int adicao();
int subtracao();
int multiplicacao();
int divisao();

main(){
        
    int num1,num2;
    num1=3;
    num2=2;
    printf("Adição = %d\n",adicao(num1,num2));
    printf("Subtração = %d\n",subtracao(num1,num2));
    printf("Multiplicação = %d\n",multipilacacao(num1,num2));
    printf("Divisão = %d\n",divisao(num1,num2));
}
    int adicao(int num1,int num2){
        int res;
        res = num1+num2;
        return res;
    }
    int subtracao(int num1,int num2){
        int res;
        res =  num1-num2;
        return res;
    }
    int multipilacacao(int num1,int num2){
        int res;
        res = num1*num2;
        return res;
    }
    int divisao(int num1, int num2){
        int res;
        res = num1/num2;
        return res;
    }