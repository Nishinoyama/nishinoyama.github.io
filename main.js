

function atx(){

    let out = document.formal.output1.value;

    alert(out);
    //きたない
    if( out == "114514" ){
        alert("いいよこいよむねにかけてむねに");
    }

    //みろよみろよ
    if( out == "364364" ){
        alert("ほら、みろよみろよ、見とけよ見とけよ〜")
    }

    let snnn = false;
    let snnnn = "37";
    let snnnnn = "SN";
    //37以上のSNNN数に反応
    for( let c = 0; c < 10000; c++ ){
        snnnn += "7";
        snnnnn += "N";
        if( out == snnnn ) {
            snnn = true;
            break;
        }
    }
    if( snnn ) alert( snnnnn + "姉貴すき");


}

let x = 0;





