#include <stdio.h>
# include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int tents_needed = 0;
        int result = tents(a, b, c);
        printf("%d\n", result);
    }
    return 0;
}
int tents(int a, int b, int c) {
    int tents_needed = 0;
        tents_needed += a;
        tents_needed += b / 3;
        b %= 3;
        while ((b) %3 !=0){
            b+=1;
            --c;
            if (c < 0){
            return -1; }
        }
        tents_needed += b / 3;
        int rem=0;
        while (c%3 !=0 && c>3){
                c--;
                rem++;}
        tents_needed += c / 3;
        if (rem%2==0){
            tents_needed +=rem/2;
        }
        else{
            tents_needed =rem;
        }
        return (tents_needed);
}




