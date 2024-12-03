#include <bits/types/sigset_t.h>
#include <signal.h>
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

void printSigset(sigset_t *set) {
    for (int i = 1; i < NSIG; i++) {
        if (sigismember(set, i)) {
            printf("Signal %d is in the set\n", i);
        }
    }
}

int main(){
    sigset_t a;
    sigfillset(&a);
    printSigset(&a);
    return 0;
}
