//
// Created by antonio on 17-11-29.
//

#include <cstdlib>
#include "AdjMGraph.h"
#include "SeqList.h"

void Initiate(AdjMGraph *G, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                G->edge[i][j] = 0 ;
            else
                G->edge[i][j] = MaxWeight ;//MaxWeight视为无穷大
        }
    }
    G->numOfEdges = 0 ;//边的条数0
    //Node**初始化顺序表
    ListInitiate(&G->Vertices) ;
}

void InsertVertex(AdjMGraph *G, DataType vertex){
    //在图中增加一个顶点
    ListInsert(&G->Vertices, G->Vertices.size, vertex);
}

void InsertEdge(AdjMGraph *G, int v1, int v2, int weight){
    //在图中增加一条有向边，对于增加一条无向边可通过增加两条有向边完成
    if(v1 < 0 || v1 > G->Vertices.size || v2 < 0 || v2 > G->Vertices.size) {
        printf("参数v1或v2越界出错!\n");
        exit(1);
    }
    G->edge[v1][v2] = weight;
    G->numOfEdges++;
}


