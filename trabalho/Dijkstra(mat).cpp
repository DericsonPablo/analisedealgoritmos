#include<stdio.h>

#include<limits.h>


using namespace std;

int grafo[10][10];
int visitado[10];              //vetor de visitados
int dist[10];                  //para guardar a distancia de todos os vertices ao escolhido


void Dijkstra(int vertice);     //para  calcular o custo minimo


int main(){
int aux1,aux2,peso;


for(int i = 0; i<6; i++)
    dist[i] = INT_MAX;          //como inicialmente não sabemos a distancia, começamos alto, com o maior valor que cabe num inteiro

dist[0] = 0;                    //vou fazer a SPT apartir do vertice 0; a distancia dele a ele mesmo é 0


//um grafo previamente escolhido
for(int i = 0; i<7; i++){
    scanf("%d %d %d", &aux1,&aux2, &peso);     //leio o vertice de origem,o vertice destino e o peso da aresta
    grafo[aux1][aux2] = peso;                  //e coloco na matriz
}
Dijkstra(0);


for(int i = 0; i<6; i++){
    printf("%d ", dist[i]);
}

}


void Dijkstra(int vertice){
int key = 6; //para indicar se ainda há vertices não visitado
int menor = INT_MAX;
int pos_m;  //posição do menor


while(key){     //ejquanto houver vertices a serem visitados

        for(int i = 0; i<6; i++){

            if(!visitado[i] && dist[i] < menor){         //escolho o vertice que possui a melhor estimativa no momento
                menor = dist[i];
                pos_m = i;
            }
        }

        visitado[pos_m] = 1;            //o marco como visitado
        key--;                          //incremento, pois um vertice ja foi visitado
        menor = INT_MAX;                //para as proximas comparações

//ETAPA DE RELAXAMENTO DAS ARESTAS
for(int i = 0; i<6; i++){


    if(!visitado[i] && grafo[pos_m][i]){  //procuro os vertices ainda não visitados e adjacentes ao vertice da vez
        printf("%d key = %d\n", pos_m, key);

        if(dist[pos_m]+grafo[pos_m][i] < dist[i]){


            dist[i] = dist[pos_m]+grafo[pos_m][i];


        }



    }



}
}
}
