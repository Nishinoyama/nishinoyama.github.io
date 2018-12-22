

let field = $(".life_field");
let Fwidth = field[0].clientWidth / 5;
let Fheight = field[0].clientHeight / 5;
$(function(){
    for( let y = 0; y < Fheight; y++ ){
        field.append("<div class=\"life_column\"></div>");
        for (let x = 0; x < Fwidth; x++ ) {
            $(".life_column").eq(y).append("<div class=\"life_block\"></div>");
        }
    }
});
let cell = new Array(1000);
for (let i = 0; i < cell.length; i++) {
    cell[i] = new Array(1000);
}
let rece = new Array(1000);
for (let i = 0; i < rece.length; i++) {
    rece[i] = new Array(1000);
}
for( let y = 1;y < Fheight; y++ ){
    for (let x = 1; x < Fwidth; x++ ) {
        cell[y][x] = Math.round( Math.random() );
    }
}

for( let y = 0;y < Fheight; y++ ){
    for (let x = 0; x < Fwidth; x++ ) {
        if( cell[y][x] === 1)
        $(".life_block").eq(y*Fheight+x).css("background", "lightgreen");
        else
        $(".life_block").eq(y*Fheight+x).css("background", "black");
    }
}
function start(){
    setInterval( function(){
        for( let y = 1; y < Fheight; y++ ){
            for (let x = 1; x < Fwidth; x++ ) {
                let tmp = cell[y-1][x-1]+
                    cell[y-1][x]+
                    cell[y-1][x+1]+
                    cell[y][x-1]+
                    cell[y][x+1]+
                    cell[y+1][x]+
                    cell[y+1][x+1]+
                    cell[y+1][x-1];
                if( cell[y][x] === 0 ){
                    if( tmp === 3 ) rece[y][x] = 1;
                    else rece[y][x] = 0;
                }else{
                    if( tmp === 2 || tmp === 3 ) rece[y][x] = 1
                    else rece[y][x] = 0;
                }
            }
        }
        let colum = $(".life_block");
        for( let y = 0;y < Fheight; y++ ){
            for (let x = 0; x < Fwidth; x++ ) {
                cell[y][x] = rece[y][x];
                if( cell[y][x] === 1)
                colum.eq(y*Fheight+x).css("background", "lightgreen");
                else
                colum.eq(y*Fheight+x).css("background", "black");
            }
        }
    },20);
}