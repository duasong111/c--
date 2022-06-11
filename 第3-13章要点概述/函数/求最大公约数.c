int gcd ( int u, int v ){
    while(u!=v){
        if(u>v)
           u= u - v;
        if(v > u)
            v = v-u ;
    }
    return u; 
}
