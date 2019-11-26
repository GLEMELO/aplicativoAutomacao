#include<stdio.h>
#include<stdlib.h>
#include "grafo.h"

//cria o grafo para o teste
int main(){
	int eh_digrafo = 0;
	Grafp* gr=cria_Grafo(6, 6, 1);
	insereAresta(gr, 0, 1  eh_digrafo, 6);
	insereAresta(gr, 0, 2  eh_digrafo, 6);
	insereAresta(gr, 0, 3  eh_digrafo, 6);
	insereAresta(gr, 1, 2  eh_digrafo, 6);
	insereAresta(gr, 1, 4  eh_digrafo, 6);
	insereAresta(gr, 2, 3  eh_digrafo, 6);
	insereAresta(gr, 2, 4  eh_digrafo, 6);
	insereAresta(gr, 2, 5  eh_digrafo, 6);
	insereAresta(gr, 3, 5  eh_digrafo, 6);
	insereAresta(gr, 4, 5  eh_digrafo, 6);
	
	int i, par[6];
	
	arvoreGeradoraMinimaPRIM_Grafo(gr, 0, pai);
	libera_Grafo(gr);
	return 0;
	
	-}
	
	void algPRIM(GRAfo *gr, int orig, int *pai){
		int i, j, dest, primeiro,NV = gr->nro_vertices;
		double menorPeso;
		for(i=0; i< NV; i++)
		pai[i]= -1;
		pai[orig]=orig;
		while(1){
			primeiro =1;
			
			for(i=0; i<NV; i++){
				if(pai[i] != -1){
					for(j=0; j<gr ->grau[i]; j++){
					}
				}
			}
			
			if(primeiro ==1){
				break;
				
				pai[dest] = orig;
			}
			if(pai[gr->arestas[i][j] ==-1]){
				if(primeiro){
					menorPeso = gr->pesos[i][j];
					orig=i;
					dest=gr->arestas[i][j];
					orig =i;
					dest = gr->arestas[i][j];
					primeiro =0;
				}
				else{
					if(menorPeso> gr->pesos[i][j]){
						menorPeso = gr->pesos[i][j];
						orig=i;
						dest=gr->arestas[i][j];
					}
				}
			}
			
			
		}
	}//fechar o algoritmo
	
	
	
	
}


