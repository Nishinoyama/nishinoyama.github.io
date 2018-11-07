#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

int printarrcounter = 1;
void printarr( int* data ){
    printf ("#%d print data... \n", printarrcounter++);
    for( int i = 0; i < SIZE; i++){
        printf ("%d ", *(data + i));
    }
    printf("\n");
}

void bubblesort( int* data ){
    //バブルソートのテスト 昇順
    int tmp;
    for (int sorted = 0; sorted < SIZE; sorted++){
        //sortedまでソート
        for (int hit = SIZE-1; hit > 0 ; hit--){ //hitから左に降りていく
            if( data[hit-1] > data[hit] ){ //条件に合わせる
                //スワップ！
                tmp = data[hit-1];
                data[hit-1] = data[hit];
                data[hit] = tmp;
            }
        }
    }
}

clock_t StartTiming, EndTiming;

int main() {

    int leng = SIZE;

    int data[SIZE] = {};

    for( int i = 0; i < leng; i++){
        data[i] = leng-i;//降順に数値を投下
    }

    printarr(data);

    //時間計測開始（μs単位 )
    StartTiming = clock();

    bubblesort(data);

    //時間計測終了（μs単位 )
    EndTiming = clock();

    printarr(data);

    //時間計測結果
    printf ("%d.%03dms\n", (int)((EndTiming-StartTiming)/1000), (int)((EndTiming-StartTiming)%1000));

    return 0;
}

