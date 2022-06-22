#include <stdio.h>
// DECLARAÇÃO DE FUNÇÕES

int adc();
int subt();
int mult();
int div();

// CÓDIGO

int main(){
    // DECLARAÇÃO DE VARIÁVEIS
    int n1,n2,res;
    char op;

    printf("Insira um número uma operação e outro número:\n");
    scanf("%d%c%d",&n1,&op,&n2);
    
    if(op =='+'){
        res = adc(n1,n2);
        }else if (op == '-'){
            res = subt(n1,n2);
            }else if(op == '*'){
                res = mult(n1,n2);
                    }else if(op == '/'){
                    res = div(n1,n2);
                    }
                        else { 
                        printf("invalido");
                        }
    printf("%d\n",res);
        
    
    
}

// FUNÇÕES

int adc(int num1,int num2){
    return num1+num2;
}
int subt(int num1,int num2){
    return num1 - num2;
}
int mult(int num1,int num2){
    return num1 * num2;
}
int div(int num1,int num2){
    return num1 / num2;
}