bool isHappy(int n) {

    

    int sum = 0;
    int rem = 0;
    int happy = 0;

while(n>0 && happy>0){

    happy=sum;

    while(n>0){
        rem=n%10;
        rem=rem*rem;
        sum=sum+rem;
        n=n/10;
    }

    happy=sum;
}
    
}