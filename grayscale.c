#include <stdio.h>
#include <ApplicationServices/ApplicationServices.h>

CG_EXTERN bool CGDisplayUsesForceToGray(void);
CG_EXTERN void CGDisplayForceToGray(bool forceToGray);

int
main(int argc, char** argv)
{
    bool curr = CGDisplayUsesForceToGray();

    bool next = !curr;
    CGDisplayForceToGray(next);

    curr = CGDisplayUsesForceToGray();
    printf("grayscale %d\n", curr);

    return 0;
}
