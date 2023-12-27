#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  int taskCount = 0;
  char buffer[256];
  char newTask[] = "";
  if (argc <= 0) {
    printf("%s", "ERROR: Missing Arguement");
    return 0;
  } else {
    if (strcmp(argv[2], "l")) {
      printf("%s", "Current Tasks Todo:");
      for (int j = 0; j < sizeof(newTask); j++) {
        printf("%c", newTask[j]);
      }
    }
    if (strcmp(argv[2], "a")) {
      if (fgets(newTask, sizeof(buffer), stdin) != NULL) {
        printf("%s %s", "new task added:\0", newTask);
        taskCount++;
      }
      // add task
    }
    if (strcmp(argv[2], "d")) {
      // delete tasks
    }
  }
  return 0;
}
