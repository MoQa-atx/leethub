int missingNumber(int* numbers, int n){
    int check [10000];
    int b = 0;
    for(int i = 0; i <= n; i++){
        check[i] = b;
        b++;
    }

    int toplam = 0;
    for(int i = 0; i < n + 1; i++){
        toplam = toplam + check[i];
    }

    int moqa = 0;
    for(int i = 0; i < n; i++){
        moqa = moqa + numbers[i];
    }

    int berou = 0;
    if(moqa != toplam){
        berou = toplam - moqa;
        return berou;
    }

    return 0;
}