//
// Created by antonio on 17-11-29.
//

#ifndef ADJMGRAPH_SEQLIST_H
#define ADJMGRAPH_SEQLIST_H
#include <stdio.h>
#define MaxSize 50

typedef int DataType ;

//静态指针：伪指针
typedef struct {
    DataType list[MaxSize] ;
    int size ;
}SeqList;

void ListInitiate(SeqList *L){
    L->size = 0 ;

}

int ListLength(SeqList L){
    return L.size ;

}

int ListInsert(SeqList *L, int i, DataType x){
    if (i >= MaxSize || i < 0){
        printf("插入失敗,參數有誤\n") ;
    }
    else{
        for (int j = L->size; j > i; j--) {
            L->list[j] = L->list[j - 1] ;
        }

        L->list[i] = x ;
        L->size ++ ;

    }
    return 1 ;
}

int ListGet(SeqList *L, int i, DataType *x){
    if (i >= L->size || i < 0){
        printf("取出失敗,參數有誤\n") ;
    }

    *x = L->list[i] ;
    return 1 ;
}

int ListDelete(SeqList *L, int i, DataType *x){
    if (i >= L->size || i < 0){
        printf("刪除失敗,參數有誤\n") ;
    }
//
//    int j = -1 ;
    *x = L->list[i] ;

    for (int j = i + 1; j <= L->size - 1; j++) L->list[j - 1] = L->list[j] ;

    L->size -- ;


    return 1 ;
}

void ListPrint(SeqList *L){
    int length = ListLength(*L) ;

    for (int i = 0; i < length; ++i) {
        printf(" %4d", L->list[i]) ;
    }

    printf("\n") ;

}
#endif //ADJMGRAPH_SEQLIST_H
