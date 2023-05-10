function kalkulator(){
    var bil1 = document.getElementById('bil1');
    var bil2 = document.getElementById('bil2');
    var operator = document.getElementById('operator');
    var hasil;
    if (operator.value == '+') {
        hasil = parseInt(bil1.value) + parseInt(bil2.value);
    }
    if (operator.value == '-') {
        hasil = parseInt(bil1.value) - parseInt(bil2.value);
    }
    if (operator.value == '/') {
        hasil = parseInt(bil1.value) / parseInt(bil2.value);
    }
    if (operator.value == '*') {
        hasil = parseInt(bil1.value) * parseInt(bil2.value);
    }
    if (operator.value == '%') {
        hasil = parseInt(bil1.value) % parseInt(bil2.value);
    }
    document.getElementById('hasil').innerHTML=hasil;
}