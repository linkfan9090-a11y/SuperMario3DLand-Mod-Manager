
#include <3ds.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    gfxInitDefault();
    consoleInit(GFX_TOP, nullptr);

    printf("Super Mario 3D Land\n");
    printf("     Mod Manager\n");
    printf("--------------------------\n\n");
    printf("Homebrew Mod Manager\n\n");
    printf("Planned features:\n");
    printf("- Browse compatible mods\n");
    printf("- Manage installed mods\n");
    printf("- View mod information\n\n");
    printf("Press START to exit.");

    while (aptMainLoop())
    {
        hidScanInput();

        u32 kDown = hidKeysDown();

        if (kDown & KEY_START)
        {
            break;
        }

        gspWaitForVBlank();
        gfxSwapBuffers();
    }

    gfxExit();
    return 0;
}
