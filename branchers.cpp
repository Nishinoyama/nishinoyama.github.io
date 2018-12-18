#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int printarrcounter = 1;
void printarr( int* data ){
    printf ("#%d print data... \n", printarrcounter++);
    for( int i = 0; i < SIZE; i++){
        printf ("%d ", *(data + i));
    }
    printf("\n");
}

void bubblesort( int* data ){
    //�o�u���\�[�g�̃e�X�g ����
    int tmp;
    for (int sorted = 0; sorted < SIZE; sorted++){
        //sorted�܂Ń\�[�g
        for (int hit = SIZE-1; hit > 0 ; hit--){ //hit���獶�ɍ~��Ă���
            if( data[hit-1] > data[hit] ){ //��ɍ��킹��
                //�X���b�v�I
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
        data[i] = leng-i;//�~���ɐ��l�𓊉�
    }

    printarr(data);

    //���Ԍv���J�n�i��s�P�� )
    StartTiming = clock();

    bubblesort(data);

    //���Ԍv���I���i��s�P�� )
    EndTiming = clock();

    printarr(data);

    //���Ԍv������
    printf ("%d.%03dms\n", (int)((EndTiming-StartTiming)/1000), (int)((EndTiming-StartTiming)%1000));

    int64_t a;
    printf("%d\n", a);

    return 0;
}

