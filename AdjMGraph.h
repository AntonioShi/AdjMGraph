//
// Created by antonio on 17-11-29.
//

#ifndef ADJMGRAPH_ADJMGRAPH_H
#define ADJMGRAPH_ADJMGRAPH_H

#include "SeqList.h"
#define MaxVertices 50
#define MaxWeight 10000

typedef struct {
    SeqList Vertices ;
    int edge[MaxVertices][MaxVertices] ;
    int numOfEdges ;
}AdjMGraph;


void Initiate(AdjMGraph *G, int n) ;

void InsertVertex(AdjMGraph *G, DataType vertex) ;

void InsertEdge(AdjMGraph *G, int v1, int v2, int weight) ;


#endif //ADJMGRAPH_ADJMGRAPH_H
