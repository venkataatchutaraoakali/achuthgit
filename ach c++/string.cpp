#include<iostream>
#include<ctype.h>
using namespace std;
class king{
    public:
char a[10];
char b[20]="ACHUTHRAO";
int i;
int j=0;
void ach(){
while(a[i]){
 putchar(toupper(a[i]));
     i++;
}
}

void bch(){
    while(b[j]){
        putchar(tolower(b[j]));
        j++;
    }
}
};



int main(){
    king sc;
    a
sc.ach();
sc.bch();
    return 0;
}