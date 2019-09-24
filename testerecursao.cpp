#include <iostream>

using namespace std;

int somatorio(int soma){

    if(soma==0){
        return 0;
    }else{
        soma += somatorio(soma-1);
    }

    return soma;
}

int main(){

    cout << somatorio(7);

}
