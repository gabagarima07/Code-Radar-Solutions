// Your code here...
void factorialRange(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n*(factorialRange(n-1));
    }
}

    


