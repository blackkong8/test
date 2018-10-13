#include <stdio.h>

int CheackSmallCapital(char input){
    if( 'a' <= input && input <= 'z'){
        return 1;
    }else{
        return 0;
    }
}

char SmallToBig(char input){
    char output = input - 32;
    return output;
}

void LetterCapitalizer(char input[]){
    
    if(CheackSmallCapital(input[0])){
        input[0] = SmallToBig(input[0]);
    }
    
    int i = 1;
    
    while(input[i]!='\0'){
        if(input[i-1]==' '){
            if(CheackSmallCapital(input[i])){
                input[i] = SmallToBig(input[i]);
            }
        }
        i++;
    }
    
    printf("%s\n",input);
    
}

int main(){
    char input[]={"i am a boy"};
    LetterCapitalizer(input);
    return 0;
}
