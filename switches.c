#include <stdio.h>

int main(){

/* Switches are used when you know all the possible inputs such as menus and there are finite choices that you know */

    char num;
    scanf("%c", &num);

    switch (num)
    {
	case 'A':
	    printf("1 \n");
	    break;
	case 'B':
	    printf("2 \n");
	    break;
	default:
	    printf("Non Valid \n");

    }
    return 0;
}

