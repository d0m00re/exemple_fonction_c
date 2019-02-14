#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char **argv)
{
        struct dirent *lecture;
        DIR *rep;

        if (argc < 2)
                return (1);
        if (!(rep = opendir(argv[1])))
        {
                printf("Error :)\n");
                return (0);
        }
        while ((lecture = readdir(rep))) {
                printf("%s\n", lecture->d_name);
        }
        closedir(rep);
}
