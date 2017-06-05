#include <stdio.h>
void __cyg_profile_func_enter(void *this_fn, void *call_site) {
    printf("0x%x ",(unsigned int)this_fn);
}
void __cyg_profile_func_exit(void *this_fn, void *call_site) {
//    printf("Return: 0x%x, 0x%x\n", (unsigned int)this_fn,(unsigned int)call_site);
}
