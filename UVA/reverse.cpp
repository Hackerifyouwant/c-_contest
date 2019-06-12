foo(10);
int foo(arg1){
    int v8=arg1;
    if(v8!=1){
        return v8*foo(v8-1);
        
    }
    return 1;
}

