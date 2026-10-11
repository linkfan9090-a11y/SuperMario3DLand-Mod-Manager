
#include <3ds.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    printf("Super Mario 3D Land\n");
    printf("Mod Manager\n\n");
    printf("Build test successful!\n\n");
    printf("Press START to exit.");

    while (aptMainLoop())
    {
        hidScanInput();

        if (hidKeysDown() & KEY_START)
            break;

        gspWaitForVBlank();
        gfxSwapBuffers();
    }

    gfxExit();
    return 0;
}
