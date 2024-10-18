#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
    int     fd;
    char    buffer[100];
    char    c;
    for (int i = 5; i < 10; i++)
    {
        fd = open("asd.txt", O_CREAT | O_RDWR, 0644);
        if (fd == -1)
            return (0);
        printf("%d\n", fd);
        close(fd);
    }
    return (0);
}

// ben fatih hepsiburada stajyeri atalaya bugün malloc öğretiyorum...

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int	main(void)
//{
//	// char *str = malloc(sizeof(char) * 5);
//	// free(str);
//	// str =  malloc(sizeof(char) * 5);
//	//char *str = strdup("alp");
//	//printf("%s\n", str);
//	//free(str);
//	//str = calloc(4, 1);
//	//printf("%s\n", str);

//	//char *str = "fatih";
//	//printf("%s\n", str + 6);

//	// system("leaks a.out");
//}
/*#include <unistd.h>

void ft_putstr_fd(char *s, int fd) {
    if (s == NULL) return; 
    while (*s) {
        write(fd, s, 1);
        s++;
    }
}

void ft_putendl_fd(char *s, int fd) {
    if (s == NULL) return; 
    while (*s) {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1); // Yeni satır ekler
}

int main() {
    ft_putstr_fd("Merhaba, dünya!", 1); // Aynı satırda kalır
    ft_putstr_fd("Devam ediyor...", 1); // "Devam ediyor..." aynı satırda yazılır
    ft_putendl_fd("Merhaba, dünya!", 1); // Yeni satır eklenir
    ft_putendl_fd("Devam ediyor...", 1); // Bu yeni satırda yazılır
    return 0;
}
*/