#include<bits/stdc++.h>
using namespace std;
typedef long long unsigned int ll;

// definition {{{ 1

// scaning {{{ 2
#define Scd(x) scanf("%d", &x)
#define Scd2(x,y) scanf("%d%d", &x, &y)
#define Scd3(x,y,z) scanf("%d%d%d", &x, &y, &z)

#define Scll(x) scanf("%llu", &x)
#define Scll2(x,y) scanf("%llu%llu", &x, &y)
#define Scll3(x,y,z) scanf("%llu%llu%llu", &x, &y, &z)

#define Scc(c) scanf("%c", &c);
#define Scs(s) scanf("%s", s);
#define Scstr(s) scanf("%s", &s);
// }}} 2

// constants {{{ 2
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
// }}} 2

// systems {{{ 2
#define Rep(x,y) for(int x = 0; x < y; x++)
#define Repe(x,y,z) for(int x = z; x < y; x++)
// }}} 2

// output {{{ 2
#define YesNo(a) (a)?printf("Yes\n"):printf("No\n");
// }}} 2

// }}} 1


#define SIZE 100000

int printarrcounter = 1;
void printarr( int* data ){
    printf ("#%d print data... \n", printarrcounter++);
    Rep(i,SIZE){
        printf ("%d ", *(data + i));
    }
    printf("\n");
}

void bubblesort( int* data ){
    //バブルソートのテスト 昇順
    for (int sorted = 0; sorted < leng; sorted++){
        //sortedまでソート
        for (int hit = leng-1; hit > 0 ; hit--){ //hitから左に降りていく
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
    int tmp = 0;

    Rep(i,leng){
        data[i] = i;
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

