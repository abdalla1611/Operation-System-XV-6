#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
#include "kernel/perf.h"


void print_perf(struct perf *performance);

int main(int argc, char** argv){
  printf("hello");
  int pid1, status1;
    struct perf perf2;
    pid1 = fork();
    if (pid1 > 0) {
      printf("abdalla");
        wait_stat(&status1, &perf2);
        printf(" sleman");
        print_perf(&perf2);
    } else {
        for (int a = 0; a < 10; ++a) {
          sleep(1);
              
}
    }
exit(0);
    }

void print_perf(struct perf *performance) {
    fprintf(1, "pref:\n");
    fprintf(1, "\tctime: %d\n", performance->ctime);
    fprintf(1, "\tttime: %d\n", performance->ttime);
    fprintf(1, "\tstime: %d\n", performance->stime);
    fprintf(1, "\tretime: %d\n", performance->retime);
    fprintf(1, "\trutime: %d\n", performance->rutime);
    fprintf(1, "\n\tTurnaround time: %d\n", (performance->ttime - performance->ctime));
}