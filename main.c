#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  int taskCount = 0;
  char buffer[256];
  char newTask[] = "";
  if (argc <= 0) {
    printf("%s", "ERROR: Missing Arguement");
  } else {

    for (int i = 0; i < (argc - 1); i++) {
      if (strcmp(argv[i], "ls")) {
        if (fgets(newTask, sizeof(buffer), stdin) != NULL) {
          printf("%s %s", "new task added:", newTask);
          taskCount++;
        } else if (strcmp(argv[i], "add")) {
        }
        // add task
      } else if (strcmp(argv[i], "delete")) {
        // delete tasks
      }
    }
    return 0;
  }
}
