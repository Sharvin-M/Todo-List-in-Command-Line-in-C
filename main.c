#include <stdio.h>
#include <string.h>

void delete()
{
  char input[100];
  printf("Enter the input: ");
  fgets(input, sizeof(input), stdin);
  printf("Input: %s", input);
}

void ls()
{
  char input[100];
  printf("Enter the input: ");
  fgets(input, sizeof(input), stdin);
  printf("Input: %s", input);
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
  if (&argv[1] == "delete")
  {
    delete ();
  }
  else if (&argv[1] == "add")
  {
    add();
  }
  else
  {
    ls();
  }
}