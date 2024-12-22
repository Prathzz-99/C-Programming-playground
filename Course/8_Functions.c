// Call by value 
#include <stdio.h>

int change(int a);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b=22,a=0;
    change(a); // The value of b remains 22
    printf("a is %d", a); 

    return 0;
}

// Call by reference

// #include <stdio.h>
// // int change(int a);

// int change(int *a) {
//     *a = 77; // Misnomer
//     return 0;
// }

// int main(){
//     int b=22;
//     change(&b); // The value of b remains 22
//     printf("b is %d", b); 

//     return 0;
// }