#include <stdio.h>
#include <string.h>

/*
    === TUGAS VIDEO TENTANG STACK & STRUCT ===

    NAMA  : RAMADHANI AHMAD
    KELAS : IF 03 - 03
    NIM   : 1203230106
    
*/

struct ktp 
{
    char NAMA[100];
    int USIA;
};

struct ktp odni[10];
int top = -1;

int empty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full()
{
    if (top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct ktp data)
{
    if (full())
    {
        return;
    }
    else
    {
        top++;
        odni[top] = data;
    }
}

void pop()
{
    if (empty())
    {
        printf("Stack kosong!\n");
    }
    else
    {
        top--;
    }
}

void peek()
{
    if (empty())
    {
        return;
    }
    else
    {
        printf("Data pada stack: %s, %d\n", odni[top].NAMA, odni[top].USIA);
    }
}

void init()
{
    struct ktp data1, data2, data3;
    strcpy(data1.NAMA, "Saddam Husein");
    data1.USIA = 69;
    strcpy(data2.NAMA, "Muammar Gaddafi");
    data2.USIA = 50;
    strcpy(data3.NAMA, "Muhammad Mursi");
    data3.USIA = 70; // Mengisi nilai USIA dengan benar

    push(data1);
    push(data2);
    push(data3);
}

int main()
{
    printf("+==========================+\n");
    printf("|       DATABASE KTP       |\n");
    printf("+==========================+\n");

    init();

    peek();

    pop();
    printf("Data yang di-pop: %s, %d\n", odni[top + 1].NAMA, odni[top + 1].USIA);

    pop();
    printf("Data yang di-pop: %s, %d\n", odni[top + 1].NAMA, odni[top + 1].USIA);

    pop();
    printf("Data yang di-pop: %s, %d\n", odni[top + 1].NAMA, odni[top + 1].USIA);

    pop(); // Pop stack (kosong)
    return 0;
}
