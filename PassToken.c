
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello World!", stdout);
  /**
   * TODO:
   * Make Dockerfile
   * Setup Compose
   * Parse Arguments, (Includes setting up Docker to take in args)
   * Part 1: PassToken
   *   - build out client struct (linked list ?)
   *   - TCP connections to and from 2(n-1)
   *   - Token Processing ~ ~ ~ ~ (Assign token based on -x)
   *   ---| Token special message identified by its type
   *   ---| struct?
   *   ---| Increment state, print, sleep send
   */
}
