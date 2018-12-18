const $ = el => document.querySelector(el);

$('#leng').addEventListener('input', e => {
    document.getElementById('value').innerHTML = $('#leng').value;
    $(':root').style.setProperty('--length', `${e.target.value}px`);
});