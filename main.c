#include <stdio.h>
char input[100];

void ls()
{
  for (int i = 0; i < 100; i++)
  {
    printf(input[i]);
  }
}

void add()
{
  char input[100];
  printf("Enter the input: ");
  fgets(input, sizeof(input), stdin);
  printf("Input: %s", input);
}

int main(int argc, char *argv[])
{
  if (strcmp(argv[1], "delete"))
  {
    delete ();
  }
  else if (argv[1] == "add")
  {
    add();
  }
  else
  {
    ls();
  }
}
