#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    char target[300];
    char password[100];
    char archive[200];
    char command[700];

    printf("Enter file/folder to zip: ");
    fgets(target, sizeof(target), stdin);

    printf("Enter archive name (without extension): ");
    fgets(archive, sizeof(archive), stdin);

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    // Remove newline characters
    target[strcspn(target, "\n")] = 0;
    archive[strcspn(archive, "\n")] = 0;
    password[strcspn(password, "\n")] = 0;

    // Build command (quotes handle spaces)
    sprintf(command,
            "cmd /c start \"\" \"C:\\Program Files\\7-Zip\\7z.exe\" a \"%s.7z\" \"%s\" -p\"%s\" -mhe=on",
            archive, target, password
    );

    printf("\nExecuting:\n%s\n\n", command);

    system(command);

    printf("Archive created successfully.\n");

    return 0;
}
