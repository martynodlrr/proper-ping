#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  const char *destination = "google.com";

  while (1) {
    char command[256];
    snprintf(command, sizeof(command), "ping -c 1 -W 1 %s >/dev/null 2>&1",
             destination);
    int result = system(command);

    if (result == 0) {
      printf("\rDestination is now reachable!\n");
      break;
    } else {
      for (int each = 0; each < 4; ++each) {
        printf("\rWaiting for response%.*s   \b\b\b", each, "...");
        fflush(stdout);
        sleep(1);
      }
    }
  }

  return 0;
}
