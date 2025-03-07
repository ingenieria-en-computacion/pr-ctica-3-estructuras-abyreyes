#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c= conjunto_vacio();
    d= conjunto_vacio();
    e= conjunto_vacio();
    
    printf("El conjunto c está vacio %d\n", es_vacio(c));
    c= agregar(c, 2);
    c= agregar(c, 3);
    c= agregar(c, 19);
    c= agregar(c, 11);
    c= agregar(c, 15);
     print_conjunto(c);
     
    d= agregar(d, 2);
    d= agregar(d, 3);
    d= agregar(d, 19);
    d= agregar(d, 11);
    d= agregar(d, 15);
    print_conjunto(d);
    
    e= _union(c, d);
    print_conjunto(e);
    
    return 0;
}
